/******************************************************************************

Projeto 1: Calculadora Simples
Descrição: Este projeto consiste em criar uma calculadora simples em C que realiza operações básicas, como adição, 
subtração, multiplicação e divisão. O programa deve solicitar dois números de entrada e, em seguida, realizar 
a operação escolhida pelo usuário, exibindo o resultado na tela.

*******************************************************************************/
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int operacao;
    
    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);
    
    printf("Digite o segundo número:\n");
    scanf("%f", &num2);
    
    printf("\n");
    
    printf("Escolha uma operação:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    
    printf("\n");
    
    printf("Digite o número da operação desejada: ");
    scanf("%d", &operacao);
    
    printf("\n");
    
    switch (operacao) {
         case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
            
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
            
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("resultado: %.2f\n", resultado);
                
            } else {
                printf("Erro: Divião por zero.\n");
                
            }
            
            break;
        default:
            printf("Operação inválida!\n");
        
    }
    
    return 0;
}