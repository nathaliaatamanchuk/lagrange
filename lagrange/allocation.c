#include "allocation.h"

void aloca_struct(data_vector_t **data_vector, int ponto) {
    *data_vector = (data_vector_t *)malloc(ponto * sizeof(data_vector_t));
    if(*data_vector == NULL) {
        printf("Erro de alocacao de memoria\n");
        exit(1);
    }
}