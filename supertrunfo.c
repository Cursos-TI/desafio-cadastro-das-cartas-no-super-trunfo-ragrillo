#include <stdio.h>
#include <string.h>

// Criar a estrutura da carta
typedef struct {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibCapita;
    float superPoder;
} Carta;

//cria a estrutura de comparacao
typedef struct {
    char estado[50];
    char codigo[50];
    char nomeCidade[50];
    char populacao[50];
    char area[50];
    char pib[50];
    char pontosTuristicos[50];
    char densidade[50];
    char pibCapita[50];
    char superPoder[50];
} Comparacao;

//função para criar uma nova carta
Carta criarCarta(const char* estado, const char* codigo, const char* nomeCidade, int populacao, float area, float pib, int pontosTuristicos){
    Carta novaCarta;
    strncpy(novaCarta.estado, estado, sizeof(novaCarta.estado) -1);
    novaCarta.estado[sizeof(novaCarta.estado) -1] = '\0';
    strncpy(novaCarta.codigo, codigo, sizeof(novaCarta.codigo)-1);
    novaCarta.codigo[sizeof(novaCarta.codigo) -1] = '\0';
    strncpy(novaCarta.nomeCidade, nomeCidade, sizeof(novaCarta.nomeCidade));
    novaCarta.nomeCidade[sizeof(novaCarta.nomeCidade) -1] = '\0';
    novaCarta.populacao = populacao;
    novaCarta.area = area;
    novaCarta.pib = pib;
    novaCarta.pontosTuristicos = pontosTuristicos;
    novaCarta.densidade = novaCarta.populacao / novaCarta.area;
    novaCarta.pibCapita = novaCarta.pib / novaCarta.populacao;
    novaCarta.superPoder = novaCarta.populacao + novaCarta.area + novaCarta.pib + novaCarta.pontosTuristicos + (1/novaCarta.densidade) + novaCarta.pibCapita;

    return novaCarta;
}

//funcão para exivir carta na tela
void exibirCarta(Carta c){
   
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nomeCidade);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f\n", c.area);
    printf("PIB: %.2f\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("densidade: %.2f\n", c.densidade);
    printf("PIB per Capita: %.2f\n", c.pibCapita);
    printf("Super Poder: %.2f\n", c.superPoder);

}

//função para comparar todos os atributos e salvar na estrutura de comparacao
Comparacao compararAtributos(Carta c1, Carta c2){
    Comparacao comp;
    if (c1.populacao > c2.populacao){
        strcpy(comp.populacao, c1.nomeCidade);
    } else {
        strcpy(comp.populacao, c2.nomeCidade);
    }
    if (c1.area > c2.area){
        strcpy(comp.area, c1.nomeCidade);
    } else {
        strcpy(comp.area, c2.nomeCidade);
    }
    if (c1.pib > c2.pib){
        strcpy(comp.pib, c1.nomeCidade);
    } else {
        strcpy(comp.pib, c2.nomeCidade);
    }
    if (c1.pontosTuristicos > c2.pontosTuristicos){
        strcpy(comp.pontosTuristicos, c1.nomeCidade);
    } else {
        strcpy(comp.pontosTuristicos, c2.nomeCidade);
    }
    if (c1.densidade < c2.densidade){
        strcpy(comp.densidade, c1.nomeCidade);
    } else {
        strcpy(comp.densidade, c2.nomeCidade);
    }
    if (c1.pibCapita > c2.pibCapita){
        strcpy(comp.pibCapita, c1.nomeCidade);
    } else {
        strcpy(comp.pibCapita, c2.nomeCidade);
    }
    if (c1.superPoder > c2.superPoder){
        strcpy(comp.superPoder, c1.nomeCidade);
    } else {
        strcpy(comp.superPoder, c2.nomeCidade);
    }


    return comp;
}

//Função para imprimir o resultado da comparação de todos os itens da carta
void exibirComparacao(Comparacao c){
    printf("Maior População: %s\n", c.populacao);
    printf("Maior Área: %s\n", c.populacao);
    printf("Maior PIB: %s\n", c.populacao);
    printf("Maior quantidade de Pontos Turisticos: %s\n", c.populacao);
    printf("Menor Densidade: %s\n", c.populacao);
    printf("Maior Pib per capita: %s\n", c.populacao);
    printf("Maior Superpoder: %s\n", c.populacao);

}

//função principal
int main(){

    //crio a primeira carta
    Carta carta1 = criarCarta("RS", "A01", "PORTO ALEGRE", 1332570UL, 495.39, 76074563080, 17);
    //crio a segunda carta
    Carta carta2 = criarCarta("PR", "C01", "CURITIBA", 1773718UL, 434.89, 88308728400, 26);
    
    //imprime na tela a primeira e a segunda carta que estão disponíveis
     printf("\nCartas cadastradas:\n");
     exibirCarta(carta1);
     printf("\n");
     exibirCarta(carta2);

    // compara as duas cartas já criadas
    Comparacao comparar = compararAtributos(carta1, carta2);
    printf("\n");
    //imprimi o resultado da comparação de todos os atributos das cartas
    exibirComparacao(comparar);

    return 0;
}