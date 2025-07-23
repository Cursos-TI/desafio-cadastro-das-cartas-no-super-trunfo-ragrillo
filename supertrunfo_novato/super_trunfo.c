#include <stdio.h>
#include <string.h>

char estado1 = '\0';
char codigo1[10] = "\0";
char nomeCidade1[50] = "\0";
int populacao1 = 0;
float area1 = 0.00;
float pib1 = 0.00;
int pontosTuristicos1 = 0;

char estado2 = '\0';
char codigo2[10] = "\0";
char nomeCidade2[50] = "\0";
int populacao2 = 0;
float area2 = 0.00;
float pib2 = 0.00;
int pontosTuristicos2 = 0;

void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrarCartas(){
   
    //CADASTRO DA CARTA 1
    printf("Digite a letra correspondente ao Estado da Carta:\n");
    printf(" A - RS\n B - SC\n C - PR\n D - SP\n E - RJ\n F - MG\n G - ES\n H - BA\n");
    scanf("%c", &estado1);
    limparBuffer();

    printf("Digite o codigo da Carta:\n");
    scanf("%s", codigo1);
    limparBuffer();

    printf("Digite o nome da cidade da Carta:\n");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a populacão da Carta:\n");
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Digite a área da Carta:\n");
    scanf("%f", &area1);
    limparBuffer();

    printf("Digite o pib da Carta:\n");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Digite a quantidade de pontos Turisticos da Carta:\n");
    scanf("%d", &pontosTuristicos1);
    limparBuffer();

    //CADASTRO DA CARTA 2
    printf("Digite a letra correspondente ao Estado da Carta:\n");
    printf(" A - RS\n B - SC\n C - PR\n D - SP\n E - RJ\n F - MG\n G - ES\n H - BA\n");
    scanf("%c", &estado2);
    limparBuffer();

    printf("Digite o codigo da Carta:\n");
    scanf("%s", codigo2);
    limparBuffer();

    printf("Digite o nome da cidade da Carta:\n");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a populacão da Carta:\n");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Digite a área da Carta:\n");
    scanf("%f", &area2);
    limparBuffer();

    printf("Digite o pib da Carta:\n");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Digite a quantidade de pontos Turisticos da Carta:\n");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();
}

void imprimirCartas(){
    printf("\nCarta 1 cadastrada:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 cadastrada:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
}


int main(){
    printf("Bem vindo ao superTrunfo de Países \n");
    printf("Neste momento iremos cadastras apenas 2 cartas \n");
    cadastrarCartas();
    imprimirCartas();
    return 0;
}


