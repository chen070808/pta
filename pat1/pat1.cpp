// pat1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
using namespace std;
#define ERROR 0

typedef struct LNode
{
	int data;
	struct LNode* next;
} LNode, * LinkList;

void InitList_L(LinkList& L)
{
	L = new LNode;
	L->next = NULL;
}

void input(LinkList& L, int n)
{
	int i = 0;
	LNode* p, * r;
	r = L;
	while (i < n) {
		p = new LNode;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
		i++;
	}
}

void output(LinkList L)
{
	int i = 0;
	LNode* p;
	p = L->next;
	while (p) {
		if (i)
			cout << ",";
		cout << p->data;
		p = p->next;
		i = 1;
	}
}

void MergeList_L(LinkList& LA, LinkList& LB, LinkList& LC)
{
	LinkList pa, pb, pc;
	pa = LA->next;
	pb = LB->next;
	LC = LA;
	pc = LC;
	while (pa&&pb)
	{
		if (pa->data <= pb->data)
		{
			pc->next = pa;
			pc = pc->next;
			pa = pa->next;
		}
		else {
			pc->next = pb;
			pc = pc->next;
			pb = pb->next;
		}
	}
	pc->next = pa ? pa : pb;
	delete LB;
}
/*
int main() {
	LinkList La, Lb, Lc;
	int num_a, num_b;
	cin >> num_a >> num_b;
	InitList_L(La);
	input(La, num_a);
	InitList_L(Lb);
	input(Lb, num_b);
	InitList_L(Lc);
	MergeList_L(La, Lb, Lc);
	output(Lc);
	return 0;
}
*/
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
