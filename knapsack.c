#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_ITEMS 1000
#define MAX_CAPACITY 10000
#define LINE_SIZE 4096

static int read_nonempty_line(FILE *in, char *line, size_t size) {
    while (fgets(line, (int)size, in)) {
        char *p = line;
        while (isspace((unsigned char)*p)) p++;
        if (*p != '\0') return 1;
    }
    return 0;
}

static void print_table(int W, int dp[MAX_ITEMS + 1][MAX_CAPACITY + 1], int processed) {
    int c;
    printf("\nDP table after item %d:\n", processed);
    printf("item\\cap | ");
    for (c = 0; c <= W; c++) printf("%3d ", c);
    printf("\n");
    for (int r = 0; r <= processed; r++) {
        printf("%8d | ", r);
        for (c = 0; c <= W; c++) printf("%3d ", dp[r][c]);
        printf("\n");
    }
}

int main(void) {
    char line[LINE_SIZE];
    int test_no = 0;
    FILE *out = fopen("result.txt", "w");
    if (!out) {
        perror("Could not create result.txt");
        return 1;
    }

    while (fgets(line, sizeof(line), stdin)) {
        char *p = line;
        while (isspace((unsigned char)*p)) p++;
        if (strncmp(p, "#Test", 5) != 0) continue;

        if (!read_nonempty_line(stdin, line, sizeof(line))) break;
        int n, W;
        if (sscanf(line, "%d %d", &n, &W) != 2 ||
            n < 0 || n > MAX_ITEMS || W < 0 || W > MAX_CAPACITY) {
            fprintf(stderr, "Invalid test header: %s", line);
            fclose(out);
            return 1;
        }

        int weights[MAX_ITEMS], values[MAX_ITEMS];
        for (int i = 0; i < n; i++) {
            if (!read_nonempty_line(stdin, line, sizeof(line)) ||
                sscanf(line, "%d %d", &weights[i], &values[i]) != 2 ||
                weights[i] < 0) {
                fprintf(stderr, "Invalid or missing weight/value pair for item %d.\n", i + 1);
                fclose(out);
                return 1;
            }
        }

        static int dp[MAX_ITEMS + 1][MAX_CAPACITY + 1];
        memset(dp, 0, sizeof(dp));
        printf("\n========== TEST CASE %d | n=%d, W=%d ==========\n",
               ++test_no, n, W);
        printf("Starting DP table (no items processed):\n");
        print_table(W, dp, 0);

        for (int i = 1; i <= n; i++) {
            for (int c = 0; c <= W; c++) {
                dp[i][c] = dp[i - 1][c];
                if (weights[i - 1] <= c) {
                    int take = values[i - 1] + dp[i - 1][c - weights[i - 1]];
                    if (take > dp[i][c]) dp[i][c] = take;
                }
            }
            printf("\nConsidering item %d: weight=%d, value=%d\n",
                   i, weights[i - 1], values[i - 1]);
            print_table(W, dp, i);
        }

        printf("\nMaximum value for test case %d: %d\n", test_no, dp[n][W]);
        fprintf(out, "#Test %d input (%d %d) result %d\n",
                test_no, n, W, dp[n][W]);
    }

    fclose(out);
    printf("\nAll test cases processed. Results saved to result.txt\n");
    return 0;
}
