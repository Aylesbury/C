#define _CRT_SECURE_NO_WARNINGS
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
	int vibor, i, punct, lower, upper;
	char buffer[255];
	printf("Введите строку (максимальное количество символов 255): \n");
	fgets(buffer, 255, stdin);
	printf("1. Подсчет знаков припинания\n2. Подсчет заглавных/прописных букв\n");
	printf("Введите номер операции: ");
	scanf("%d", &vibor);

	switch(vibor){
	case 1 : {
		
		for(i = 0, punct = 0; i < strlen(buffer); i++){
		if(ispunct(buffer[i]))
			punct++;	
		}
		printf("Количество символов: %d\n", punct); 
	}
	break;
	case 2 : {
		for(i = 0, lower = 0, upper = 0; i < strlen(buffer); i++){
		if(isupper(buffer[i])){
			upper++;
		}
		if(islower(buffer[i])){
			lower++;
		}	
		}
		printf("Количество заглавных букв: %d\nКоличество прописных букв: %d\n", upper, lower);
	}
	break;
	default : {
		printf("Не верный номер операции\n");
		}
	}
	system("pause");
	return 0;
}
