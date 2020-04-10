#include<iostream>
using namespace std;
#define MaxSize 10001
typedef struct
{
	int* data;
	int front, rear;	//队首和队尾指针
	int size;
}SqQueue;

void InitQueue(SqQueue& qu)
{
	qu.front = qu.rear = 0;
	qu.size = 0;		//设置当前元素个数

	qu.data = (int*)malloc(sizeof(int) * MaxSize);
	if (qu.data == NULL)
	{
		return;
	}
}

int pop(SqQueue& qu)
{
	if (qu.size == 0)  //队空
	{
		return -1;
	}
	int val = qu.data[qu.front];
	qu.front = (qu.front + 1) % MaxSize;
	qu.size--;
	return val;
}
void push(SqQueue& qu, int var)
{
	if (qu.size == MaxSize) //队满
		return;
	qu.data[qu.rear] = var;
	qu.rear = (qu.rear + 1) % MaxSize;
	qu.size += 1;
}

/*
int main() {
	SqQueue a, b;
	InitQueue(a);
	InitQueue(b);

	int n, m, j;
	cin >> n;
	while (n--) {
		cin >> m;
		if (m % 2 == 0) {
			push(b, m);
		}
		else {
			push(a, m);
		}
	}

	int i = -1;
	while (a.size && b.size) {
		if (i == -1) {
			cout << pop(a);
			cout << ' ';
			cout << pop(a);
			i++;
		}
		if (!i) {
			cout << ' ';
			cout << pop(b);
			i++;
		}
		else {
			cout << ' ';
			cout << pop(a);
			cout << ' ';
			cout << pop(a);
			i--;
		}
	}
	while (a.size) {
		if (i == -1)
		{
			cout << pop(a);
			i++;
		}
		else {
			cout << ' ';
			cout << pop(a);
		}
	}
	while (b.size) {
		if (i == -1)
		{
			cout << pop(b);
			i++;
		}
		else {
			cout << ' ';
			cout << pop(b);
		}
	}
	cout << endl;
	return 0;
}

*/