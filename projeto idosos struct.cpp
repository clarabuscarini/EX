#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL, "portuguese");
	int acha,i, res, alt,j;
	char pesq[90], aux[90];
	struct cadastro
	{
		char nome[90];
		char endereco[120];
		int idade;
		int peso;
	};
	struct cadastro b[6];
	res=0;
	while (res<7)
	{
		printf("\nInsira a opção desejada:");
		printf("\n1-Cadastro\n2-Listagem de todos os idosos aposentados(idade>=65 anos)\n3-listagem de todos os idosos em ordem decrescente do peso\n4-Alteração do nome\n5-Sair\n"); 
		scanf("%i", & res);
		 switch (res)
		                       case 1:
		                       	{
		                       		for (i=0;i<5;i=i+1)
		                       		{
		                       			printf("\nEntre com o nome: ");
		                       			fflush(stdin);
		                       			fgets(b[i].nome,90,stdin);
		                       			printf("\nEntre com o endereço: ");
		                       			fflush(stdin);
		                       			fgets(b[i].endereco,120,stdin);
		                       			printf("\nEntre com a idade: ");
		                       			scanf("%i", &b[i].idade);
		                       			printf("\nEntre com o peso: ");
		                       			scanf("%i", &b[i].peso);
									   }
									   break;
								}
							}
						}
