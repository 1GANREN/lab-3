#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>// ��� ���������� ��� �������� ��������� �����
#include <conio.h>// ��� ����� ������ ��������� 4 ������
int main()
{
    //-------------------------
    system("chcp 1251");
    //system("");
    srand(time(NULL));// �������� ����� ��� ������
    //-------------------------
    int a,b, attempts;
    int randnumber, randnumbers;
    int randatt = 0, d;
    //-------------------------
    printf("\n ������� ����������� ����� "); scanf("%d", &b);
    printf("\n ������� ������������ ����� "); scanf("%d", &a);
    printf("\n ������� ���������� ������� "); scanf("%d", &attempts);
    //-------------------------
    randnumber = a-b;
    randnumbers = rand() % randnumber + b;
    printf("\n %d", randnumbers);
    printf("\n ���������� ������� %d ", attempts);
    
    while( randatt <= attempts) {
        printf("\n������� ���� �����:\n ");
        scanf("%d", &d);
        if (d == randnumbers) {
            printf("\n �� ������� ��������� �����");
            break;
        }
        else {
            if (d > randnumbers) {
                printf("\n ��� ����� ������");
                randatt++;
            }
            else {
                if (d < randnumbers) {
                    printf("\n ��� ����� ������");
                    randatt++;
                }
               
            }
            
        }
         printf("\n� ��� �������� %d �������", attempts- randatt);
         
    }
    _getch();// ������� 4 ������
}
    
    
    
    