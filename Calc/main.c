#include <stdio.h>
#include <stdlib.h>

int main()
{
   float v1;
   float v2;
   char op;
   float resultado;

   printf("Entre com o primeiro valor: ");
   scanf("%f", &v1);

   printf("Entre com a opera��o desejada ");
   scanf(" %c", &op); //usa-se o espa�o antes do %c para limpar o buffer de mem�ria e n�o da erro

   printf("Entre com o segundo valor: ");
   scanf("%f", &v2);

   if(op == '+') {
        resultado = v1 + v2;
   }

   else if (op == '-') {
    resultado = v1 - v2;
   }

   else if (op == '*') {
    resultado = v1 * v2;
   }

   else if (op == '/') {
    resultado = v1 / v2;
   }

   else {
    printf("\nOpera��o inv�lida!");
    return 1;
   }

   printf("O resultado foi: %f\n", resultado);

    return 0;
}
