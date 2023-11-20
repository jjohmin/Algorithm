#include <stdio.h>

struct stack {
	int top;
	int stk[10001];
};

void init(struct stack* p) {
	p->top = -1;
}

void push(struct stack* p,int value) {
	p->stk[++p->top] = value;
}

int pop(struct stack* p) {
	if (empty(p)) return -1;
	return p->stk[p->top--];
}

int peek(struct stack* p) {
	if (empty(p)) return -1;
	return p->stk[p->top];
}

int empty(struct stack* p) {
	return p->top == -1;
}

int main()
{
	struct stack s;
	init(&s);
	char arr[100];
	int n,num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		if (!(strcmp(arr, "push"))) {
			scanf("%d", &num);
			push(&s, num);
		}
		else if (!(strcmp(arr, "pop"))) printf("%d\n", pop(&s));
		else if (!(strcmp(arr, "size"))) printf("%d\n", s.top+1);
		else if (!(strcmp(arr, "empty"))) printf("%d\n", empty(&s));
		else if (!(strcmp(arr, "top"))) printf("%d\n", peek(&s));
	}
	return 0;
}