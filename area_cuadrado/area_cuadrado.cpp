#include <stdio.h>
int main()
{
	float lado, area;

	printf("Lado:");
	scanf_s("%f", &lado);
	area = lado * lado;
	printf("El area del cuadrado es:%f", area);

}
