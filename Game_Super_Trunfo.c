#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  // Inicializando Variaveis
  int population, population2;
  float area, area2;
  float PIB, PIB2;
  int turistc_points, turistc_points2;
  float Densi_population, Densi_population2;
  int opcao;
  
  char name[50] = "Brazil";
  char name2[50] = "Amirandia";
  
  area = 1000;
  area2 = 2000;

  population = 10000;
  population2 = 500;
  
  PIB = 10000;
  PIB2 = 400000;

  turistc_points = 10;
  turistc_points2 = 5;

  Densi_population = population / area;
  Densi_population2 = population2 / area2;

  // Apresentando os valores
  printf("=========================\n");
  printf("Países iniciais:\n");
  printf("%s VS %s\n", name, name2);
  printf("=========================\n");
  printf("*** Informações gerais\n");
  printf("População: %i : %i \nArea da cidade: %.2fkm : %.2fkm\nDensidade Populacional: %.2f : %.2f \nPIB: R$ %.2f : R$ %.2f \nPontos Turisticos: %i : %i \n", population, population2, area, area2, Densi_population, Densi_population2, PIB, PIB2, turistc_points, turistc_points2);
  printf("=========================\n");
  printf("\nAgora escolha um dos atributos para comparação:\n");
  printf("1.População.\n2.Area.\n3.Densidade Populacional.\n4.PIB.\n5.Pontos Turisticos.\n\n");

  //recebendo opção
  printf("$=> ");
  scanf("%i", &opcao);
  
  // Validando a opção a ser mostrada
  switch (opcao)
  {  
    case 1:
      printf("\n***População: \nPais 01 (%s) : %i \nPais 02 (%s) : %i\n\n", name, population, name2, population2);
      if (population > population2) {
        if (population > 0) {
          printf("Pais 01: %s - VENCEU!!!!\n", name);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      else {
        if (population2 > 0) {
          printf("Pais 02: %s - VENCEU!!!!\n", name2);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      break;
    case 2:
      printf("\n***Area: \nPais 01 (%s) : %.2f \nPais 02 (%s) : %.2f\n\n", name, area, name2, area2);
      if (area > area2) {
        if (area > 0) {
          printf("Pais 01: %s - VENCEU!!!!\n", name);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      else {
        if (area2 > 0) {
          printf("Pais 02: %s - VENCEU!!!!\n", name2);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      break;
    // Esse é o contrario dos outros visando as regras do jogo.
    case 3:
      printf("\n***Densidade Populacional: \nPais 01 (%s) : %.2f \nPais 02 (%s) : %.2f\n\n", name, Densi_population, name2, Densi_population2);
      if (Densi_population < Densi_population2) {
        if (Densi_population > 0) {
          printf("Pais 01: %s - VENCEU!!!!\n", name);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      else {
        if (Densi_population2 > 0) {
          printf("Pais 02: %s - VENCEU!!!!\n", name2);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      break;
    case 4:
      printf("\n***PIB: \nPais 01 (%s) : %.2f \nPais 02 (%s) : %.2f\n\n", name, PIB, name2, PIB2);
      if (PIB > PIB2) {
        if (PIB > 0) {
          printf("Pais 01: %s - VENCEU!!!!\n", name);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      else {
        if (PIB2 > 0) {
          printf("Pais 02: %s - VENCEU!!!!\n", name2);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      break;
    case 5:
      printf("\n***Pontos Turisticos: \nPais 01 (%s) : %i \nPais 02 (%s) : %i\n\n", name, turistc_points, name2, turistc_points2);
      if (turistc_points > turistc_points2) {
        if (turistc_points > 0) {
          printf("Pais 01: %s - VENCEU!!!!\n", name);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      else {
        if (turistc_points2 > 0) {
          printf("Pais 02: %s - VENCEU!!!!\n", name2);
        }
        else {
          printf("Valor invalido\n");
        }
      }
      break;
    // Se a opção for invalida
    default:
      printf("\nOpcao inexistente, programa finalizado...");
      break;
  }
  printf("\n=========================\n");
  return 0;

}
