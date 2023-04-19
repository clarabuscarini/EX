#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	float n,maior,menor, cont;
	printf("entre com o primeiro numero:");
	scanf("%f",& n);
	menor=n;
	maior=n;
	cont=1;
    cont<=4;
	cont=cont+1;
	printf("entre com o ","cont","numero");
	scanf("%f",& n);
	if (n>maior)
	{
		maior=n;
	}else
	if (n<menor)
	{
		menor=n;
	}
	printf(" o menor numero e o maior numero","menor", "maior");
	
	getch();
	return 0;
}
