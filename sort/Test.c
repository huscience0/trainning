#include <stdio.h>
#include "Sort.h"

int cnt = 0;

int main (void)
{
#if 0
	cnt = 0;
	SqList L1 = {0};
	Print(L1);

	InitDown (&L1);
	Print(L1);

	BubbleSort (&L1);
	Print(L1);
#endif

#if 0
	cnt = 0;
	SqList L2 = {0};
	Print(L2);

	InitUp (&L2);
	Print(L2);

	BubbleSort (&L2);
	Print(L2);
#endif

#if 1
	cnt = 0;
	SqList L3 = {0};
	Print(L3);

	InitRandom (&L3);
	Print(L3);

	BubbleSort (&L3);
	Print(L3);
#endif
	return 0;
}
