#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    double x = 3.1415926535; // Declara una variable double 'x' y le asigna un valor
    double y = 2.7182818284; // Declara una variable double 'y' y le asigna un valor
    double suma = x + y; // Declara una variable 'suma' y almacena la suma de 'x' y 'y'
    printf("La suma de %.10f y %.10f es %.10f\n", x, y, suma); // Imprime el resultado en pantalla

//1. Escribe un programa que calcule el valor de pi usando la serie de Leibniz con 1000 términos.
    double pi = 0.0;
    int n = 1000;
    
    for (int k = 0; k < n; k++) {
        double term = (k % 2 == 0 ? 1.0 : -1.0) / (2 * k + 1);
        pi += term;
    }

    pi *= 4;

    printf("El valor aproximado de pi usando la serie de Leibniz con %d términos es: %.15f\n", n, pi);

//2. Crea un programa que sume dos números de punto flotante de doble precisión.
    double num1, num2, suma2;

    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);

    suma2 = num1 + num2;
    printf("La suma es: %.15lf\n", suma2);

//3. Realiza un programa que calcule el promedio de 5 números ingresados por el usuario.

    double p1, p2, p3, p4, p5, sum3;
    printf("Ingrese el primer número: ");
    scanf("%lf", &p1);
    
    printf("Ingrese el primer número: ");
    scanf("%lf", &p2);

    printf("Ingrese el primer número: ");
    scanf("%lf", &p3);

    printf("Ingrese el primer número: ");
    scanf("%lf", &p4);

    printf("Ingrese el primer número: ");
    scanf("%lf", &p5);


    return 0; // Indica que el programa terminó correctamente
}
