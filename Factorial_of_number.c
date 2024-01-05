/*
Program Name : Factorial of Number 
Program Developer : Sujal Vishwkarma 
Date : 05-01-2024 
*/
#include<stdio.h>
#include<conio.h>
int Factorial(int num);
int main()
{
    int num,res;
    printf("Factorial\n");
    printf("Enter Number :");
    scanf("%d",&num);
    res = Factorial(num);
    printf("%d",res);
}
int Factorial(int num)
{
    return (num==1)? 1 : num * Factorial(num-1);
}
