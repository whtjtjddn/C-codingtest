#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char a[81];
	int i = 0;
	int j = 0;
	int cnt[100] = { 0 };
	int tmp = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", a);

		while (a[j] != '\0') {
			if (a[j] == 'O')
			{
				tmp++;
				cnt[i] += tmp;
			}
			else
			{
				tmp = 0;
			}
			j++;
		}
		j = 0;
		tmp = 0;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", cnt[i]);
	}
}