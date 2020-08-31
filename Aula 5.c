#include <stdio.h>
#include <stdlib.h>

int main()
{

    //variavel = expressao
    int x = 5, y;
    y = x;
    y = x + 10;


    //multiplas variaveis
    int x, y, z;
    x = y = z = 10;

    //exemplo
    int x = 97;
    char ch1, ch2 = 'A';
    ch1 = x;
    printf("ch1 = %c \n", ch1);
    x = ch2;
    printf("x = %d \n",x);

    //exemplo 2
    int x = 833;
    float f1, f2 = 5.25;
    f1 = x;
    printf("f1 = %f \n", f1);

    //exemplo 3
    float f = 97.3;
    char ch1, ch2 = 'A';
    ch1 = f;
    printf("ch1 = %c \n", ch1);
    f = ch2;
    printf("f = %f \n", f);


    system("pause");
    return 0;
}
