#ifndef CALCULATION_H
#define CALCULATION_H
#include <stdio.h>

typedef struct {
    int grau;
    int ponto;
    double xi;
    double lk;
}data_static_t;

typedef struct {
    double x;
    double y;
}data_vector_t;

double lagrange(data_static_t *data_static, data_vector_t *data_vector);

#endif //CALCULATION_H
