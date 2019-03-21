#include <stdio.h>
#include <stdlib.h>


void main()
{
	int  *punt, apunta = 4;
	punt = &apunta;
	printf("1)Contenido del puntero %d\n", *punt);
	printf("2)Direccion de memoria almacenada por el puntero %p\n", punt);
	printf("3)Direccion de memoria de la variable %p\n",&apunta);
	printf("4)Direccion de memoria del puntero %p\n",&punt);
	printf("5)Direccion de memoria de la variable %d\n",sizeof(apunta));
}
//SE DEBE A QUE EL PUNTERO ALMACENO LA DIRECCION DE MEMORIA DE LA VARIABLE APUNTA EN 2 Y LUEGO EN 3ESTOY MOSTRANDO LA DIRECCION DE MEMORIA DE LA VARIABLE APUNTA