#include<stdio.h>
int main()
{
    char input;
    int i=1;

    while(1)
    {
        printf("Input %d:",i);
        scanf(" %c",&input);
        if(input=='A' || input=='a')
        {
            break;
        }
        i++;
    }
    return 0;
}
