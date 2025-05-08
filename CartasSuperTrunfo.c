#include <stdio.h>

int main()
{
    int opcao;
    char estado_carta1[3], estado_carta2[3];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade_carta1[20], nome_da_cidade_carta2[20];
    int populacao_carta1, populacao_carta2;
    int numero_de_pontosTuristicos_carta1, numero_de_pontosTuristicos_carta2;
    float area_da_cidade_carta1, area_da_cidade_carta2;
    float PIB_carta1, PIB_carta2;
    float Densidade_Populacional1, Densidade_Populacional2;
    float PIB_perCapita1, PIB_perCapita2;
    float SuperPoderCarta1, SuperPoderCarta2;
    int Resultado1, Resultado2, Resultado3, Resultado4, Resultado5, Resultado6, Resultado7;
    
    printf("Escolha uma opção:\n");
    printf("1. Iniciar jogo Super Trufo!\n");
    printf("2. Regras!\n");
    printf("3. Sair do jogo!\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
    printf("Jogo iniciado, boa sorte!!\n");    
    
    //Dados da Carta 1 abaixo
    printf("Digite a inicial de A a H do seu estado: \n");
    scanf("%s", estado_carta1);
    
    printf("Digite o Código da sua carta(a inicial dela mais o numero de 01,02,03 ou 04): \n");
    scanf(" %s", codigo_da_carta1);

    printf("Digite o nome da cidade (nome da cidade junta ex:SãoPaulo): \n");
    scanf("%s", nome_da_cidade_carta1);

    printf("Digite o numero de habitantes da cidade escolhida (não use a virgula, apenas numeros): \n");
    scanf("%d", &populacao_carta1);

    printf("Digite a área da cidade (em quilômetros quadrados, use o ponto para marcar casas depois): \n");
    scanf("%f", &area_da_cidade_carta1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB_carta1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontosTuristicos_carta1);

    Densidade_Populacional1 = (float)(populacao_carta1 / area_da_cidade_carta1);

    PIB_perCapita1 = (float)(populacao_carta1 / PIB_carta1);

    SuperPoderCarta1 = (populacao_carta1 + area_da_cidade_carta1 + PIB_carta1 + PIB_perCapita1 + numero_de_pontosTuristicos_carta1 +(1/Densidade_Populacional1));

    //Dados da Carta 2 abaixo
    printf("Digite a inicial de A a H do seu estado (carta 2): \n");
    scanf("%s", estado_carta2);
    
    printf("Digite o Código da sua carta(a inicial dela mais o numero de 01,02,03 ou 04)(carta 2): \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade (nome da cidade junta ex:SãoPaulo)(carta 2): \n");
    scanf("%s", nome_da_cidade_carta2);

    printf("Digite o numero de habitantes da cidade escolhida (não use a virgula, apenas numeros)(carta 2): \n");
    scanf("%d", &populacao_carta2);

    printf("Digite a área da cidade (em quilômetros quadrados)(carta 2): \n");
    scanf("%f", &area_da_cidade_carta2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade (carta 2): \n");
    scanf("%f", &PIB_carta2);

    printf("Digite a quantidade de pontos turísticos na cidade (carta 2): \n");
    scanf("%d", &numero_de_pontosTuristicos_carta2);

    Densidade_Populacional2 = (float)(populacao_carta2 / area_da_cidade_carta2);

    PIB_perCapita2 = (float)(populacao_carta2 / PIB_carta2);

    SuperPoderCarta2 = (populacao_carta2 + area_da_cidade_carta2 + PIB_carta2 + PIB_perCapita2 + numero_de_pontosTuristicos_carta2 +(1/Densidade_Populacional2));

    // Exibindo os dados da carta 1
    printf("CARTA 1: \n");
    printf("Estado: %s\n", estado_carta1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_da_cidade_carta1);
    printf("PIB: %.2f bilhões de reais\n", PIB_carta1);
    printf("Números de Pontos Turísticos: %d\n", numero_de_pontosTuristicos_carta1);
    printf("Densidade populacional é: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_perCapita1);

    // Exibindo os dados da carta 2
    printf("CARTA 2: \n");
    printf("Estado: %s\n", estado_carta2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_da_cidade_carta2);
    printf("PIB: %.2f bilhões de reais\n", PIB_carta2);
    printf("Números de Pontos Turísticos: %d\n", numero_de_pontosTuristicos_carta2);
    printf("Densidade populacional é: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_perCapita2);

    // Comparando os dados das cartas e ver qual vence

  /*  Resultado1 = populacao_carta1 > populacao_carta2;
    Resultado2 = area_da_cidade_carta1 > area_da_cidade_carta2;
    Resultado3 = PIB_carta1 > PIB_carta2;
    Resultado4 = numero_de_pontosTuristicos_carta1 > numero_de_pontosTuristicos_carta2;
    Resultado5 = (1/Densidade_Populacional1) > (1/Densidade_Populacional2);
    Resultado6 = PIB_perCapita1 > PIB_perCapita2;
    Resultado7 = SuperPoderCarta1 > SuperPoderCarta2; */

    
    printf("========================================================================================\n");
    printf("Nome do País Carta 1: %s\n", nome_da_cidade_carta1);
    printf("Nome do País Carta 2: %s\n", nome_da_cidade_carta2);
    
    if ((Resultado1 = populacao_carta1 > populacao_carta2)) {
    printf("População: Carta 1 venceu\n");}
    else if ((Resultado1 = populacao_carta1 < populacao_carta2))
    {
        printf("População: Carta 2 Venceu\n");
    }
    else 
    { 
        printf("População: Empate!\n");
    }
    
    if ((Resultado2 = area_da_cidade_carta1 > area_da_cidade_carta2)) {
        printf("Área: Carta 1 venceu\n");}
    else if ((Resultado2 = area_da_cidade_carta1 < area_da_cidade_carta2))
        {
            printf("Área: Carta 2 Venceu\n");
        }
    else {
        printf("Área: Empate!\n");
    }
    
    if ((Resultado3 = PIB_carta1 > PIB_carta2)) {
        printf("PIB: Carta 1 venceu\n");}
    else if ((Resultado3 = PIB_carta1 < PIB_carta2))
        {
            printf("PIB: Carta 2 Venceu\n");
        }
    else {
        printf("PIB: Empate!\n");
    }
    
    if ((Resultado4 = numero_de_pontosTuristicos_carta1 > numero_de_pontosTuristicos_carta2)) {
        printf("Numero de pontos turisticos: Carta 1 venceu\n");}
    else if ((Resultado4 = numero_de_pontosTuristicos_carta1 < numero_de_pontosTuristicos_carta2))
        {
            printf("Numero de pontos turisticos: Carta 2 Venceu\n");
        }
    else {
        printf("Numero de pontos turisticos: Empate!\n");
    }
    
    if ((Resultado5 = (1/Densidade_Populacional1) > (1/Densidade_Populacional2))) {
         printf("Densidade populacional: Carta 1 venceu\n");}
    else if ((Resultado5 = (1/Densidade_Populacional1) < (1/Densidade_Populacional2)))
    {
        printf("Densidade populacional: Carta 2 Venceu\n");
    }
    else {
        printf("Densidade populacional: Empate!\n");
    }
    
    if ((Resultado6 = PIB_perCapita1 > PIB_perCapita2)) {
        printf("PIB per capita: Carta 1 venceu\n");}
    else if ((Resultado6 = PIB_perCapita1 < PIB_perCapita2))
        {
            printf("PIB per capita: Carta 2 Venceu\n");
        }
    else {
        printf("PIB per capita:Empate!\n");
    }
    
    if ((Resultado7 = SuperPoderCarta1 > SuperPoderCarta2)) {
        printf("Super poder: Carta 1 venceu\n");}
    else if ((Resultado7 = SuperPoderCarta1 < SuperPoderCarta2))
         {
            printf("Super poder: Carta 2 Venceu\n");
         }
    else {
        printf("Super poder: Empate!\n");
    }
        break;
    
    case 2:
        printf("As regras são bem simples:\n");
        printf("1. Digite o código da carta corretamente. Ex: A01, A02, H03\n");
        printf("2. Para números deciamais, não utilize a virgula, mas o ponto final. EX: 10.99\n");
        printf("3. Se divirta!");
        printf("AVISO: não entendi bem o que era pra comparar com esta função professor!\n");
        break;
        
    case 3:
        printf("Saindo...\n");
        break;
        
    default:
        printf("Opção invalida. Tente Novamente.\n");
        break;
    }   
    
    return 0;

}
