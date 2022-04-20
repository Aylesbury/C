#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include <cstdlib>
/*
#include <string.h> 
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>
*/
using namespace std;

int Catalan(int n);
int fibonacci(int n);

int main (void){
	setlocale(0,"");

	int vibor, input, a;
	printf("1.Последовательность Каталана\n2.Последовательность Фибоначчи\nВведите номер операции: ");
	scanf("%d", &vibor);
	switch(vibor){
	case 1 : {
				printf("Введите число (Максимальное число 18): ");
				scanf("%d", &input);
				if(input <= 0){
					printf("Ошибка последовательности чисел\n");
				} else {
					input --;
					printf("Ответ: %d\n", Catalan(input));
				}
			 }
		break;
	case 2 : {
				printf("Введите число (Максимальное число 46):");
				scanf("%d", &input);
				if(input <= 0){
					printf("Ошибка последовательности чисел\n");
				} else {
					printf("Ответ: %d\n", fibonacci(input));
				}
			 }
		break;
	default : {
				printf("Не верный номер операции\n");
			  }
	}
	system("pause");
	return 0;
}

int Catalan(int n){
	int i, sum;
	if(n <= 0) {
		return 1;
	}
	sum = 0;
	for(i = 0; i < n; i++){
		sum += Catalan(i)*Catalan((n-1) - i);
	}
	return sum;
}

int fibonacci(int n){
	int a = 1, b = 1, c;
	if(n <= 0){
		printf("Ошибка последовательности чисел\n");
	}
	if (n == 1 || n == 2) return 1;
	for (int i = 3; i <= n; i++){
      c = a + b;
      a = b; 
	  b = c; 
    }
	return b;
	//return fibonacci(n - 1) + fibonacci(n - 2);
}
