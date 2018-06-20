#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Sort.h"

void InitDown (SqList *L)
{
	int i;

	for (i = 0; i < MAXSIZE; i++)
	{
		L->r[i] = MAXSIZE - i - 1;
		L->length++;
	}
	printf ("len = %d\n", L->length);
}

void InitUp (SqList *L)
{
	int i;

	for (i = 0; i < MAXSIZE; i++)
	{
		L->r[i] = i;
		L->length++;
	}
	printf ("len = %d\n", L->length);
}

void InitRandom (SqList *L)
{
	int i;

	srand (time(0));

	for (i = 0; i < MAXSIZE; i++)
	{
		L->r[i] = rand()%100 + 1;
		L->length++;
	}
	printf ("len = %d\n", L->length);
}
