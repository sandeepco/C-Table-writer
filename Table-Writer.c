#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d.\n", n);
    printf("************************************************\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d\n", n, i);
    }
    printf("************************************************\n");
    return 0;
}