#ifndef DISPLAY_H
#define DISPLAY_H
#include "calculation.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void display_read_degree(data_static_t *data_static);
void display_read_values(data_static_t *data_static, data_vector_t *data_vector);
void display_want_to_continue(data_static_t *data_static, data_vector_t *data_vector);

#endif //DISPLAY_H