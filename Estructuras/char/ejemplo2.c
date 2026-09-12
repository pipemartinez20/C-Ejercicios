#include <stdio.h>
#include <ctype.h>

int esVocal(char c) {
    unsigned char lower = (unsigned char)tolower((unsigned char)c);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

void ejercicio1(void) {
    char letra = 'B';
    printf("El carácter es: %c y su código ASCII es: %d\n", letra, (int)letra);
}

void ejercicio2(void) {
    char letra;
    printf("Introduce un caracter: ");
    scanf(" %c", &letra);

    if (!isalpha((unsigned char)letra)) {
        printf("No es una letra del alfabeto.\n");
    } else if (esVocal(letra)) {
        printf("Es una vocal.\n");
    } else {
        printf("Es una consonante.\n");
    }
}

void ejercicio3(void) {
    char letra;

    printf("Ingrese una letra minuscula: ");
    scanf(" %c", &letra);

    printf("La letra en mayuscula es: %c\n", toupper((unsigned char)letra));
}

void ejercicio4(void) {
    char palabra[100];
    char letra;
    int contador = 0;
    int i;

    printf("Ingrese una palabra: ");
    scanf("%99s", palabra);

    printf("Ingrese la letra que desea buscar: ");
    scanf(" %c", &letra);

    for (i = 0; palabra[i] != '\0'; i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces.\n", letra, contador);
}

void ejercicio5(void) {
    char caracter;

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    if (isdigit((unsigned char)caracter)) {
        printf("El caracter es un digito numerico.\n");
    } else {
        printf("El caracter NO es un digito numerico.\n");
    }
}

int main(void) {
    int opcion;

    printf("Selecciona un ejercicio (1-5): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
        default:
            printf("Opcion invalida.\n");
            return 1;
    }

    return 0;
}
