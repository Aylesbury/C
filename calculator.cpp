// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <clocale>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <ctype.h>

using namespace std;
	
int main (void){
	setlocale(0,"");

	int vibor;
	float a, b, answer;
	printf("Введите первое число: ");
	scanf_s("%f", &a);

	printf("Введите второе число: ");
	scanf_s("%f", &b);

	printf("1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n");
	printf("Выберите номер операции: ");
	scanf_s("%d", &vibor);

	switch(vibor){
	case 1 : {
			 answer = a + b;
			 printf("Ответ: %.0f\n", answer);
			 }
			 break;
	case 2 : {
			 answer = a - b;
			 printf("Ответ: %.0f\n", answer);
			 }
			 break;
	case 3 : {
			 answer = a * b;
			 printf("Ответ: %.0f\n", answer);
			 }
			 break;
	case 4 : {
		if(b == 0){
			printf("На ноль делить нельзя\n");
		} else{
			answer = a / b;
			printf("Ответ: %.2f\n", answer);
		}
			 }
			 break;
	default : {
			  printf("Номер операции не верный");
			  }
	}
	system("pause");
	return 0;
}
