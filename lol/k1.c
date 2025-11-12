/*1.Write a program to print "Hello World".

2.Write a program to input two numbers and print their sum.

3.Write a program to find the area of a circle given the radius.

4.Write a program to check whether a number is even or odd.

5.Write a program to swap two numbers (using a third variable).

6.Write a program to swap two numbers (without using a third variable).

7.Write a program to convert Celsius to Fahrenheit.

8.Write a program to find the largest of two numbers.

9.Write a program to check whether a number is positive, negative, or zero.

10.Write a program to calculate simple interest.*/

#include <stdio.h>
int main(){
    int a;
    printf("enter the program you want to run!");
    scanf("%d",&a);
    if (a==1){
        printf("hello world!");
    }
    elseif(a==2);{
            int c;
            int b;
            printf("enter first number");
            scanf("%d",&c);
            printf("enter second number");
            scanf("%d",&b);
            printf("the sum is %d",(c+b));
    }
    else{
        printf("invalid input");
    }
}