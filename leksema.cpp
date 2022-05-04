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
	int sizeBuffer = 255;
	int sizeCount = 3;
	int sizeWord = 2;
	char str[255] = " ";
	printf("Введите строку: ");
	fgets(str,sizeBuffer, stdin);
	int b = 0, c = 0, d = 0;

	for(int i = 0; i < sizeBuffer; i++){
		if(isalpha(str[i]) || ispunct(str[i]) || isdigit(str[i])){
			++c;
		} 
		if (isspace(str[i])) {
			if (c > sizeWord) {
				++b;
				c = 0;
			} else {
				c = 0;
			}
		}
	}
	printf("Количетсво слов в которых содержится %d знака: %d\n", sizeCount, b);
	system("pause");
	return 0;
}




