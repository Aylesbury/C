#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include <cmath>
#include <iostream>
#include <stdexcept> 
using namespace std;

float primer1(float,float, float, float);
float primer2(float);
float primer3(float,float, float, float);
float primer4(float);
float primer5(float);
float primer6(float);

int main (void){
	setlocale(0,"");

	float a = 0,b = 0,c = 0,d = 0,x =0, n =0;

	int vi;

	printf("Введите номер операции: ");
	scanf("%d", &vi);

	switch (vi) {
		case 1 :
			printf("Введите числа: A, B, C, D \n");
			scanf("%f %f %f %f", &a, &b, &c, &d);
			n = primer1(a, b,c,d);
			printf("Ответ: %.2f",n);
			break;
		case 2 :
			printf("Введите числа: X \n");
			scanf("%f", &x);
			n = primer2(x);
			printf("Ответ: %.2f",n);
			break;
		case 3 :
			printf("Введите числа: A,B,C,X \n");
			scanf("%f %f %f %f", &a, &b, &c, &x);
			n = primer3(a,b,c,x);
			if (n == 0) {
				printf("Деление на отрицательное число не возможно \n");
			} else {
			printf("Ответ: %.2f \n",n);
			}
			break;
		case 4 : 
			printf("Введите числа: X \n");
			scanf("%f", &x);
			n = primer4(x);
			printf("Ответ: %.2f",n);
			break;
		case 5 :
			printf("Введите числа: X \n");
			scanf("%f", &x);
			n = primer5(x);
			printf("Ответ: %.2f",n);
			break;
		case 6 : 
			printf("Введите числа: X \n");
			scanf("%f", &x);
			n = primer6(x);
			printf("Ответ: %.2f",n);
			break;
		default :
			printf("Номер операции не верный");
	}
	
	system("pause");
	return 0;
}


float primer1(float a, float b, float c, float d){
	float n = ((a*d)+(b*c))/(a*d);
	return n;
}

float primer2(float x){
	float n = sqrt(1 - pow(sin(x),2));
	return n;
}

float primer3(float a, float b, float c, float x){
	float a1 = (a*pow(x,2)+b*x+c);
	float a2 = sqrt(a1);
	if (a1 <= 0) {
		return 0;
	} else {
	return (1 / a2);
	}
}

float primer4(float x){
	float n = ((sqrt(x + 1))+(sqrt(x - 1)))/(2*sqrt(x));
	return n;
}

float primer5(float x) {
	float n = abs(x)+abs(x + 1);
	return n;
}

float primer6(float x){
	float n = abs(1 - abs(x));
	return n;
}

