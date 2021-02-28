#include "stdio.h"
#include "stdbool.h"
#include <locale.h>

_Bool isInArea(double x, double y);
 
double f(double x);
 
int main()
{
char *locale = setlocale(LC_ALL, "");
  printf("1. Задание 1\n2. Задание 2\n");
 
  switch (_getch())
  {
    case '1':
      printf("Задание 1\nВведите x и y: ");
      double x, y;
      scanf("%lf %lf", &x, &y);
 
      _Bool result = isInArea(x, y);
 
      if (result == 1)
        printf("Принадлежит область\n");
      else
        printf("Не принадлежит области\n");
 
      break;
    case '2':
      printf("Задание 2\nВведите x: ");
      double x1;
      scanf("%lf", &x1);
 
      double result1 = f(x1);
      printf("f(%lf) = %lf\n", x1, result1);
      break;
    default:
      printf("Невверный ввод");
      break;
  }
 
  return 0;
}