#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct perro{
	
	char nombre[15];
	int edadMeses;
	float peso;
	
}perro1={"Falkor", 12, 6.25};

int main(int argc, char *argv[]) {
	
	printf("El nombre del perro es %s su edad es de %i meses y pesa %.2f kg.", perro1.nombre, perro1.edadMeses, perro1.peso);
	
	return 0;
}
