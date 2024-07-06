#include <stdio.h>
#include <math.h>

int main()
{
    float x, terminal, sum = 0;
    int i, j, sign = 1;

    scanf("%f", &x);

    for (i = 0; i < 10; i++)
    {
        // Calculate the factorial of (2i + 1)
        double factorial = 1;
        for (j = 1; j <= (2 * i + 1); j++)
        {
            factorial *= j;
        }
        terminal = sign * pow(x, 2 * i + 1) / factorial;
        sum += terminal;
        sign = -sign;
    }

    printf("%.3f\n",sum);

    return 0;
}
