#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   // 1° carta
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[10];
    char codigo1[5];
    char nome_cidade1[10];
    int populacao1;
    float area1;
    int pib1;
    int pontos_turisticos1;

    // 2° carta
    char estado2[10];
    char codigo2[5];
    char nome_cidade2[10];
    int populacao2;
    float area2;
    int pib2;
    int pontos_turisticos2;



   // 1°carta interação
  //Mensagem de boas vindas
    printf("Seja bem vindo! Siga os passos abaixo por gentileza para o cadastro da 1° carta \n");


  // Área para entrada de dados
    printf("Digite o estado abaixo \n");
    scanf("%s",estado1);     // input do estado

    printf("Digite o código abaixo\n");
    scanf("%s",codigo1 );    // input do codigo

    printf("Digite o nome da cidade abaixo\n");
    scanf("%s",nome_cidade1 );    // input do nome_cidade

    printf("Digite o numero da população abaixo\n");
    scanf("%d",&populacao1 );    // input do população

    printf("Digite o número da área abaixo\n");
    scanf("%f",&area1 );    // input do area

    printf("Digite o número do PIB abaixo\n");
    scanf("%d", &pib1);    // input do pib
    
    printf("Digite quantos Pontos Turísticos abaixo\n");
    scanf("%d", &pontos_turisticos1);    // input dos pontos_turisticos


    // 2°carta interação
    printf("Digite o estado abaixo \n");
    scanf("%s",estado2);     // input do estado

    printf("Digite o código abaixo\n");
    scanf("%s",codigo2 );    // input do codigo

    printf("Digite o nome da cidade abaixo\n");
    scanf("%s",nome_cidade2 );    // input do nome_cidade

    printf("Digite o numero da população abaixo\n");
    scanf("%d",&populacao2 );    // input do população

    printf("Digite o número da área abaixo\n");
    scanf("%f",&area2 );    // input do area

    printf("Digite o número do PIB abaixo\n");
    scanf("%d", &pib2);    // input do pib
    
    printf("Digite quantos Pontos Turísticos abaixo\n");
    scanf("%d", &pontos_turisticos2);    // input dos pontos_turisticos




  // Área para exibição dos dados da cidade
  // 1° carta exibição
    printf("Esses sãos os dados da 1° Carta\n \n");
    printf("Estado: %s \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",nome_cidade1);
    printf("População: %d \n",populacao1);
    printf("Área: %f \n",area1);
    printf("PIB: %d \n",pib1);
    printf("Pontos Turísticos: %d \n",pontos_turisticos1);


    // 2° carta exibição
    printf("Esses sãos os dados da 2° Carta\n \n");
    printf("Estado: %s \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",nome_cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %f \n",area2);
    printf("PIB: %d \n",pib2);
    printf("Pontos Turísticos: %d \n",pontos_turisticos2);

return 0;
}