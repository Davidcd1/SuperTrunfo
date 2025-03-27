#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    
    // Variáveis da carta 1
    char estado1[30], cidade1[50], codigo1[4];
    double pop1, area1, pib1, dpop1, ppc1, poder1;
    int npt1;

    // Variáveis da carta 2
    char estado2[30], cidade2[50], codigo2[4];
    double pop2, area2, pib2, dpop2, ppc2, poder2;
    int npt2;

    // Cadastro das Cartas:

    // Pedindo as informações da carta 1 ao usuário
    printf("\n\nCarta 1\nEstado: ");
    scanf(" %[^\n]", estado1);

    printf("Código: ");
    scanf("%3s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lf", &pop1);

    printf("Área: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &npt1);
    
    // Pedindo as informações da carta 2 ao usuário
    printf("\n\nCarta 2\nEstado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%3s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lf", &pop2);

    printf("Área: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &npt2);

    // Calculando os valores "Densidade Populacional", "PIB per Capta" e "Poder" das duas cartas
    
    dpop1 = pop1 / area1;
    ppc1 = pib1 / pop1;
    poder1 = pop1+area1+pib1+npt1+dpop1+ppc1;

    // Exibição dos Dados das Cartas:
    // Compara os atributos das cartas e imprime o vencedor
    
    printf("Comparação de Cartas:\n");
    printf("População: Carta ");
    if(pop1 > pop2){
        printf("1"); 
    }else{
        printf("2");
    }
    printf(" venceu (%d)\n", (pop1 > pop2));
    
    printf("Área: Carta ");
    if(area2 > area2){
        printf("1"); 
    }else{
        printf("2");
    }
    printf(" venceu (%d)\n", (area2 > area2));
    
    printf("PIB: Carta ");
    if(pib1 > pib2){
        printf("1"); 
    }else{
        printf("2");
    }
    printf(" venceu (%d)\n", (pib1 > pib2));
    
    printf("Pontos Turísticos: Carta ");
    if(npt1 > npt2){
        printf("1"); 
    }else{
        printf("2");
    }
    printf(" venceu (%d)\n", (npt1 > npt2));

    printf("Densidade Populacional: Carta ");
    if(dpop1 > dpop2){
        printf("1"); 
    }else{
        printf("2");
    }
    printf(" venceu (%d)\n", (dpop1 > dpop2));

    printf("PIB per Capita: Carta ");
    if(ppc1 > ppc2){
        printf("1"); 
    }else{
        printf("2");
    }
    printf(" venceu (%d)\n", (ppc1 > ppc2));

    printf("Super Poder: Carta ");
    if(poder1 > poder2){
        printf("1"); 
    }else{
        printf("2");
    }
    printf(" venceu (%d)\n", (poder1 > poder2));

    return 0;
}
