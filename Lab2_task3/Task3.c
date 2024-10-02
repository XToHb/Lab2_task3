#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	float n, L;
	int k, m, n1, L1;
	n = 2;
	L = 733;
	k = 3;
	m = 7;
	n1 = (int)n;
	L1 = (int)L;

	setlocale(LC_ALL, "RUS");
	printf("Дано: \n\t %*i\n\t %*i\n\t_____________\n",k+1,n1,k+1,L1);
	printf("Ответ:\n\t %+0*.*f",k+m+2,m, n / L);
}
