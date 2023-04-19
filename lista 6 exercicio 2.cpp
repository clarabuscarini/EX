#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int a[7],b[7],c[7][2];
	int i,j;
	for(i=0;i<7;i++)
	{
		printf("\ndigite os valores de a\n");
		scanf("%d",& a[i]);
	}
	for(j=0;j<7;j++)
	{
		printf("\ndigite os valores de b\n");
		scanf("%d",& b[j]);
	}
	printf("\n\n");
	printf("os valores da matriz C é:");
	for(i=0;i<7;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i];
			c[i][j]=b[j];
			printf("%d\n",c[i][j]);
		}
    }
	getch();
	return 0;
}
