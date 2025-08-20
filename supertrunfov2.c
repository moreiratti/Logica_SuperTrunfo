#include <stdio.h>

int main(){
 printf("DESAFIO SUPER TRUNFO\n");
 printf("Aqui você irá criar as suas cartas\n");
 printf("By: Kauan Moreira \n");

 //variaveis primeira carta
 char estado1 [10]; 
 char codigo1 [5]; 
 char nome1 [10];
 unsigned long int populacao1; 
 int Pontosturisticos1;
 float area1;
 float pib1;
 float DensidadePopulacional1;
 float PibPerCapita1;
 float Inverso1;
 float SuperPoder1;
 int ResultadoPopulação, ResultadoPoder, ResultadoÁrea, ResultadoPib, ResultadoDensidadePopulacional, ResultadoPontosTuristicos, ResultadoPibPerCapita;

 printf(" *** Cadastro 1 Carta *** \n");
 
 printf("Digite o estado: \n");
 scanf("%s", estado1);

 printf("Digite o código (A01-HO4): \n");
 scanf("%s", codigo1);
 
 printf("Digite o nome da cidade: \n");
 scanf("%s", nome1);

 printf("Digite a população: \n");
 scanf("%lu", &populacao1);

 printf("Digite a quantidade de Pontos Turisticos: \n");
 scanf("%d", &Pontosturisticos1);

 printf("Digite a Área da cidade: \n");
 scanf("%f", &area1);

 printf("Digite O PIB: \n");
 scanf("%f", &pib1);


 //calculos de Densidade Populacional e Pib Per Capita
 DensidadePopulacional1 = (float)(populacao1 / area1);
 printf("A Densidade Populacional é: %f \n", DensidadePopulacional1);
 PibPerCapita1 = (float)(pib1 / populacao1);
 printf("O Pib per Capita é: %f \n", PibPerCapita1);

  //calculos para Super Poder 1
 Inverso1 = (DensidadePopulacional1 / 1 );
 SuperPoder1 = (float)(populacao1 + area1 + pib1 + Pontosturisticos1 + PibPerCapita1 + Inverso1 );



 //variaveis segunda carta
 char estado2 [10]; 
 char codigo2 [5]; 
 char nome2 [10];
 unsigned long int populacao2; 
 int Pontosturisticos2;
 float area2;
 float pib2;
 float DensidadePopulacional2;
 float PibPerCapita2;
 float Inverso2;
 float SuperPoder2;

  printf(" *** Cadastro 2 Carta *** \n");
 
 printf("Digite o estado: \n");
 scanf("%s", estado2);

 printf("Digite o código (A01-HO4): \n");
 scanf("%s", codigo2);
 
 printf("Digite o nome da cidade: \n");
 scanf("%s", nome2);

 printf("Digite a população: \n");
 scanf("%lu", &populacao2);

 printf("Digite a quantidade de Pontos Turisticos: \n");
 scanf("%d", &Pontosturisticos2);

 printf("Digite a Área da cidade: \n");
 scanf("%f", &area2);

 printf("Digite O PIB: \n");
 scanf("%f", &pib2);

 //calculos de Densidade Populacional e Pib Per Capita
 DensidadePopulacional2 = (float)(populacao2 / area2);
 printf("A Densidade Populacional é: %f \n", DensidadePopulacional2);
 PibPerCapita2 = (float)(pib2 / populacao2);
 printf("O Pib per Capita é: %f \n", PibPerCapita2);

 //calculos para Super Poder 2
 Inverso2 =(DensidadePopulacional2 / 1 );
 SuperPoder2 = (float)(populacao2 + area2 + pib2 + Pontosturisticos2 + PibPerCapita2 + Inverso2);

  // CARTA 1 COMPLETA
 printf(" === PRIMEIRA CARTA === \n");
 printf("Super Poder: %f\n", SuperPoder1);
 printf("Estado: %s\n", estado1);
 printf("Código: %s\n", codigo1);
 printf("Cidade: %s\n", nome1);
 printf("População: %lu\n", populacao1);
 printf("Pontos Turísticos: %d\n", Pontosturisticos1);
 printf("Área: %f\n", area1);
 printf("PIB: %f\n", pib1); 
 printf("Densidade Populacional: %f\n", DensidadePopulacional1); 
 printf("PIB per Capita: %f\n", PibPerCapita1); 
 printf(" ====================== \n");

 // CARTA 2 COMPLETA
 printf(" === SEGUNDA CARTA === \n");
 printf("Super Poder: %f\n", SuperPoder2);
 printf("Estado: %s\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Cidade: %s\n", nome2);
 printf("População: %lu\n", populacao2);
 printf("Pontos Turísticos: %d\n", Pontosturisticos2);
 printf("Área: %f\n", area2);
 printf("PIB: %f\n", pib2);
 printf("Densidade Populacional: %f\n", DensidadePopulacional2); 
 printf("PIB per Capita: %f\n", PibPerCapita2);
 printf(" ====================== \n");

  // COMPARAÇÃO DE CARTAS 
  int escolha;
 printf(" *** Aqui irá sair o comparativo dos atributos das cartas para sabermos o ganhador *** \n");
 printf("Escolha um atributo de comparação para as cidades: %s e %s \n", nome1, nome2);
 printf("1. Super Poder\n");
 printf("2. População\n");
 printf("3. PIB\n");
 printf("4. Área\n");
 printf("5. Densidade Populacional\n");
 printf("6. Pib per Capita\n");
 printf("Escolha: ");
 scanf("%d", &escolha);

 switch (escolha)
 {
 case 1:
   printf(" *** Super Poder *** \n ");
    printf("Carta 1, Super Poder: %f\n", SuperPoder1);
 printf("Carta 2, Super Poder: %f\n", SuperPoder2);

 if(SuperPoder1 > SuperPoder2){
    printf("Carta 1 Venceu!\n");
 } else if (SuperPoder1 < SuperPoder2) {
     printf("Carta 2 Venceu!\n");
 } else{ 
 printf("Houve um empate!");
 }
    break;
 case 2:
   printf(" *** População *** \n ");
 printf("Carta 1 População: %lu\n", populacao1);
 printf("Carta 2 População: %lu\n", populacao2);

 if (populacao1 > populacao2){
    printf("Carta 1 Venceu!\n");
 } else if (populacao1 < populacao2) {
 printf("Carta 2 Venceu!\n");
  } else { 
 printf("Houve um empate!");
 }
    break;
 case 3:
   printf(" *** PIB *** \n ");
    printf("Carta 1 PIB: %f\n", pib1); 
 printf("Carta 2 PIB: %f\n", pib2);

 if(pib1 > pib2){
    printf("Carta 1 Venceu!\n");
 } else if (pib1 < pib2 ) {
    printf("Carta 2 Venceu!\n");
 } else{
     printf("Houve um empate!\n");
}
    break;

 case 4:
   printf(" *** Área *** \n ");
    printf("Carta 1 Área: %f\n", area1);
 printf("Carta 2 Área: %f\n", area2);

 if(area1 > area2){
   printf("Carta 1 Venceu!\n");
 } else if (area1 < area2 ) {
    printf("Carta 2 Venceu!\n");
 } else{
     printf("Houve um empate!\n");
     } break;

 case 5:
 printf(" *** Densidade Populacional *** \n ");
 printf("Carta 1 Densidade Populacional: %f\n", DensidadePopulacional1); 
 printf("Carta 2 Densidade Populacional: %f\n", DensidadePopulacional2);

 if(DensidadePopulacional1 < DensidadePopulacional2){
    printf("Carta 1 Venceu!\n");
 } else if (DensidadePopulacional1 > DensidadePopulacional2 ) {
    printf("Carta 2 Venceu!\n");
 } else{
     printf("Houve um empate!\n");
     }
 break;
 case 6:
 printf(" *** Pib per Capita *** \n ");
 printf("Carta 1 PIB per Capita: %f\n", PibPerCapita1);
 printf("Carta 2 PIB per Capita: %f\n", PibPerCapita2);

 if(PibPerCapita1 > PibPerCapita2){
    printf("Carta 1 Venceu!\n");
 } else if (PibPerCapita1 < PibPerCapita2 ) {    
    printf("Carta 2 Venceu!\n");
 } else {
     printf("Houve um empate!\n");
 }
 break;
 default:
 printf("Opção Inválida");
    break;
 }

























  









































}