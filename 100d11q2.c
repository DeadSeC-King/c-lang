//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("Enter cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("Profit percentage is %.2f%%",profit/cp*100);
    }
    else if(cp>sp){
        loss=cp-sp;
        printf("Loss percentage is %.2f%%",loss/cp*100);
    }
    else{
        printf("No profit no loss");
    }
    return 0;

}