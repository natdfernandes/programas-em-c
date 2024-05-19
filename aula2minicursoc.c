#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0;
    printf("informar dois numeros:");
    scanf("%d%d", &num1, &num2);
    printf("numeros inf1ormados: %d e %d e a soma de dos dois: %d\n",
           num1, num2, num1 + num2);
}