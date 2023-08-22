#include<stdio.h>
#include<math.h>

/*
10. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/

int main() {
    int carros_vendidos;
    float valor_vendas, salario_fixo, valor_por_carro, comissao_por_venda;
    const float comissao_percentual = 0.05; // 5%
    
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valor_vendas);
    
    printf("Digite o salário fixo: ");
    scanf("%f", &salario_fixo);
    
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valor_por_carro);
    
    // Calcula a comissão por venda
    comissao_por_venda = carros_vendidos * valor_por_carro;
    
    // Calcula o valor da comissão sobre as vendas
    float comissao_sobre_vendas = valor_vendas * comissao_percentual;
    
    // Calcula o salário final
    float salario_final = salario_fixo + comissao_por_venda + comissao_sobre_vendas;
    
    // Exibe o resultado
    printf("O salário final do vendedor é: %.2f\n", salario_final);
    
    return 0;
}