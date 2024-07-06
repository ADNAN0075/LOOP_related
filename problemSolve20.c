#include <stdio.h>
int main() {
    int num, i, j, sum = 0, terminal;
    printf("Enter your number:");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        terminal = 0;
        for(j = 1; j <= i; j++) {
            terminal = terminal * 10 + j;
        }
        sum += terminal;
    }
    printf("%d\n", sum);

    return 0;

}
