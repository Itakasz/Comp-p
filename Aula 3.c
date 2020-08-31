#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 'a';
    int nro = 10;
    float n = 5.25;

    printf("%c \n", letra);     //%c com caractere
    printf("%d \n", letra);

    printf("%d \n", nro);       //%d com numero inteiro

    printf("%f \n", n);         // %f com numero real

    // Comentario junto com a variavel
    printf("Letra %c, inteiro %d \n", letra, nro);
    printf("Letra %c, inteiro %d \n", letra, nro + 1);

    system("pause");

    return 0;

}


