/*

Gonzalez Huerta Alonso  7/5/25
Representacion de funciones en C

*/

#include<stdio.h>

int suma(int a, int b)
{
    return(a+b);
}

void main()
{   
    int res, a = 10, b = 10;

    res = suma(a,b);
    printf("La suma es: %i\n",res);

}

/*

int suma(int a ,int b)

void main()
{   
    int res, a = 10, b = 10;

    res = suma(a,b);
    printf("La suma es: %i\n",res);

}

int suma(int a, int b)
{
    return(a+b);
}

*/

