#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include <cstdlib>
#include <math.h>

using namespace std;

int main (void){
	setlocale(0,"");

	double a, b, c;
	printf("Введите значение А: ");
	scanf("%lf", &a);
	printf("Введите значение B: ");
	scanf("%lf", &b);
	try {
		if(b == 0) 
			throw 1;
		if(b < 0) 
			throw 2;
		if(a < 0) 
			throw 2;
		c = sqrt(a) / sqrt(b);
		printf("C = %.2f\n", c);
	} catch(int e) {
		if(e == 1){
			printf("Деление на 0 невозможно\n");
		}
		if(e == 2){
			printf("Отрицательный корень\n");
		}
	}

	system("pause");
	return 0;
}
