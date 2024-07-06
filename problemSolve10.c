#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter your number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        if(i%2==0)
        {
            sum-=i;
        }
        else
        {
            sum+=i;
        }
    }
     printf("result:%d\n",sum);
    return 0;
}
