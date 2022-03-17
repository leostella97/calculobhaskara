#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float a, b, c, bQuadrado, delta, x1, x2;
	printf("---- Calculo de Bhaskara ---- \n Exemplo: Delta: b^2-4*a*c \n x1: -b+raiz(delta)/2*a / x2: -b-raiz(delta)/2*a \n\n");
	printf("Digite o a: ");
	scanf("%f", &a, "\n");
	printf("Digite o b: ");
	scanf("%f", &b, "\n");
	printf("Digite o c: ");
	scanf("%f", &c, "\n");
	bQuadrado = pow (b, 2);
	delta = bQuadrado-4*a*c;
	x1 = (-b+sqrt(bQuadrado))/2*a;
	x2 = (-b-sqrt(bQuadrado))/2*a;
	printf("\n\n RESPOSTAS \n");
	printf("O delta e: %.2f \n", delta);
	printf("x1: %.2f \n", &x1);
	printf("x2: %.2f \n", &x2);
	getch();
}

