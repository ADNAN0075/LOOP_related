#include <stdio.h>

int main()
{
    int num;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num <= 1)
        {
            printf("Not  prime\n");
        }
        else
        {
            int Prime = 1;
            for(int i = 2; i <= num/2; i++)
            {
                if(num % i == 0)
                {
                    Prime = 0;
                    break;
                }
            }
            if(Prime)
            {
                printf("Prime\n");
            }
            else
            {
                printf("Not Prime\n");
            }
        }
     }

     return 0;
}
