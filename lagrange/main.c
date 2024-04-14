#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calculation.h"
#include "display.h"
#include "allocation.h"

int main(void) {
    data_static_t data_static;
    data_vector_t *data_vector = NULL;
    char answer;

    do {
        display_read_degree(&data_static);
        aloca_struct(&data_vector, data_static.ponto);
        display_read_values(&data_static, data_vector);
        display_want_to_continue(&data_static, data_vector);

        printf("\nDeseja calcular outro valor (S/N)? ");
        scanf(" %c", &answer);
        system("cls");
    }while (tolower(answer) == 's');

    return 0;
}


