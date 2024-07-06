#include<stdio.h>
int main()
{
    int num,digit=0,reverse=0;
    printf("Enter your number :");
    scanf("%d",&num);
    while(num !=0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    printf("reverse :%d",reverse);
    return 0;
}
