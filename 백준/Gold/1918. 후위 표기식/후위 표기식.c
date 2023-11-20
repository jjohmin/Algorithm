#include <stdio.h>

struct stack
{
	int top;
	char stk[100];
};

void init(struct stack *p) {
	p->top = -1;
}

void push(struct stack *p,char a) {
	p->stk[++p->top] = a;
}

char pop(struct stack *p) {
	return p->stk[p->top--];
}

char peek(struct stack* p) {
	return p->stk[p->top];
}

int rank(char a) {
	if (a == '(' || a == ')')
		return 0;
	if (a == '+' || a == '-')
		return 1;
	if (a == '*' || a == '/')
		return 2;
}

int empty(struct stack* p) {
	return p->top == -1;
}

void change(char* a) {
	struct stack s;
	int l = strlen(a);
	char ch;
	init(&s);
	for (int i = 0; i<l ; i++) {
		ch = a[i];
		if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
			while (empty(&s) == 0 && rank(peek(&s)) >= rank(ch))
				printf("%c", pop(&s));
			push(&s, ch);
		}
		else if (ch == '(')
			push(&s, ch);
		else if (ch == ')') {
			char c = pop(&s);
			while (c != '(') {
				printf("%c", c);
				c = pop(&s);
			}
		}
		else printf("%c", ch);
	}
	while (!(empty(&s)))
		printf("%c", pop(&s));
}

int main()
{
	char arr[100];
	scanf("%s",&arr);
	change(arr);
	return 0;
}