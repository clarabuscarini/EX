#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i;
	for(i=1;i<200;++i)
	{
		if (i % 4==0)
		{
			printf("o numero é divisivel por 4\n\n");
			printf("%i\n\n",i);
		}
	}
	
	getch();
	return 0;
}
