#include <stdio.h>
int main (){

    char cidade[20];
    char estado[10];
    char codigo[10];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float percapita;

    char cidade1[20];
    char estado1[10];
    char codigo1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float percapita1;

    densidadepopulacional = populacao / area;
    densidadepopulacional1 = populacao1 / area1;
    percapita = pib / populacao;
    percapita1 = pib1 / populacao1;

    printf("Cartas Super Trunfo\n\n");
    printf("Cadastro de Cartas\n\n");
    printf("Carta 1:\n\n");

    printf("Digite nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("Digite o Estado:\n");
    scanf("%s", &estado);

    printf("Digite o codigo da Cidade:\n");
    scanf("%s", &codigo);

    printf("Digite a População da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da Cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib);

    printf("Digite números de pontos turísticos:\n");
    scanf("%d", &pontosturisticos);

    
    printf("Carta 2:\n\n");

    printf("Digite nome da Cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite o Estado:\n");
    scanf("%s", &estado1);

    printf("Digite o codigo da Cidade:\n");
    scanf("%s", &codigo1);

    printf("Digite a População da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);

    printf("Digite números de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("Carta 1:\n\n");

    printf("Nome da Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos turísticos da Cidade: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB Per Capita:%.2f reais\n", percapita);

    printf("Carta 2:\n\n");

    printf("Nome da Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos turísticos da Cidade: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB Per Capita:%.2f reais\n", percapita1);


    return 0;


}


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



