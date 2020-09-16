#include<stdio.h>

int main(){

    int n1, n2, opcao;
    float resultado;

    printf("Forneca o primeiro valor: ");
    scanf("%i", &n1);
    printf("Forneca o segundo valor: ");
    scanf("%i", &n2);

    printf("---------------------\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao.\n--------------------\n");
    scanf("%i", &opcao);

    if(opcao == 1){
            resultado = n1 + n2;
    }
    else {
            if(opcao == 2){
                resultado = n1- n2;

    }
    else {
            if(opcao == 3){
                resultado = n1 * n2;

    }
    else {
            if(opcao == 4){
                resultado = n1 / n2;

    }}}}


printf("O resultado e': %.2f", resultado);
return 0;
}
