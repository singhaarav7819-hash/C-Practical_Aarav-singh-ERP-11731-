#include<stdio.h>
int main(){
    // aarav singh,erp-11731//
    //Practical 6 : Q.2 sum of even number using continue.//
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) continue;
        sum=sum+i;
    }
    printf("sum of even number from 1 to %d is %d",n,sum);
    return 0;

}
/*
enter a number:5
 sum of even number from 1 to 5 is 6*/