#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char resposta1[141], resposta2[141], resposta3[141], resposta4[141], resposta5[141];
	setlocale(LC_ALL,"portuguese");
	printf("QUESTIONÁRIO CINÉFILO\n");
	printf("__________________________________________________\n");

	printf("\nQuem dirigiu 2001: Uma odisséia no espaço?");
	scanf("%s", &res1[141]);
	system("cls");
	printf("\nQuantas cenas improvisadas tiveram em senhor dos anéis? ");
	scanf("%s", &res2[141]);
	system("cls");	
	printf("\nEscreva o nome do melhor amigo de Han Solo, sem pesquisar no google:");
	scanf("%s", &res3[141]);
	system("cls");	
	printf("\nQuantos anos boyhood demorou pra ser filmado?");
	scanf("%s", &res4[141]);
	system("cls");	
	printf("\nQual o melhor filme do Adam Sandler? ");
	scanf("%s", &res5[141]);
	system("cls");	
	
	
	return 0;
}
