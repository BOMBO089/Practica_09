/*

Gonzalez Huerta Alonso  7/5/25
Utilizando una lista capturar las 5 calificaciones de un alumno e imprimir el promedio

*/

#include<stdio.h>

int main()
{
    int arr[5];
    int i, calif = 0;
    float prom;

    for ( i = 0; i < 5; i++)
    {
        printf("Calificacion %i: ",i+1);
        scanf("%i",&arr[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        calif = calif + arr[i];
    }
    prom = calif / 5;

    printf("\n");
    printf("El promedio es: %0.2f\n",prom);
    
    return 0;
}
