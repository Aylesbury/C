#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <iostream>


using namespace std;

int main() {

	setlocale(LC_ALL, "");

	float x1, x2, x3, y1, y2, y3;
	float a, b;
	int s;

	printf("Введите координаты первой точки X1 Y1: ");
	scanf_s("%f %f", &x1, &y1);

	printf("Введите координаты второй точки X2 Y2: ");
	scanf_s("%f %f", &x2, &y2);

	printf("Введите координаты третей точки X3 Y3: ");
	scanf_s("%f %f", &x3, &y3);

	if (x1 == x2) {
		if (x1 == x3) { 
			printf("Данные точки лежат на одной прямой.\n"); 
		}
		else {
			printf("Данные точки не лежат на одной прямой.\n");
		}
	}
	else {
		a = (y1 - y2) / (x1 - x2);
		b = y1 - a * x1;
		if (a * x3 + b == y3) {
			printf("Данные точки лежат на одной прямой.\n");
		}
		else {
			printf("Данные точки не лежат на одной прямой.\n");
		}
	}
	system("pause");
	return 0;
}

