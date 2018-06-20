#include <stdio.h>

#include "Sort.h"

void Swap (SqList *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i]  = L->r[j];
	L->r[j]  = temp;
}
