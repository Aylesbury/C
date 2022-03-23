#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include <cmath>
#include <iostream>
using namespace std;


void primer1(float a, float b, float c, float d){
	float n = ((a*d)+(b*c))/(a*d);
	return;
}

void primer2(float x){
	float n = sqrt(1 - pow(sin(x),2));
	return;
}

void primer3(float a, float b, float c, float x){
	float n = 1 / (sqrt(a*pow(x,2)+b*x+c));
	return;
}

void primer4(float x){
	float n = ((sqrt(x + 1))+(sqrt(x - 1)))/(2*sqrt(x));
	return;
}



int main (void){
	setlocale(0,"");

	/*int vi;

	float a = 0,b = 0,c = 0,d = 0,x =0;

	float n;

	printf("Введите номер операции \n");
	scanf("%d", &vi);

	if (vi == 1) {
		printf("Введите числа: A, B, C, D \n");
		scanf("%f %f %f %f", &a, &b, &c, &d);
		n = ((a*d)+(b*c))/(a*d);
	} else if (vi == 2) {
		printf("Введите числа: X \n");
		scanf("%f", &x);
		n = sqrt(1 - pow(sin(x),2));
	} else if (vi == 3) {
		printf("Введите числа: A,B,C,X \n");
		scanf("%f %f %f %f", &a, &b, &c, &x);
		n = 1 / (sqrt(a*pow(x,2)+b*x+c));
	} else if (vi == 4) {
		printf("Введите числа: X \n");
		scanf("%f", &x);
		n = ((sqrt(x + 1))+(sqrt(x - 1)))/(2*sqrt(x));
	} else if (vi == 5) {
		printf("Введите числа: X \n");
		scanf("%f", &x);
		n = abs(x)+abs(x + 1);
	} else if (vi == 6) {
		printf("Введите числа: X \n");
		scanf("%f", &x);
		n = abs(1 - abs(x));
	}
	printf("Ответ: %.2f\n",n);

	float d, h;

	int r = 6350;

	printf("Введите: h \n");
	scanf("%f", &h);

	d = sqrt(h*(2*r+h));

	printf("Ответ: %.2f\n", d);
	

	float a,b,v,s, d1 = 1.414213, d2 = 1.732051;

	printf("Введите длину ребра ");
	scanf("%f", &a);

	b = a * a * a;

	v = (b*d1)/3;

	s = 2*pow(a,2)*d2;
	
	printf(" Объем Октаэдра: %.2f \n Площадь поверхности Октаэдра: %.2f \n",v,s); */



	system("pause");
	return 0;
}

