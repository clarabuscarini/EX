#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include  <math.h>

int main ()

{
	setlocale (LC_ALL, "portuguese");
	float a, b , resultado;
	int op, go, out;
	int fat;
	
	printf ("\t\t\tPARA INICIAR A CALCULADORA, DIGITE A TECLA 1 ABAIXO:\n");
	scanf ("%i", &go);
	system ("cls");
	printf ("\t\t\tCALCULADORA \n\n");
	
	while(go==1){
		printf ("A seguir, escolha uma op��o que seja correspondente com a opera��o desejada:\n 1-pot�ncia de 3 \n 2-raiz quadrada \n 3-fatorial \n 4-sair");
		printf ("\n");
		scanf("%i",&op);
			
		system ("cls");
		
		printf("Digite o primeiro n�mero:");
		scanf ("%f", &a);
		printf ("Digite o segundo n�mero:");
		scanf("%f", &b);	
		
		
		switch (op){
				case 1:
				resultado=pow(a,3);
				printf ("\nO resultado da potencia de 3 do valor A �: %f", resultado);
				resultado=pow(b,3);
				printf("\nO resultado da potencia de 3 do valor B �: %f", resultado); break;
			case 2: 
				resultado=sqrt(a);
				printf ("\nO resultado da raiz do valor A �: %f", resultado);
				resultado=sqrt(b);
				printf("\nO resultado da raiz do valor B �: %f", resultado); break;
			case 3:  
			    for (fat=1;a>1;a--) 
               	{
                  fat*=a;
               }
				resultado=a;
				printf ("\nO resultado do fatorial do valor A �: %f", resultado);
				for (fat=1;b>1;b--) 
               	{
                  fat*=b;
                } 
				resultado=b;
				printf("\nO resultado do fatorial do valor B �: %f", resultado); break;
			case 4: 
		     	printf ("    VOC� REALMENTE DESEJA SAIR?\n\n");
			    printf ("\t1-SIM 	0-N�O\n");
			    scanf ("%i", &out);
			    system ("cls");

			   if(out=1)
			  {
			  	return 0;
			  }
			  break;
		
			default:
		 		printf("\nOp��o inv�lida"); 
			break;
		} 
	}

	getchar ();
	return 0;
}
		
