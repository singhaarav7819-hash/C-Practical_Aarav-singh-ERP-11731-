#include<stdio.h>
int main(){
    //Practical 7: Q.3.pattern//
    // aarav singh erp 11731 //
    int n;
    scanf("%d",&n);
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        ch='A';
    }
    return 0;
}
/*5
A
AB
ABC
ABCD
ABCDE*/