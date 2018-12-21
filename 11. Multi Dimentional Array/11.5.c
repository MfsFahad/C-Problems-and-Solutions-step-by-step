#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a_row, a_col, b_row, b_col;

	int i, j, k, sum;

	scanf("%d %d", &a_row, &a_col);
	scanf("%d %d", &b_row, &b_col);

	int a[a_row][a_col], b[b_row][b_col], c[a_row][b_col];


	for (i = 0; i < a_row; ++i)
	{
		for (j = 0; j < a_col; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < b_row; ++i)
	{
		for (j = 0; j < b_col; ++j)
		{
			scanf("%d", &b[i][j]);
		}
	}



	// Multipication

	for (i = 0; i < a_row; ++i)
	{
		for (j = 0; j < b_col; ++j)
		{
			c[i][j] = 0;

			for (k = 0; k < b_row; ++k)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}


	

	// Display

	for (i = 0; i < a_row; ++i)
	{
		for (j = 0; j < b_col; ++j)
		{
			printf("%d ", c[i][j]);
		}

		printf("\n");
	}

	return 0;
}