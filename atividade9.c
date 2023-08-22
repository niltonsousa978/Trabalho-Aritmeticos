#include<stdio.h>
#include<math.h>

/*
9. Neste programa, o usuário insere o custo de fábrica do carro. O programa calcula o valor do distribuidor multiplicando o custo de fábrica pelo percentual do distribuidor, calcula o valor dos impostos da mesma forma e, por fim, calcula o custo final ao consumidor somando esses valores. Certifique-se de compilar e executar o código em um ambiente C para testá-lo.
*/

int main() {
    float custo_fabrica;
    const float percentual_distribuidor = 0.28; // 28%
    const float percentual_impostos = 0.45; // 45%
    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custo_fabrica);
    
    // Calcula o valor do distribuidor
    float valor_distribuidor = custo_fabrica * percentual_distribuidor;
    
    // Calcula o valor dos impostos
    float valor_impostos = custo_fabrica * percentual_impostos;
    
    // Calcula o custo final ao consumidor
    float custo_final = custo_fabrica + valor_distribuidor + valor_impostos;
    
    // Exibe o resultado
    printf("O custo final ao consumidor é: %.2f\n", custo_final);
    
    return 0;
}