#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <ctype.h>

using namespace std;


	
int main (void){
	setlocale(0,"");
	/*
	// String.h
	char m1[] = "Первая строка";
	char m2[] = "Вторая строка";
	char m3[] = " ";
	strcpy(m3, m1);
	puts("Результат strcpy(m3, m1)");
	puts(m3);
	strcat(m3, m2);
	puts("Результат strcat(m3, m2)");
	puts(m3);
	puts("Количество символов в строке m1 равно  strlen(m1) : ");
	printf("%d\n", strlen(m1));
	*/
	// ---------------------------------------------------
	/*
	// ctype.h
	char a[] = " ";
	printf("Введите символ: ");
	fgets(a, 100, stdin);

	if (isalpha(a[0])) {
		puts("Это буква\n");
	} else if (isdigit(a[0])) {
		puts("Это число\n");
	} else if (isgraph(a[0])) {
		puts("Это графический символ\n");
	} else if (islower(a[0])) {
		puts("Это нижний регистр\n");
	} else if (ispunct(a[0])) {
		puts("Это символ пунктуации\n");
	} else if (isspace(a[0])) {
		puts("Это пробел\n");
	} else if (isupper(a[0])) {
		puts("Это символ верхнего регистра\n");
	} else if (isxdigit(a[0])) {
		puts("Это шестнадцатеричное число\n");
	}
	*/
	// ---------------------------------------------------

	char a[] = " ";
	char b[] = " ";
	char ring;
	printf("Введите строку: ");
	fgets(a, 100, stdin);
	printf("Введите символ для поиска в строке: ");
	fgets(b, 100, stdin);
	ring = strchr(a, b); 


	system("pause");
	return 0;
}
