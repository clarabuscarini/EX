#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int num[8],numm[8],i,x,temp,valor,aux=0;
	setlocale(LC_ALL, "portuguese");
	do
	{
		printf("\nInsira o valor:\n");
		scanf("%i",& valor);
		num[aux]=valor;
		aux++;
	}while(valor<1000);
	for(i=0;i<=8;i++)
	{
		numm[i]=num[i]*5;
	}
	for (i=0;i<aux; i++)
	{
		for(x=i+1;x<aux;x++)
		{
			if (num[i]>num[x])
			{
				temp=num[i];
				num[i]=num[x];
				num[x]=temp;
			}
		}
	}
	printf("\nA ordem crescente dos numeros é:\n");
	for (i=0;i<aux;i++)
	{
		printf("%i\n",num[i]);
	}
	getch();
	return 0;
}
