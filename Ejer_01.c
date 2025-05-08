/*

Gonzalez Huerta Alonso  7/5/25
Crear una lista de 5 enteros e imprimir la lista

*/

#include<stdio.h>

int main()
{
    int arr[5] = {5,10,15,20,25};
    int i;
    
    printf("Los numeros de la lista son: ");

    for ( i = 0; i < 5; i++)
    {
        printf(" %i ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
