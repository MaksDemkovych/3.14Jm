#include "File for GIT.hpp"
#include <stdio.h>
#include <stdlib.h>
void matric(int A[][9],int s) {
int n;
for (int i = 0; i < s; ++i)
{
for (int j = 0; j < s; ++j)
{
n = (i + j + 1);
if (n > s)
{
n = 2 * s - (i + j + 1);
A[i][j] = j + (s - 1)*(s - 2) / 2 - n * (n - 1) / 2 + s * (s + 1) / 2;

}
else
{
A[i][j] = n - i + n * (n - 1) / 2;
}

printf("%3d", A[i][j]);
}
printf("\n");
}
}

int main()
{
const int s = 9;
int A[s][s];
printf("\n matrix:\n\n");
matric( A, s);
getchar();

return 0;
}

