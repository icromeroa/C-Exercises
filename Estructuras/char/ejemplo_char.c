#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <ctype.h>
#include <string.h>


int main() { // Función principal
    char letra = 'V'; // Declara una variable char 'letra' y le asigna el carácter 'A'
    printf("El carácter es: %c y su código ASCII es: %d\n", letra, letra); // Imprime el carácter y su código ASCII
    
    //2. Crea un programa que determine si un carácter es una vocal o consonante.
    char c2;
    printf("Escriba una letra: ");
    //scanf("formato", &variable);
    scanf("%c", &c2);

    if (c2 >= 'a' && c2 <= 'z'){ //verifica si está en el abecedario
        if (c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u'){
            printf("Es una vocal.\n");
        } else {
            printf("Es una consonante.\n");
        }
    } else {
        printf("No es una letra.\n");
    }

    //3. Realiza un programa que convierta una letra minúscula a mayúscula.

    if (c2 >= 'a' && c2 <= 'z'){
        printf("La letra mayúscula es %c\n", toupper(c2));
    } else {
        printf("No ingresó una letra minúscula\n");
    }

    char palabra[20];
    char letra1;
    int contador = 0;

//4. Escribe un programa que cuente cuántas veces aparece una letra en una palabra.
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    printf("Ingrese la letra a encontrar: ");
    scanf(" %c", &letra1);

    for(int i=0; i < strlen(palabra); i++){
        if (palabra[i] == letra1){
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces, en la palabra \"%s\".\n", letra1, contador, palabra);

//5. Haz un programa que verifique si un carácter ingresado es un dígito numérico.
    char num;

    printf("Ingrese un dígito: ");
    scanf(" %c", &num);

    if (num >= '0' && num <= '9'){
        printf("El caracter es un número. \n");
    } else {
        printf("El caracter no es un número. \n");
    }


    return 0; // Indica que el programa terminó correctamente
}
