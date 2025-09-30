//Multiply two matrices.
#include <stdio.h>
#define MAX 10
void multiply(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
   int i, j, k;
   // Initializing elements of matrix mult to 0.
   for(i = 0; i < rowFirst; ++i) {
      for(j = 0; j < columnSecond; ++j) {
         result[i][j] = 0;
      }
   }
   // Multiplying first and second matrices and storing in result.
   for(i = 0; i < rowFirst; ++i) {
      for(j = 0; j < columnSecond; ++j) {
         for(k = 0; k < columnFirst; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}