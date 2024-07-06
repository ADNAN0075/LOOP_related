#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter your two number :");
    scanf("%d %d",&X,&Y);

    while(X !=Y)
    {
        printf("%d,",X*X);
        if(X<Y)
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    printf("Reached!");
    return 0;
}
