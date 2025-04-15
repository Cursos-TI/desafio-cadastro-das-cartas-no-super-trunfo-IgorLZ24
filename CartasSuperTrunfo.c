#include <stdio.h>

int main()
{
    char estado_carta1[3], estado_carta2[3];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade_carta1[20], nome_da_cidade_carta2[20];
    int população_carta1, população_carta2;
    int numero_de_pontosTuristicos_carta1, numero_de_pontosTuristicos_carta2;
    float area_da_cidade_carta1, area_da_cidade_carta2;
    float PIB_carta1, PIB_carta2;
    
    //Dados da Carta 1 abaixo
    printf("Digite a inicial de A a H do seu estado: \n");
    scanf("%s", estado_carta1);
    
    printf("Digite o Código da sua carta(a inicial dela mais o numero de 01,02,03 ou 04): \n");
    scanf(" %s", codigo_da_carta1);

    printf("Digite o nome da cidade (nome da cidade junta ex:SãoPaulo): \n");
    scanf("%s", nome_da_cidade_carta1);

    printf("Digite o numero de habitantes da cidade escolhida (não use a virgula, apenas numeros): \n");
    scanf("%d", &população_carta1);

    printf("Digite a área da cidade (em quilômetros quadrados, use o ponto para marcar casas depois): \n");
    scanf("%f", &area_da_cidade_carta1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB_carta1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontosTuristicos_carta1);

    //Dados da Carta 2 abaixo
    printf("Digite a inicial de A a H do seu estado (carta 2): \n");
    scanf("%s", estado_carta2);
    
    printf("Digite o Código da sua carta(a inicial dela mais o numero de 01,02,03 ou 04)(carta 2): \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade (nome da cidade junta ex:SãoPaulo)(carta 2): \n");
    scanf("%s", nome_da_cidade_carta2);

    printf("Digite o numero de habitantes da cidade escolhida (não use a virgula, apenas numeros)(carta 2): \n");
    scanf("%d", &população_carta2);

    printf("Digite a área da cidade (em quilômetros quadrados)(carta 2): \n");
    scanf("%f", &area_da_cidade_carta2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade (carta 2): \n");
    scanf("%f", &PIB_carta2);

    printf("Digite a quantidade de pontos turísticos na cidade (carta 2): \n");
    scanf("%d", &numero_de_pontosTuristicos_carta2);

    // Exibindo os dados da carta 1
    printf("CARTA 1: \n");
    printf("Estado: %s\n", estado_carta1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta1);
    printf("População: %d\n", população_carta1);
    printf("Área: %.2f\n", area_da_cidade_carta1);
    printf("PIB: %.2f\n", PIB_carta1);
    printf("Números de Pontos Turísticos: %d\n", numero_de_pontosTuristicos_carta1);

    // Exibindo os dados da carta 2
    printf("CARTA 2: \n");
    printf("Estado: %s\n", estado_carta2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta2);
    printf("População: %d\n", população_carta2);
    printf("Área: %.2f\n", area_da_cidade_carta2);
    printf("PIB: %.2f\n", PIB_carta2);
    printf("Números de Pontos Turísticos: %d\n", numero_de_pontosTuristicos_carta2);

    return 0;
}
