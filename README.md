# 8.2.7_dvumer_massiv_i_obychniy_massiv

Столбцы
Для заданной матрицы посчитать сумму элементов каждого столбца.

Входные данные:
Два натуральных числа 
N
N и 
M
M. Далее с новой строки 
N
N строк по 
M
M целых чисел в каждой. 
N
N и 
M
M не превышают десяти.

Выходные данные: 
M
M целых чисел, записанных через пробел. Первой вывести сумму последнего столбца, второй предпоследнего и т.д.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int m;
  scanf("%d %d", &n, &m) ;
  int a[n][m];
  int b[m];
  int i,j,s=0;

for (int i=0; i<n; i++)
{
  for (int j=0; j<m; j++)
  {
    scanf("%d", &a[i][j]);
    b[j] = 0;
  }
}


for (int i = 0; i < n; i++){
  for (int j = 0; j < m; j++){
    b[j] = b[j] + a[i][j];
  }
}
for (int j = m - 1; j >= 0; j--)
  printf ("%d ",b[j]);

return 0;
}
