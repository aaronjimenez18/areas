#include <stdio.h>
void main()
{
	float radio, resultado, π, area;
	printf("Radio:");
	scanf_s("%f", &radio);
	resultado = radio * radio;
	π = 3.14159;
	area = π * resultado;
	printf("Area del circulo:%10.4f", area);

}