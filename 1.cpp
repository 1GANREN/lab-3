#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
    //-------------------------
    system("chcp 1251");
    //system("");
    //-------------------------
    int n,k;
    //-------------------------
    printf("\nвведите число N ");
    scanf("%d",&n);
    for (int a = 2; a <= n; a++) {
        k = 0;
       
        for (int b = 2;b < a; b++) {
            if (a % b == 0) {
                k = 1;
            }
        }
        if (k == 0) {
            printf("%d ", a);
        }
    }
        
    return 0;
}