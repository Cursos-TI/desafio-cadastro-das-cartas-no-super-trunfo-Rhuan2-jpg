#include <stdio.h>
  int main(){ 
       //Dados e váriaveis para a primeira carta
    char estado;
    char CodigoDaCarta[4], NomeDaCidade[25];
    int Populacao;
    int PontosTuristicos;
    float area, pib;
    int temp_char;
       //Explicação do que deve ser inserido na primeira carta
      printf("Insira os dados das duas cartas, a letra do estado deve ser de A a H, a Área deve ser em km², o código da carta deve ser de 01 a 04 e deve estar depois da letra do estado. A = Acre, B = Bahia, C = Ceará, D = Espírito Santo, E = Goiás, F = Maranhão, G = Alagoas, H = Amazonas, Depois escolha uma cidade, imforme o número de habitantes da cidade, imforme a área da cidade, imforme o PIB, imforme o Número de pontos turísticos.\n");
      printf("Escolha seu estado: ");
      scanf(" %c", &estado);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);
      
      printf("Escolha o Código da carta: ");
      scanf("%3s", CodigoDaCarta);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o nome da cidade: ");
      scanf("%24s", NomeDaCidade);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o número de Habitantes da cidade: ");
      scanf("%d", &Populacao);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme a Área da cidade: ");
      scanf("%f", &area);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o PIB: ");
      scanf("%f", &pib);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o Número de Pontos Turísticos: ");
      scanf("%d", &PontosTuristicos);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);
        //Informações da primeira carta juntas
       printf("as imformações da sua carta são estas respectivamente: %c, %3s, %24s, %d, %f, %f, %d\n", &estado, CodigoDaCarta, NomeDaCidade, &Populacao, &area, &pib, &PontosTuristicos);
        //Dados e váriaveis para segunda carta
    char Estado;
    char codigoDaCarta[4],nomeDaCidade[25]; 
    int populacao;
    int pontosTuristicos;
    float Area, Pib;
      
      printf("Escolha seu estado: ");
      scanf(" %c", &Estado);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);
      
      printf("Escolha o Código da carta: ");
      scanf("%3s", codigoDaCarta);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o nome da cidade: ");
      scanf("%24s", nomeDaCidade);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o número de Habitantes da cidade: ");
      scanf("%d", &populacao);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme a Área da cidade: ");
      scanf("%f", &Area);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o PIB: ");
      scanf("%f", &Pib);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);

      printf("Imforme o Número de Pontos Turísticos: ");
      scanf("%d", &pontosTuristicos);
      while ((temp_char = getchar()) != '\n' && temp_char != EOF);
        //imformações da segunda carta juntas
       printf("as imformações da sua carta são estas respectivamente: %c, %3s, %24s, %d, %f, %f, %d\n", &Estado, codigoDaCarta, nomeDaCidade, &populacao, &Area, &Pib, &pontosTuristicos);
    
    
    }
