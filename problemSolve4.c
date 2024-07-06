#include<stdio.h>
int main()
{
    int N;
    float num,sum=0,AvG;
    printf("Enter your number :");
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        printf("Enter number:%d:",i);
        scanf("%f",&num);
        sum+=num;
    }
    AvG =sum/N;
    printf("AVG of inputs :%f",AvG);
    return 0;
}
