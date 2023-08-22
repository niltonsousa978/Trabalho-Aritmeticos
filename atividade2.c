#include <stdio.h>
#include <math.h>

/*
2. Escreva um programa que receba um número qualquer e mostre o seu dobro.
*/

int main() {
    float numero;
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    // Calcula o dobro do número
    float dobro = numero * 2;
    
    // Exibe o resultado
    printf("O dobro do número é: %.2f\n", dobro);
    
    return 0;
}
