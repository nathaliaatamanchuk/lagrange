#include "display.h"

void display_read_degree(data_static_t *data_static){
    printf("Insira o grau da funcao: ");
    scanf("%d", &data_static->grau);
    data_static->ponto = data_static->grau + 1;
}

void display_read_values(data_static_t *data_static, data_vector_t *data_vector){
    int i;
    printf("Digite os valores de x e de f(x):\n");

    for (i = 0; i < data_static->ponto; i++, data_vector++) {
        printf("x[%d] = ", i);
        scanf(" %lf", &data_vector->x);
        printf("f(x[%d]) = ", i);
        scanf(" %lf", &data_vector->y);
    }
}

void display_want_to_continue(data_static_t *data_static, data_vector_t *data_vector) {
    printf("\n\nDigite o valor de x para interpolacao: ");
    scanf(" %lf", &data_static->xi);

    data_static->lk = lagrange(data_static, data_vector);
    printf("\n\nP(%.2f) = %.3lf\n", data_static->xi, data_static->lk);

    free(data_vector);
    free(data_static);
}


