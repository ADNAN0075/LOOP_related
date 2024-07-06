#include<stdio.h>
int main()
{
    int num, fact=1;
    scanf("%d",&num);
    int x=num;
    printf("%d!=",num);
    for(int i=1; i<=num; i++)
    {
        printf("%d",x--);
        if(i<num)
        {
            printf("X");
        }
        fact*=i;
    }
    printf("=%d\n",fact);
    return 0;
}
