#include <stdio.h>

int main() {
    int superTrunfo1, superTrunfo2, PIB1, PIB2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, populacao1, populacao2;
    char card1[100], card2[100];

    printf("-----Vamos jogar SuperTrunfo!-----\n");

//Jogador 1
    printf("Jogador 1, sua carta é um Super Trunfo? (1 - Sim, 0 - Nao)\n");
    scanf("%d", &superTrunfo1);
    getchar(); // Limpa o buffer

    printf("Primeiro Jogador, digite o nome da sua cidade: \n");
    scanf(" %[^\n]", card1);
    getchar(); // Limpa o buffer

    printf("Digite o PIB da sua cidade: \n");
    scanf("%d", &PIB1);
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &pontosTuristicos1);
    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area1);
    printf("Digite a população da sua cidade: \n");
    scanf("%f", &populacao1);

//Jogador 2
    printf("Jogador 2, sua carta é um Super Trunfo? (1 - Sim, 0 - Nao)\n");
    scanf("%d", &superTrunfo2);
    getchar(); // Limpa o buffer

    printf("Segundo Jogador, digite o nome da sua cidade: \n");
    scanf(" %[^\n]", card2);
    getchar(); // Limpa o buffer

    printf("Digite o PIB da sua cidade: \n");
    scanf("%d", &PIB2);
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &pontosTuristicos2);
    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area2);
    printf("Digite a população da sua cidade: \n");
    scanf("%f", &populacao2);

//Logica do Jogo
    if (superTrunfo1 == 1 && superTrunfo2 == 1){
        printf("Empate pois ambos sao Super Trunfos!\n");
    } else if (superTrunfo1 == 1){
        printf("Jogador 1, voce venceu por ser um Super Trunfo!\n");
    } else if (superTrunfo2 == 1){
        printf("Jogador 2, voce venceu por ser um Super Trunfo!\n");
    } else {
    //Criar uma variavel de pontuacao
        int pontuacao1 = 0;
        int pontuacao2 = 0;
    //Comparar o PIB
        if (PIB1 > PIB2){
            printf("Jogador 1, voce venceu por ter um PIB maior!\n");
            pontuacao1++;
        } else if (PIB2 == PIB1){
            printf("Jogador 1 e Jogador 2 empataram em PIB!\n");
        } else {
            printf("Jogador 2, voce venceu por ter um PIB maior!\n");
            pontuacao2++;
        }

    //Comparar o numero de pontos turisticos
        if (pontosTuristicos1 > pontosTuristicos2){
            printf("Jogador 1, vence por ter mais pontos turisticos!\n");
            pontuacao1++;
        } else if (pontosTuristicos2 == pontosTuristicos1){
            printf("Jogador 1 e Jogador 2 empataram em pontos turisticos!\n");
        } else {
            printf("Jogador 2, vence por ter mais pontos turisticos!\n");
            pontuacao2++;
        }

    //Comparar a area
        if (area1 > area2){
            printf("Jogador 1, vence por ter uma area maior!\n");
            pontuacao1++;
        } else if (area2 == area1){
            printf("Jogador 1 e Jogador 2 empataram em area!\n"); 
        } else {
            printf("Jogador 2, vence por ter uma area maior!\n");
            pontuacao2++;
        }

    //Comparar a populacao
        if (populacao1 > populacao2){
            printf("Jogador 1, vence por ter uma populacao maior!\n");
            pontuacao1++;
        } else if (populacao2 == populacao1){
            printf("Jogador 1 e Jogador 2 empataram em populacao!\n");
        } else {
            printf("Jogador 2, vence por ter uma populacao maior!\n");
            pontuacao2++;
        }

    //Comparar a pontuacao
        if (pontuacao1 > pontuacao2){
            printf("Jogador 1, venceu de %d a %d", pontuacao1, pontuacao2);
        } else if (pontuacao2 == pontuacao1){
            printf("Jogador 1 e Jogador 2 empataram! Suas pontuacoes sao respectivamente %d a %d", pontuacao1, pontuacao2);
        } else {
            printf("Jogador 2, venceu de %d a %d", pontuacao2, pontuacao1);
        }
    }



    return 0;
}