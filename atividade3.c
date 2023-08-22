#include<stdio.h>
#include<math.h>

/*
3. Dadas as medidas de uma sala, informe sua área.
*/

int main() {
    float largura, comprimento;
    
    printf("Digite a largura da sala em metros: ");
    scanf("%f", &largura);
    
    printf("Digite o comprimento da sala em metros: ");
    scanf("%f", &comprimento);
    
    // Calcula a área da sala
    float area = largura * comprimento;
    
    // Exibe o resultado
    printf("A área da sala é: %.2f metros quadrados\n", area);
    
    return 0;
}
