#include <stdio.h>
#include <math.h>

/*
6. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 
*/

int main() {
    float raio;
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    // Calcula a área do círculo
    float area = M_PI * pow(raio, 2);
    
    // Exibe o resultado
    printf("A área do círculo é: %.2f\n", area);
    
    return 0;
}