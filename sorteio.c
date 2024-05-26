#include <stdio.h>  // necessario para as funcoes de input e output
#include <stdlib.h> // necessario para as funcoes "rand()" e "srand()"
#include <time.h>   // necessario para usar a hora atual na geracao da semente

void bubbleSort(int *v, int n)
{
    if (n < 1)
        return;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[i + 1])
        {
            int temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
    }

    bubbleSort(v, n - 1);
}

int main()
{
    int vetor[6];
    // Semente para gerar um numero aleatorio
    srand(time(0));
    for (int i = 0; i < 6; i++)
    {
        int existe;
        int num;
        do
        {
            existe  = 0;
            // Sorteia um numero entre 1 e 60 (incluindo o 60)
            num = rand() % 61;
            int p = 0;
            while (p < i)
            {
                if (vetor[p] == num)
                {
                    existe = 1;
                    break;
                }
                p++;
            }

        } while (existe == 1);
        vetor[i] = num;
    }

    bubbleSort(vetor, 5);
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Numero ordenado: %d \n", vetor[i]);
    }

    return 0;
}
