/*
Program Name : Fibonacci Series 
Program Developer : Sujal Vishwkarma 
Date : 05-01-2024 
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 0, b = 1, next = 0, num;
    printf("Enter Number : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", next);
        next = a + b;
        a = b;
        b = next;
    }
    
    getch();
}
