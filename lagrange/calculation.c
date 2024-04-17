#include "calculation.h"

double lagrange(data_static_t *data_static, data_vector_t *data_vector){
    double resultado = 0;
    for (int i = 0; i < data_static->ponto; i++) {
        double termo = 1;
        for (int j = 0; j < data_static->ponto; j++) {
            if (j != i) {
                termo *= (data_static->xi - (data_vector + j)->x ) / ((data_vector + i)->x - (data_vector + j)->x);
                printf("L[%i]= %.3lf\n", j, termo);
            }
        }
        resultado += ((data_vector + i)->y * termo);
    }
    return resultado;
}
