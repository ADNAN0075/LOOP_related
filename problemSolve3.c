#include<stdio.h>
int main()
{


int num;
printf("Enter your number :");
scanf("%d",&num);

for(int i=1; i<=num ; i++)
{
    if(i % 2!=0)
    {
        printf("1");
    }
    else if(i % 2 ==0)
    {
        printf("0");
    }
    if(i<num)
    {
        printf(",");
    }

}


  return 0;
}

