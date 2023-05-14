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

   printf("Entre com a operação desejada ");
   scanf(" %c", &op); //usa-se o espaço antes do %c para limpar o buffer de memória e não da erro

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
    printf("\nOperação inválida!");
    return 1;
   }

   printf("O resultado foi: %f\n", resultado);

    return 0;
}
