#include <stdio.h>
#include <stdlib.h>

int cuadrado(int num);
void cuadradov(int numeros);
void invertir(int a, int b);
void main()
{
	int numero, a, b;
	printf("Ingrese el numero\n");
	scanf("%d", &numero);
	printf("El cuadrado es : %d \n",cuadrado(numero));
	cuadradov(numero);
	int variable;
	printf("Ingrese otro numero\n");
	scanf("%d", &variable);
	printf("La direccion de memoria es : %p \n",&variable);
	printf("Contenido de la variable: %d \n",variable);
	printf("INGRESE A Y B\n");
	scanf("%d %d", &a, &b);
	invertir(a, b);
}

int cuadrado(int num){

	return (num*num);
}
void cuadradov(int numeros)
{

	printf("El cuadrado desde el void es : %d\n",cuadrado(numeros));
}
void invertir(int a, int b)
{
	static int aux;
	aux = a;
	a = b;
	b = aux;
	printf(" La variable a es : %d y la variable b es %d\n",a,b);
}