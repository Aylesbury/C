#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include <cstdlib.>
#include <ctype.h>
#include <string.h>

using namespace std;

int main (void){
	setlocale(0,"");

	char buffer[255];
	int vibor, counter = 0, count = -1, lenght;
	printf("Введите строку(максимально 255 символов): ");
	fgets(buffer,255,stdin);
	printf("1. Подсчет количество гласных букв.\n2. Подсчет количество согласных букв\nВыберите номер операции: ");
	scanf_s("%d", &vibor);
	lenght = strlen(buffer);

	for(int i = 0; i < lenght; i++){
		if (buffer[i] == 'A' || 
			buffer[i] == 'E' || 
			buffer[i] == 'I' || 
			buffer[i] == 'O' || 
			buffer[i] == 'U' || 
			buffer[i] == 'Y' || 
			buffer[i] == 'a' || 
			buffer[i] == 'e' || 
			buffer[i] == 'i' || 
			buffer[i] == 'o' || 
			buffer[i] == 'u' || 
			buffer[i] == 'y'){
				counter++;
			} else {
				count++;
			}		
	}

	switch(vibor) {
	case 1 : {
			printf("Количество гласных в слове: %d\n", counter);
			}
	break;
	case 2 : {
			printf("Количество согласных в слове: %d\n",count);
			 }
	break;
	default : {
			  printf("Не верный номер операции.\n");
			  }
	}

	system("pause");
	return 0;
}
