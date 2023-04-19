#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, aux, x;
int matrizA(int a[12])
{
setlocale (LC_ALL, "portuguese");
for(i=1; i<11; i++)
	for(aux=i+1; aux<12; aux++)
		{
			if(a[i]>a[aux])
			{
				x = a[i];
				a[i] = a[aux];
				a[aux] = x;
			}
		}
			printf("Os valores referente a matriz A em ordem crescente são: \n");
				for(i=1; i<12; i++)
				{
					printf("%i\n", a[i]);
				}
				system ("pause");
				system ("cls");
}

	int matrizB(int b[12])
	{
		for(i=1; i<11; i++)
			for(aux=i+1; aux<12; aux++)
				{
					if(b[i] > b[aux])
					{
						x = b[i];
						b[i] = b[aux];
						b[aux] = x;
					}
				}
				printf("Os valores referente à matriz B ordem crescente são:\n");
					for(i=1; i<=12; i++)
						{
							printf("%i\n", b[i]);
						}
					system ("pause");
				system ("cls");
	}
		int matrizC	(int a[12], int b[12], int c[24])
		{
			for(i=0; i<12; i++)
			{
				c[i] = a[i] + b[i];
			} 
			for(i=1; i<11; i++)
				for(aux=i+1; aux<12; aux++)
				{
					if(c[i] > a[i]+ b[i])
					{
						x = c[i];
						c[i] = a[i];
						a[i] = x;
					}
				}			
		
			printf("Os valores referente à matriz C são:\n");
			for(i=1; i<=12; i++)
			{
				printf("%i\n", c[i]);
			}	
	}

int main()
{
	int a[12];
	printf("Digite os valores referente a matriz A:\n");
		for(i=1; i<12; i++)
		{
			scanf("%i", &a[i]);
		}
		system ("pause");
		system ("cls");
		int b[12];
		printf("Digite os valores referente a matriz B:\n");
			for(i=1; i<=12; i++)
			{
				scanf("%i", &b[i]);
			}
			system ("pause");
			system ("cls");
			matrizA(a);
			matrizB (b);
			int c[24];
			matrizC (a,b,c);		
}


