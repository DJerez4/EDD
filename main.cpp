// Librerias
#include <stdio.h>

// Variables
int semestre = 2;
int numero;


// Funcion main
int main(){
    printf("Jamaica!\n");
    printf("Bienvenido al %d semestre\n", semestre);
    printf("Ingrese su matricula: ");
    scanf("%d", &numero);
    printf("Bienvenido %d al %d semestre!", numero, semestre);

    return 0;
}
