#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0;
    printf("Enter your number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        sum+=(pow(i,2)*(i+1));
    }
        printf("result:%d",sum);
    return 0;
}
