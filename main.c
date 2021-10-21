/*
Blanco Conde Luis Antonio
Rivas Gutiérrez Carlos Andres
Serratos Mendoza Santiago
 */
#include <stdlib.h>
#include <stdio.h>
#include "arbol.h"
#include <string.h>

int main()
{
    
    char opc;
    short int checa;
    char string[100];
    A *inicio = NULL, *num = NULL;
    manda_insert(&inicio);
    while(opc!='0'){
        printf("\nConcurso Programacion\n\n1.Insertar palabra a convertir\n0.Salir \nopc: ");
        fflush(stdin);
        scanf("%c",&opc);
            switch (opc)
            {
            case '1':
                printf("\nInserta palabra a convertir: ");
                fflush(stdin);
                gets(string);
                leer_entrada(string,inicio);
                break;
            case '0':
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("Entrada no valida\n");
                break;
            }            

    }

}