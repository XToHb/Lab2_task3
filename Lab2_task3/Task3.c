#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n, L;
n = 2;
L = 133;


int main()
{
	setlocale(LC_ALL, "RUS");
	printf("����: \n %11i\n %11i\n\t________\n", n,L);
	printf("�����:\n\t %+08.4f", n / L);
}