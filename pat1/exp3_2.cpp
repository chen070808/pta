#include<iostream>
using namespace std;
#define MaxSize 100001
typedef struct Node
{
	int Element;
	struct Node* Next;
} NODE, * PNODE;

//    定义队列结构体
typedef struct QNode
{
	PNODE Front, Rear;
} Queue, * PQueue;

void InitQueue(PQueue queue)
{
	queue->Front = queue->Rear = (PNODE)malloc(sizeof(NODE));
	if (queue->Front == NULL)
	{
		return;
	}
	queue->Front->Next = NULL;
}


int pop(PQueue queue)
{
	if (queue->Front == queue->Rear)
	{
		return false;
	}
	PNODE P = queue->Front->Next;
	int val = P->Element;
	queue->Front->Next = P->Next;
	if (queue->Rear == P)
		queue->Rear = queue->Front;
	free(P);
	return val;
}

int rear(PQueue queue)
{
	if (queue->Front == queue->Rear)  //队空
	{
		return -1;
	}
	return queue->Rear->Element;
}

void push(PQueue queue,int var)
{
	PNODE P = (PNODE)malloc(sizeof(NODE));
	if (P == NULL)
	{
		return;
	}
	P->Element = var;
	P->Next = NULL;
	queue->Rear->Next = P;
	queue->Rear = P;
}

int main()
{
	int n,i=0,num;
	Queue q[MaxSize];
	for (int i = 0; i < MaxSize; i++) {
		InitQueue(&q[i]);
	}
	i = 0;
	InitQueue(&q[i]);
	cin >> n;
	while (n--) {
		cin >> num;
		if(i==0|| rear(&q[i]) < num){
			InitQueue(&q[++i]);
			push(&q[i], num);
		}
		else {
			int l = 0,r=i;
			while (l<r)
			{
				int mid = l + (r - l) / 2;
				if (rear(&q[mid])> num)
					r = mid - 1;
				else l = mid + 1;

			}
			push(&q[l], num);
		}
	}
	cout << i << endl;
	}	