#include<stdio.h>
int main(){
    // aarav singh ,erp-11731//
    // Practical 6 : Q.1. print numbers from a to b using loops.// 
    int a;
    printf("enter number a:");
    scanf("%d",&a);
    int b;
    printf("enter number b:");
    scanf("%d",&b);
    printf("numbers from %d to %d is ",a,b);
    for(int i=a;i<=b;i++){
        printf("%d ",i);
    }
    return 0;

}
/*
enter number a:6
enter number b:8
numbers from 6 to 8 is 6 7 8  */