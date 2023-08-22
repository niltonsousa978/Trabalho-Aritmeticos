#include<stdio.h>
#include<math.h>

/*
8. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
*/

int main() {
    float salario_atual, percentual_reajuste;
    
    printf("Digite o salário mensal atual: ");
    scanf("%f", &salario_atual);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);
    
    // Calcula o valor do reajuste
    float reajuste = salario_atual * (percentual_reajuste / 100);
    
    // Calcula o novo salário
    float novo_salario = salario_atual + reajuste;
    
    // Exibe o resultado
    printf("O novo salário é: %.2f\n", novo_salario);
    
    return 0;
}
