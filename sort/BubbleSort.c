#include "Sort.h"
#include <stdio.h>

void BubbleSort (SqList *L)
{
	int i, j;
	int flag = TRUE;

	for (i = 0; i < L->length && flag; i++)
	{
		flag = FALSE;

		for (j = L->length - 1; j >= i; j--)
		{
			if (L->r[j] < L->r[j+1])
			{
				Swap (L, j, j+1);
				flag = TRUE;
			}
		}
		cnt++;
	}
	printf ("Compare cnt = %d\n", cnt);
}
