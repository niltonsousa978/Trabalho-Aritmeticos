#include<stdio.h>
#include<math.h>

/*
4. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.
*/

int main() {
    float valor_reais, cotacao_dolar;
    
    printf("Digite o valor em reais: ");
    scanf("%f", &valor_reais);
    
    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao_dolar);
    
    // Aqui realiza a conversão para dólares
    float valor_dolares = valor_reais / cotacao_dolar;
    
    // Aqui exibe o resultado
    printf("O valor em dólares é: %.2f\n", valor_dolares);
    
    return 0;
}