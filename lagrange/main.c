#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void aloca(int ponto, double **x, double **y);
double lagrange(int ponto, double *x, double *y, double xi);

int main(void) {
    int grau, ponto;
    double *x = NULL, *y = NULL, xi, lk;
    char answer;

    printf("Insira o grau da funcao: ");
    scanf("%d", &grau);
    ponto = grau + 1;

    aloca(ponto, &x, &y);
    printf("Digite os valores de x e de f(x):\n");
    for (int i = 0; i < ponto; i++) {
        printf("x[%d] = ", i);
        scanf(" %lf", x + i);
        printf("f(x[%d]) = ", i);
        scanf(" %lf", y + i);
    }

    do {
        printf("\n\nDigite o valor de x para interpolacao: ");
        scanf(" %lf", &xi);

        lk = lagrange(ponto, x, y, xi);
        printf("\n\nP(%.2f) = %.3lf\n", xi, lk);

        printf("\nDeseja calcular outro valor (S/N)? ");
        scanf(" %c", &answer);
        system("cls");

    } while (tolower(answer) == 's');

    free(x);
    free(y);

    return 0;
}

void aloca(int ponto, double **x, double **y) {
    *x = (double *)malloc(ponto * sizeof(double));
    *y = (double *)malloc(ponto * sizeof(double));
    if (!(*x) || !(*y)) {
        perror("Erro ao alocar memória");
        exit(EXIT_FAILURE);
    }
}

double lagrange(int ponto, double *x, double *y, double xi) {
    double resultado = 0;
    for (int i = 0; i < ponto; i++) {
        double termo = 1;
        for (int j = 0; j < ponto; j++) {
            if (j != i) {
                termo *= (xi - *(x + j)) / (*(x + i) - *(x + j));
                printf("L[%i]= %.3lf\n", j, termo);
            }
        }
        resultado += (*(y + i) * termo);
    }
    return resultado;
}
