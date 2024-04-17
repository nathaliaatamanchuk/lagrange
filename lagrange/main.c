/* ESTE CÓDIGO FOI REALIZADO PELO GRUPO:
   Anna Júlia Pereira de Oliveira Andrade, RA: 234659
   Kaique Vecchia Alves, RA: 235446
   Nathalia Atamanchuk Baleeiro, RA: 235215

    <- DESCRIÇÃO ->
    O código foi desenvolvido para calcular a interpolação de Newton através da Forma de Lagrange,
    onde o usuário insere o grau do polinômio e os pontos, tão como um valor de X, e então o programa
    calcula e exibe os valores Lk(x) enquanto o usuário desejar.
*/

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


