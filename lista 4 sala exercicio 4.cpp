#include<stdio.h>
#include<conio.h>

int main ()
{
    int MatA[5], MatB[5], MatC[10];
    int i, j;
    printf("\nInforme os 5 valores da matriz A:\n");
    for(i=0; i<=4; i++)
    {
       scanf("%d", &MatA[i]);
    }
    printf("\nInforme os 5 valores da matriz B:\n");
    for(j=0; j<=4; j++)
    {
       scanf("%d", &MatB[j]);
    }
    printf("\nApresentando os dados da matriz A:\n");
    for(i=0; i<=4; i++)
    {
       printf("%d ", MatA[i]);
    }
    printf("\nApresentando os dados da matriz B:\n");
    for(j=0; j<=4; j++)
   {
    printf("%d ", MatB[j]);
   }
   printf("\n");
   for(i=0; i<=4; i++)
   {
    	MatC[i]=MatA[i];
   }
   for(j=0,i=0; j<=9; j++,i++)
   {
    	MatC[j]=MatA[i];
   }
   getch();
   return 0;
}
