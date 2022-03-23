#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h> 
#include <clocale>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

void double_sys(int num)
{
  int count = 1;
  int copy_num = num;
  while (copy_num != 1)
  {
    count++;
    copy_num /= 2;
  }
  int *arr = new int[count];
  for (int i = (count - 1); i > 0; i--)
  {
    arr[i] = num % 2;
    num /= 2;
  }
  arr[0] = (int)(num);
  for (int i = 0; i < count; i++)
	printf("%c",arr[i]);
	printf("\n");
  delete[] arr;
}

void eight_sys(int num)
{
  int count = 1;
  int copy_num = num;
  while (copy_num > 7)
  {
    count++;
    copy_num /= 8;
  }
  int *arr = new int[count];
  for (int i = (count - 1); i > 0; i--)
  {
    arr[i] = num % 8;
    num /= 8;
  }
  arr[0] = (int)(num);
  for (int i = 0; i < count; i++)
	printf("%d %s.", i, arr[i]);
	printf("\n");
  delete[] arr;
}

void six_sys(int num)
{
  int count = 1;
  int copy_num = num;
  while (copy_num > 7)
  {
    count++;
    copy_num /= 16;
  }
  int *arr = new int[count];
  for (int i = (count - 1); i > 0; i--)
  {
    arr[i] = num % 16;
    num /= 8;
  }
  arr[0] = (int)(num);
  for (int i = 0; i < count; i++)
    printf("%c",arr[i]);
	printf("\n");
  delete[] arr;
}


int main (void){ 
	setlocale(0,"");
	
	int num;

	printf("=====================================================\n");
	printf("| Перевод числа из десятичной системы счисления(СС) |\n| в двоичную, восьмеричную, шестнадцатиричную       |");
	printf("\n=====================================================\n");

	printf("Введите число: "); 
	scanf("%d", &num);
    
	printf("В 2-ой: ");
	double_sys(num);
	printf("В 8-ой: ");
	eight_sys(num);
	printf("В 16-ой: ");
	six_sys(num);
  system("pause");
	return 0;
}


