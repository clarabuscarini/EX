#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int menu, i,media;
int main ()
{
setlocale (LC_ALL, "portuguese");
	
	struct cadastro
	{	
		char nome [120];
		float n1;
		float n2;
		float n3;
		float n4;
	};	
	cadastro b[50];
	
		while (menu!=3){
			
			printf ("\t 1 - REALIZAR CADASTRO DOS ALUNOS\n\n");	
			printf ("\t 2 - VIZUALIZAR OS ALUNOS APROVADOS\n\n");
			printf ("\t 3 - VIZUALIZAR OS ALUNOS REPROVADOS\n\n");		
		
			printf ("\nEscolha uma opção: ");
			scanf ("%i", &menu);	
			system ("cls");
			
				switch (menu){
					case 1: 
					
						for(i=0; i<50; i++)
						{
							printf ("DIGITE O NOME DO ALUNO: ");
							fflush (stdin);
							fgets (b[i].nome,120, stdin);
							printf ("\nDIGITE A NOTA 1 DO ALUNO: ");
							scanf ("%f", &b[i].n1);
							printf ("\nDIGITE A NOTA 2 DO ALUNO: ");
							scanf ("%f", &b[i].n2);
							printf("\nDIGITE A NOTA 3 DO ALUNO:  ");
							scanf("%f",&b[i].n3);
							printf("\nDIGITE A NOTA 4 DO ALUNO:   ");
							scanf("%f", &b[i].n4);
							system ("cls");
							printf ("\t.... SEU CADASTRO REALIZADO COM SUCESSO ....\n\n");
							system ("cls");
						}
						break;
						case 2:
							printf ("...... LISTA DOS APROVADOS .....\n\n");
							for (i=0; i<50; i++)
							{
								media = (b[i].n1 + b[i].n2 + b[i].n3 + b[i].n4) /4;
									if (media>=6.0)
									{
										printf ("%s\n", b[i].nome);
										
									}
							}
							break;
					case 3:
						
						printf ("...... LISTA DOS REPROVADOS .....\n\n");
							for (i=0; i<50; i++)
							{
								media = (b[i].n1 + b[i].n2 + b[i].n3 + b[i].n4) /4;
									if (media<5.0)
									{
										printf ("%s\n", b[i].nome);
										
									}	
							}
							break;
								}	
	}
}
