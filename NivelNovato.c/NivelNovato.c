#include <stdio.h>
  int main(){
    char estado;
    char CodigoDaCarta[4], NomeDaCidade[12];
    int Populacao;
    int PontosTuristicos;
    float area, pib;
    
      printf("Insira os dados das duas cartas, a letra do estado deve ser de A a H, a Área deve ser em km², o código da carta deve ser de 01 a 04 e deve estar depois da letra do estado. A = Acre, B = Bahia, C = Ceará, D = Espírito Santo, E = Goiás, F = Maranhão, G = Alagoas, H = Amazonas, Depois escolha uma cidade, imforme o número de habitantes da cidade, imforme a área da cidade, imforme o PIB, imforme o Número de pontos turísticos.\n");
      printf("Escolha seu estado: ");
      scanf("%c", &estado);
      
      printf("Escolha o Código da carta: ");
      scanf("%i", &CodigoDaCarta);

      printf("Imforme o nome da cidade: ");
      scanf("%s", NomeDaCidade);

      printf("Imforme o número de Habitantes da cidade: ");
      scanf("%d", &Populacao);

      printf("Imforme a Área da cidade: \n");
      scanf("%s", area);

      printf("Imforme o PIB: ");
      scanf("%s", pib);

      
    
    
    
    
    }
