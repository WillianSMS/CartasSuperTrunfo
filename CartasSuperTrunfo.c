#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//carta A
	int Numero_PontosTuristicos_A, Populacao_A; //Variáveis referente a Quantidade de pontos turisticos e a população
	float PIB_A, Areakm2_A; //Variáveis referente ao PIB e a area em km2
	char Estado_A; //Variável referente ao estado
	char Nome_cidade_A[50]; //Variável referente ao nome da cidade
	char Codigo_carta_A[10]; //Variavel referente ao codigo da carta
//carta B
  int Numero_PontosTuristicos_B, Populacao_B; //Variáveis referente a Quantidade de pontos turisticos e a população
	float PIB_B, Areakm2_B; //Variáveis referente ao PIB e a area em km2
	char Estado_B; //Variável referente ao estado
	char Nome_cidade_B[50]; //Variável referente ao nome da cidade
	char Codigo_carta_B[10]; //Variavel referente ao codigo da carta

  // Área para entrada de dados

  //carta A
  printf("Digite as informações da Carta A\n");
  printf("Codigo da carta: "); //neste campo devera digitar o codigo da carta.
	scanf("%s", Codigo_carta_A);

	printf("Estado: "); //neste campo deverá digitar apenas uma letra que represente um dos estados, assim como pedido no enunciado do desafio.
	scanf(" %c", &Estado_A);

	printf("Nome da Cidade: "); // neste campo deverá digitar nome da cidade sem espaços, preferencialmente opte por usar nomes unico, ex: Manaus, evite utilizar nomes como São Paulo, se ainda sim quiser escrever nomes que possuam espaçamento escreva tudo junto colocando letras maiúsculas para identificar onde há espaço.
	scanf(" %s", Nome_cidade_A);

	printf("PIB: ");//neste campo digite um valor que represente o PIB. obs.: por ser um codigo para praticar o nivel iniciante de programação em C não há a nescessidade de utilizar um valor exato ou espcífico.
	scanf("%f", &PIB_A);

	printf("Area: ");//neste campo digite um valor que ira representa a área da região. OBS.: assim como o PIB não a nescessidade de ser um valor específico.
	scanf("%f", &Areakm2_A);

	printf("População: ");//neste campo digite a população da região, não há a nescessidadede valores específico.
	scanf("%d", &Populacao_A);

	printf("Quantidade de pontos turísticos: ");//neste campo digite a quantidade de pontos turísticos.
	scanf("%d", &Numero_PontosTuristicos_A);
	
//OBS.: Tudo o que foi explicado, ou especificado nos comentarios na carta A deverá ser aplicado na carta B.
//carta B
 printf("\nDigite as informações da Carta B\n");
 printf("Codigo da carta: ");
	scanf("%s", Codigo_carta_B);

	printf("Estado: ");
	scanf(" %c", &Estado_B);

	printf("Nome da Cidade: ");
	scanf(" %s", Nome_cidade_B);

	printf("PIB: ");
	scanf("%f", &PIB_B);

	printf("Area: ");
	scanf("%f", &Areakm2_B);

	printf("População: ");
	scanf("%d", &Populacao_B);

	printf("Quantidade de pontos turísticos: ");
	scanf("%d", &Numero_PontosTuristicos_B);

  // Área para exibição dos dados da cidade
  //carta A
  printf("\n -------- Carta A -------- \n");
  printf("Codigo da carta: %s\n", Codigo_carta_A);
	printf("Estado: %c\n", Estado_A);
	printf("Cidade: %s\n", Nome_cidade_A);
	printf("PIB: %.2f\n", PIB_A);
	printf("Area: %.2fkm2\n", Areakm2_A);
	printf("População: %d\n", Populacao_A);
	printf("Quantidade de pontos turísticos: %d\n", Numero_PontosTuristicos_A);
	printf("\n ------------------------- \n");

  //carta B
  printf("\n -------- Carta B -------- \n");
  printf("Codigo da carta: %s\n", Codigo_carta_B);
	printf("Estado: %c\n", Estado_B);
	printf("Cidade: %s\n", Nome_cidade_B);
	printf("PIB: %.2f\n", PIB_B);
	printf("Area: %.2fkm2\n", Areakm2_B);
	printf("População: %d\n", Populacao_B);
	printf("Quantidade de pontos turísticos: %d\n", Numero_PontosTuristicos_B);
  printf("\n ------------------------- \n");

  //Fim do Programa
return 0;
} 
