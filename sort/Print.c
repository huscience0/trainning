#include <stdio.h>
#include "Sort.h"

void Print (SqList L)
{
	int i = 0;

	for (i = 0; i < MAXSIZE; i++)
	{
		printf ("%d ", L.r[i]);
	}
	printf ("\n");
}
