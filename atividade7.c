#include<stdio.h>
#include<math.h>

int main() 

/*
7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
*/

{
    int anos, meses, dias;
    
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);
    
    // Calcula a idade em dias
    int idade_dias = (anos * 365) + (meses * 30) + dias;
    
    // Exibe o resultado
    printf("A idade total em dias é: %d\n", idade_dias);
    
    return 0;
}