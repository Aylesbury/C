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

int main (void){
	setlocale(0,"");

	int input, output;

	printf("Введите число: ");
	scanf("%d", &input);
	output = Catalan(input);
	printf("Ответ: %d\n", output);

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
