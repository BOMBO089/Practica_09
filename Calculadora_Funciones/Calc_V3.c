#include <stdio.h>
#include <math.h>

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

float potencia(float a, int b) {
    return pow(a, b);
}

float raiz(float a) {
    return sqrt(a);
}

int main() {
    float a, b, res;
    int c, opc;

    do {
        printf("\nCALCULADORA 3.0\n");
        printf("---------------------\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Potenciacion\n");
        printf("6. Raiz cuadrada\n");
        printf("0. Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%i", &opc);

        switch (opc) {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%f", &a);
                printf("Ingrese otro numero: ");
                scanf("%f", &b);
                printf("La suma es: %.2f\n", suma(a, b));
                break;

            case 2:
                printf("Ingrese un numero: ");
                scanf("%f", &a);
                printf("Ingrese otro numero: ");
                scanf("%f", &b);
                printf("La resta es: %.2f\n", resta(a, b));
                break;

            case 3:
                printf("Ingrese un numero: ");
                scanf("%f", &a);
                printf("Ingrese otro numero: ");
                scanf("%f", &b);
                printf("La multiplicacion es: %.2f\n", multiplicacion(a, b));
                break;

            case 4:
                printf("Ingrese el dividendo: ");
                scanf("%f", &a);
                printf("Ingrese el divisor: ");
                scanf("%f", &b);
                if (b != 0) {
                    printf("La division es: %.2f\n", division(a, b));
                } else {
                    printf("Error: no se puede dividir entre 0.\n");
                }
                break;

            case 5:
                printf("Ingrese la base: ");
                scanf("%f", &a);
                printf("Ingrese el exponente (entero): ");
                scanf("%d", &c);
                printf("El resultado es: %.2f\n", potencia(a, c));
                break;

            case 6:
                printf("Ingrese el numero: ");
                scanf("%f", &a);
                if (a >= 0) {
                    printf("La raiz cuadrada es: %.2f\n", raiz(a));
                } else {
                    printf("Error: no se puede calcular la raiz de un numero negativo.\n");
                }
                break;

            case 0:
                printf("Finalizando...\n");
                break;

            default:
                printf("Error: opcion no valida.\n");
                break;
        }

    } while (opc != 0);

    return 0;
}
