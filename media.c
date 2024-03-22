#include <stdio.h>

int main(void)
{
    float p1, p2, p3, p4;
    float mediafinal;
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);
    scanf("%f", &p4);
    mediafinal = (p1 + p2 + p3 + p4) / 4;
    if (mediafinal >=7){
        printf("Aprovado ");
    }
    else {
        printf ("Reprovado ");
    }
    printf("%f", mediafinal);

    return (0);
}
