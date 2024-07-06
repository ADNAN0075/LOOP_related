#include <stdio.h>

int main()
{
    int num1, num2, originalA, originalB, GCD, LCM ;

    // Input two positive integers

    scanf("%d %d", &num1, &num2);

    originalA = num1;
    originalB = num2;

    // Calculate GCD

    for(int i=1; i <= num1 && i <= num2; ++i)
    {
        // Checks if i is factor of both integers
        if(num1%i==0 && num2%i==0)
            GCD = i;
    }

    // Calculate LCM
    LCM = (originalA * originalB) / GCD;

    // Output the results
    printf("GCD: %d\n", GCD);
    printf("LCM: %d\n", LCM);

    return 0;
}
