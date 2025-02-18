#include <stdio.h>

int main(){
    char cidadeA[50], cidadeB[50];
    int populacaoA, populacaoB, pontos_turisticosA, pontos_turisticosB;
    float areaA, areaB, PIBA, PIBB;

//Cidade A
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidadeA);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacaoA);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticosA);

    printf("Digite a area da cidade: ");
    scanf("%f", &areaA);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIBA);

    printf("Sua cidade é: %s\n" "Sua populacao é: %d\n" "Seu numero de pontos turisticos é: %d\n" "Sua area é: %f\n" "Seu PIB é: %f\n", cidadeA, populacaoA, pontos_turisticosA, areaA, PIBA);


//Cidade B
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidadeB);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacaoB);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticosB);

    printf("Digite a area da cidade: ");
    scanf("%f", &areaB);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIBB);

    printf("Sua cidade é: %s\n" "Sua populacao é: %d\n" "Seu numero de pontos turisticos é: %d\n" "Sua area é: %f\n" "Seu PIB é: %f\n", cidadeB, populacaoB, pontos_turisticosB, areaB, PIBB);


//Comparacao entre as cidades
    if (populacaoA > populacaoB){
        printf("A cidade A tem mais habitantes que a cidade B\n");
    }else{
        printf("A cidade B tem mais habitantes que a cidade A\n");
    }

     if (pontos_turisticosA > pontos_turisticosB){
        printf("A cidade A tem mais pontos turisticos que a cidade B\n");
    }else{
        printf("A cidade B tem mais pontos turisticos que a cidade A\n");
    }

     if (areaA > areaB){
        printf("A cidade A tem mais area que a cidade B\n");
    }else{
        printf("A cidade B tem mais area que a cidade A\n");
    }

     if (PIBA > PIBB){
            printf("A cidade A tem mais PIB que a cidade B\n");
    }else{
        printf("A cidade B tem mais PIB que a cidade A\n");
    }


    return 0;
}