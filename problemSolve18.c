#include <stdio.h>
int main()
{
    int num, ori, rev = 0, digit;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    ori = num;

    // Reverse the number
    while (num != 0)
    {
        digit = num % 10;
        rev = rev* 10 + digit;
        num /= 10;
    }

    // Output the result
    if (ori == rev)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


}
