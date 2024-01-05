#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int BinaryToDecimal(int num);

int main()
{
    int num , res ;
    printf("Binary to Decimal\n");
    printf("Enter Binary :");
    scanf("%d",&num);
    res = BinaryToDecimal(num);
    printf("Result : %d",res);
    getch();
}

int BinaryToDecimal(int num)
{
    int Dec_value=0;
    int base = 1;
    int last_digit;
    while(num!=0)
    {
        last_digit = num % 10 ;
        Dec_value += last_digit * base ;
        num /= 10 ;
        base *= 2 ; 
    }
    return Dec_value ;
}