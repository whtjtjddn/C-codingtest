#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char chess[9][8];
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%s", chess[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				if (chess[i][j] == 'F')
				{
					cnt++;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}