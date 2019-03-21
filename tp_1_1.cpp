#include <stdio.h>
#include <stdlib.h>



int main()
{
	int *puntero, apunta;
	apunta = 4;
	puntero = &apunta;
	printf("%d",puntero);
	printf("%d",&puntero);
	return 0;
}
