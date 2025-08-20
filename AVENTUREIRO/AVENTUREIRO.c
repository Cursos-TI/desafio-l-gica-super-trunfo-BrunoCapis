#include <stdio.h>

int main() {

//Variaveis
char estado1[10], estado2[10];
char codigo1[10], codigo2[10];
char cidade1[20], cidade2[20];
unsigned long int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int pontosturisticos1, pontosturisticos2;
float densidade1, densidade2; // Densidade populacional
float PIBpercapita1, PIBpercapita2; // PIB per capita
int comparacao; //Variavel para uso do switch 


printf ("Registro de Cartas Super Trunfo\n");


//Registro da primeira carta

printf ("Digite os dados da carta 1:\n");
printf ("Digite o estado do estado da carta (A a H): \n ");
scanf (" %c", &estado1);

printf ("Digite o código da carta ( Código do estado + nº de 01 a 09): \n");
scanf ("%s",codigo1);


printf ("Digite o nome da cidade: \n");
scanf ("%s", cidade1);

printf ("Digite a população da cidade: \n");
scanf ("%lu", &populacao1);

printf ("Digite a área da cidade (em km²): \n");
scanf ("%f", &area1);

printf ("Digite o PIB da cidade (em milhões de R$): \n");
scanf ("%f", &PIB1);

printf ("Digite o número de pontos turísticos da cidade: \n");
scanf ("%d", &pontosturisticos1);


printf("\n====================================================\n");


//Registro da segunda carta

printf ("Digite os dados da carta 2:\n");
printf ("Digite o estado do estado da carta (A a H): ");
scanf (" %c", &estado2);

printf ("Digite o código da carta ( Código do estado + nº de 01 a 09): \n");
scanf ("%s",codigo2);


printf ("Digite o nome da cidade: \n");
scanf ("%s", cidade2);

printf ("Digite a população da cidade: \n");
scanf ("%lu", &populacao2);

printf ("Digite a área da cidade (em km²): \n");
scanf ("%f", &area2);

printf ("Digite o PIB da cidade (em milhões de R$): \n");
scanf ("%f", &PIB2);

printf ("Digite o número de pontos turísticos da cidade: \n");
scanf ("%d", &pontosturisticos2);  

// Cálculo do PIB per capita
PIBpercapita1 = PIB1 /  populacao1; // Cálculo do PIB per capita da carta 1
PIBpercapita2 = PIB2 /  populacao2; // Cálculo do PIB per capita da carta 2

// Cálculo da densidade populacional
densidade1= populacao1 / area1; // Cálculo da densidade populacional da carta 1
densidade2= populacao2 / area2; // Cálculo da densidade populacional da carta 2


// Superpoder da carta 1
float Superpoder1 = area1 + populacao1 + PIB1 + (float) pontosturisticos1 +  1 / densidade1 + PIBpercapita1; 

// Superpoder da carta 2
float Superpoder2 = area2 + populacao2 + PIB2 + (float) pontosturisticos2 + 1 / densidade2 + PIBpercapita2; 


printf("\n====================================================\n");

printf ("Cartas cadastradas com sucesso");

//Exibição dos dados das cartas

printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f milhões de R$\n", PIB1);
printf("Pontos turísticos: %d\n", pontosturisticos1);
printf("Densidade populacional: %.2f hab/km²\n", densidade1);
printf("PIB per capita: %.2f R$\n", PIBpercapita1);
printf("Superpoder: %.2f\n", Superpoder1);
printf("\n====================================================\n");


printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f milhões de R$\n", PIB2);
printf("Pontos turísticos: %d\n", pontosturisticos2);
printf("Densidade populacional: %.2f hab/km²\n", densidade2);
printf("PIB per capita: %.2f R$\n", PIBpercapita2);
printf("Superpoder: %.2f\n", Superpoder2);


printf("\n====================================================\n");

// Comparação das cartas
printf ("Escolha um atributo para comparação:\n");
printf ("1 - População\n2 - PIB\n3 - Área\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Superpoder\n");
printf ("Digite o número do atributo: ");
scanf("%d", &comparacao);

switch (comparacao) {
case 1: // Comparação por população
    printf ("Comparação das cartas: (Atributo População)");
    printf("\nCarta 1: %s - População: %lu", cidade1, populacao1);
    printf("\nCarta 2: %s - População: %lu", cidade2, populacao2);
    if (populacao1 > populacao2){
        printf("\n A carta 1 venceu !!!\n");
    } else if (populacao1 < populacao2) {
        printf(" \nA carta 2 venceu !!!\n");
    } else {
        printf ("Empate!!!\n");
    }
    break;
case 2: // Comparação por PIB
    printf ("Comparação das cartas: (Atributo PIB)");
    printf("\nCarta 1: %s - PIB: %.2f milhões de R$", cidade1, PIB1);
    printf("\nCarta 2: %s - PIB: %.2f milhões de R$", cidade2, PIB2);
    if (PIB1 > PIB2){
        printf("\n A carta 1 venceu !!!\n");
    } else if (PIB1 < PIB2) {
        printf(" \nA carta 2 venceu !!!\n");
    } else {
        printf ("Empate!!!\n");
    }
    break;
case 3: // Comparação por área
    printf ("Comparação das cartas: (Atributo Area)\n");
    printf("\nCarta 1: %s - Área: %.2f km²", cidade1, area1);
    printf("\nCarta 2: %s - Área: %.2f km²", cidade2, area2);
    if (area1 > area2){
        printf("\n A carta 1 venceu !!!\n");
    } else if (area1 < area2) {
        printf(" \nA carta 2 venceu !!!\n");
    } else {
        printf( " \n Empate !!!\n");
    }
    break;
case 4: //Comparação por pontos turisticos
    printf ("Comparação das cartas: (Atributo Pontos Turísticos)\n");
    printf("\nCarta 1: %s - Pontos Turísticos: %d", cidade1, pontosturisticos1);
    printf("\nCarta 2: %s - Pontos Turísticos: %d", cidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2){
        printf("\n A carta 1 venceu !!!\n");
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf(" \nA carta 2 venceu !!!\n");
    } else {
        printf ("Empate!!!\n");
    }
    break;
case 5: //Comparação de Densidade Populacional
    printf ("Comparação das cartas: (Atributo Densidade Populacional)\n");
    printf ("\nCarta 1: %s - Densidade Populacional: %.2f hab/km²", cidade1, densidade1);
    printf ("\nCarta 2: %s - Densidade Populacional: %.2f hab/km²", cidade2, densidade2);
    if (densidade1 < densidade2){
        printf("\n A carta 1 venceu !!!\n");
    } else if (densidade1 > densidade2) {
        printf(" \nA carta 2 venceu !!!\n");
    } else {
        printf ("\n Empate!!!\n");
    }
    break;
case 6: //Comparação PIB per Capita
    printf (" Comparação das cartas: (Atributo PIB Per Capita)\n");
    printf ("\nCarta 1: %s - PIB Per Capita: %.2f R$", cidade1, PIBpercapita1);
    printf ("\nCarta 2: %s - PIB Per Capita: %.2f R$", cidade2, PIBpercapita2);
    if (PIBpercapita1 > PIBpercapita2){
        printf("\n A carta 1 venceu !!!\n");
    } else if (PIBpercapita1 < PIBpercapita2) {
        printf(" \nA carta 2 venceu !!!\n");
    } else {
        printf ("Empate!!!\n");
    }
    break;
case 7: //Comparação superpoder
    printf("Comparação das cartas: (Atributo Superpoder)\n");
    printf("\nCarta 1: %s - Superpoder: %.2f\n", cidade1, Superpoder1);
    printf("\nCarta 2: %s - Superpoder: %.2f\n", cidade2, Superpoder2);
    if (Superpoder1 > Superpoder2) {
        printf("A carta 1 venceu !!!\n");
    } else if (Superpoder1 < Superpoder2) {
        printf("A carta 2 venceu !!!\n");
    } else {
        printf("Empate!!!\n");
    }
    break;
default:
    printf("Atributo inválido!\n");
    break;
}
return 0;
}

