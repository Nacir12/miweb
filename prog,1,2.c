/*Nacir 20220707*/

#include <stdio.h>

/* Invierte datos
El programa, al recibir como dato un conjunto de datos de entrada, invierte el
➥orden de los mismos cuando los imprime.
A, B, C y D: variables de tipo entero. */

int main(void)

{
int A, B, C, D;

printf("Ingrese cuatro datos con comas de tipo entero:");

scanf("%d %d %d %d", &A, &B, &C, &D);

printf ("\n %d %d %d %d\n", &D, &C, &B, &A);

return 0;

}