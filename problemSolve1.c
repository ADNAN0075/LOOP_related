#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++ )
    {
        printf("%d",i);
        if(i<n)
        {
            printf(",");
        }
    }

    return 0;
}
