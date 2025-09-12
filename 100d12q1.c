//Write a program to calculate library fine based on late days as follows:
/*First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main(){
    int days;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &days);
    if(days <= 5){
        printf("The fine is: ₹%d\n", days * 2);
    }
    else if(days <= 10){
        printf("The fine is: ₹%d\n", (5 * 2) + ((days - 5) * 4));
    }
    else if(days <= 30){
        printf("The fine is: ₹%d\n", (5 * 2) + (5 * 4) + ((days - 10) * 6));
    }
    else{
        printf("Membership Cancelled.\n");
    }
    return 0;
}