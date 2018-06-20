#define MAXSIZE 10
#define TRUE 1
#define FALSE 0

typedef struct {
	int r[MAXSIZE+1];
	int length;
}SqList;

void Swap (SqList *L, int i, int j);

void BubbleSort (SqList *L);

void InitDown (SqList *L);
void InitUp (SqList *L);
void InitRandom (SqList *L);

void Print (SqList L);

extern int cnt;
