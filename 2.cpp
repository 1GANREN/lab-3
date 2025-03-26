#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>// эта библеотека дл€ посто€но рандомных чисел
#include <conio.h>// эта чтобы убрать последние 4 строки
int main()
{
    //-------------------------
    system("chcp 1251");
    //system("");
    srand(time(NULL));// задаетс€ чтобы был рандом
    //-------------------------
    int a,b, attempts;
    int randnumber, randnumbers;
    int randatt = 0, d;
    //-------------------------
    printf("\n введите минимальное число "); scanf("%d", &b);
    printf("\n введите максимальное число "); scanf("%d", &a);
    printf("\n введите количество попыток "); scanf("%d", &attempts);
    //-------------------------
    randnumber = a-b;
    randnumbers = rand() % randnumber + b;
    printf("\n %d", randnumbers);
    printf("\n  оличество попыток %d ", attempts);
    
    while( randatt <= attempts) {
        printf("\n¬ведите ваше число:\n ");
        scanf("%d", &d);
        if (d == randnumbers) {
            printf("\n вы угадали загадоное число");
            break;
        }
        else {
            if (d > randnumbers) {
                printf("\n его число меньше");
                randatt++;
            }
            else {
                if (d < randnumbers) {
                    printf("\n его число больше");
                    randatt++;
                }
               
            }
            
        }
         printf("\n” вас осталось %d попыток", attempts- randatt);
         
    }
    _getch();// уберает 4 строки
}
    
    
    
    