#include <stdio.h>
void mov(int *x, int n, int m);
int main(void)
{
	int i, m, n;
	int a[80];

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	/*---------*/
	printf("After move: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

/*---------*/
