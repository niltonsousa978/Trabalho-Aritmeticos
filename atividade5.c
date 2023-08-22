#include <stdio.h>
#include<math.h>

/*
5. Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais  também solicitadas pelo teclado. Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
*/

int main() {
    float custo_mercadoria, valor_frete, despesas_eventuais, valor_venda;
    
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo_mercadoria);
    
    printf("Digite o valor do frete: ");
    scanf("%f", &valor_frete);
    
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas_eventuais);
    
    float custo_total = custo_mercadoria + valor_frete + despesas_eventuais;
    
    printf("Digite o valor de venda: ");
    scanf("%f", &valor_venda);
    
    float lucro = valor_venda - custo_total;
    float percentual_lucro = (lucro / custo_total) * 100;
    
    printf("\nResumo:\n");
    printf("Custo da mercadoria: R$%.2f\n", custo_mercadoria);
    printf("Valor do frete: R$%.2f\n", valor_frete);
    printf("Despesas eventuais: R$%.2f\n", despesas_eventuais);
    printf("Custo total: R$%.2f\n", custo_total);
    printf("Valor de venda: R$%.2f\n", valor_venda);
    printf("Lucro: R$%.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n", percentual_lucro);
    
    return 0;
}