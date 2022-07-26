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