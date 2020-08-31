#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int nro ;
    float n;
    double d;

    //scanf("tipos de entrada", variaveis);
    //A variavel inserida sera o scanf e ficara guardado o valor2
    scanf("%c", &letra);
    scanf("%d", &nro);
    scanf("%f", &n);
    scanf("%f", &d);

    printf("Digite um numero: ");
    scanf("%d", &nro);
    printf("Numero digitado: %d \n", nro);

    system("pause");
    return 0;
}
