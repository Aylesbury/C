#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <limits.h>
/*#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>
*/
using namespace std;

int StrToInt(const char* str){
	char s[20];
	int t, i;
	long res = 0;
	int len = strlen(str);

	try{
		t = 1;
		if(str[0] == '-')
			t = -1;
		i = len - 1;
		while(i >= 0) {
			if(str[i] == '-'){
				if(i == 0) break;
				else throw "Недопустимые символы";
			}
			if(str[i] < '0') throw "Плохой символ";
			if(str[i] > '9') throw "Плохой символ";

			res = res + (str[i] - '0') * t;

			t *= 10;
			i--;
		}
		if(res > INT_MAX) throw "Выход за предел";
		if(res < INT_MIN) throw "Выход за предел";
		return res;
	} catch(const char* e){
		printf("%c", e);
		return 0;
	}
}

int main(void){
	setlocale(0,"");

	int d,a;

	d = StrToInt("45454");
	a = d *5;
	printf("%d\n", d);
	printf("%d\n", a);

	system("pause");

	return 0;
}



