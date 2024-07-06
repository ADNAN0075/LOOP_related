#include<stdio.h>
int main()
{
    int X,N,i,guess;
    printf("Enter your guess number:");
    scanf("%d",&X);
    printf("Number of tries :");
    scanf("%d",&N);
    for( i=1; i<=N; i++)
    {
        printf("Enter your guess number  :",i);
        scanf("%d",&guess);
        if(X==guess)
        {
            printf("Right, Player-2 wins!\n");
            break;
        }

        else
        {
            printf("Wrong, %d choice(s) Left!\n",N-i);
        }
    }
    if(i>N)
    {
        printf("Player-1 wins\n");
    }
    return 0;
}
