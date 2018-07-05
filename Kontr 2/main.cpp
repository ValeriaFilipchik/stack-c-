#include <iostream>
using namespace std;

struct stack {
	int info;
	stack* next;
};

void push(stack*&st, int a)
{
	stack* p = new stack;
	p->info = a;
	p->next = st;
	st = p;
}

int pop(stack*&st)
{
	int t = st->info;
	stack *p = st;
	st = st->next;
	delete p;
	cout << t << ends;
	return t;
}

void main()
{
	setlocale (0,"");
	stack *p = NULL;
	int A[5] = { 0,4,1,6,2 };
	for (int i = 0; i < 5; i++)
	{
		push(p, A[i]);
	}
	int max;
	max = A[0];
	for (int i = 0; i < 5; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	cout << "Максимальный элемент стека = " << max << endl;
	push(p, max);
	for (int i = 0; i < 6; i++)
	{
		pop(p);
	}
}
