#include "stdio.h"
#include "stdbool.h"
#include <locale.h>

_Bool isInArea(double x, double y);
 
double f(double x);
 
int main()
{
char *locale = setlocale(LC_ALL, "");
  printf("1. ������� 1\n2. ������� 2\n");
 
  switch (_getch())
  {
    case '1':
      printf("������� 1\n������� x � y: ");
      double x, y;
      scanf("%lf %lf", &x, &y);
 
      _Bool result = isInArea(x, y);
 
      if (result == 1)
        printf("����������� �������\n");
      else
        printf("�� ����������� �������\n");
 
      break;
    case '2':
      printf("������� 2\n������� x: ");
      double x1;
      scanf("%lf", &x1);
 
      double result1 = f(x1);
      printf("f(%lf) = %lf\n", x1, result1);
      break;
    default:
      printf("��������� ����");
      break;
  }
 
  return 0;
}