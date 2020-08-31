#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    soma :            +
    subtração:        -
    multiplicacao:    *
    divisao:          /
    resto:            %
   */

   int x1, x2 = 10, x3 = 12;
   char ch1, ch2 = '0', ch3 = 'A';
   float f1, f2 = 5.25, f3 = 10.5;
   x1 = x2 + x3;
   ch1 = ch2 + ch3;
   f1 = f2 + f3;

   //exemplo
   int x1, x2 = 9;
   x1 = x2 % 2;
   printf("x1 = %d \n", x1);
   x1 = x2 % 5;
   printf("x1 = %d \n", x1);




   sysyem("pause");

    return 0;
}
