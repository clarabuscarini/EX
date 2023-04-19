#include<stdio.h>
#include<conio.h>

int main()
{
	int ni,m,r,n;
	printf("digite as notas");
	scanf("%f",& n);
	ni=n*10;
	r=ni%10;
	if (r>5)
	{
		m=ni/10;
		m=m+1;
		printf("media é igual a:");
	}else
	m=ni/10;
	printf("media é igual a:");
	
	getch();
	return 0;
}
