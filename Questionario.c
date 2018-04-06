#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char res1[40], res2[40], res3[40], res4[40], res5[40];
	setlocale(LC_ALL,"portuguese");
	printf("QUESTIONÁRIO CINÉFILO\n");
	printf("__________________________________________________\n");

	printf("\nQuem dirigiu 2001: Uma odisséia no espaço?");
	scanf("%s", &res1[40]);
	system("cls");
	printf("\nQuantas cenas improvisadas tiveram em senhor dos anéis? ");
	scanf("%s", &res2[40]);
	system("cls");	
	printf("\nEscreva o nome do melhor amigo de Han Solo, sem pesquisar no google:");
	scanf("%s", &res3[40]);
	system("cls");	
	printf("\nQuantos anos boyhood demorou pra ser filmado?");
	scanf("%s", &res4[40]);
	system("cls");	
	printf("\nQual o melhor filme do Adam Sandler? ");
	scanf("%s", &res5[40]);
	system("cls");	
	printf("CONFIRA SUAS RESPOSTAS:\n");
	printf("_________________________________________________________\n");
	printf("\nResposta 1: Stanley Kubrick\nSua resposta:%s\n",&res1[40]);
	printf("\nResposta 2: 1\nSua resposta:%s\n",&res2[40]);
	printf("\nResposta 3: Chewbacca\nSua resposta:%s\n",&res3[40]);
	printf("\nResposta 4: 12 anos\nSua resposta:%s\n",&res4[40]);
	printf("\nResposta 5: Punch Drunk Love\nSua resposta:%s\n",&res5[40]);
	
	return 0;
}
