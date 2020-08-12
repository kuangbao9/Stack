#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE		100
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int top = -1;
	int capacity = MAXSIZE;
}Stack;

Stack stack;

void stack_push(ElemType data)
{
	stack.data[++stack.top] = data;
}

ElemType stack_pop()
{
	return stack.data[stack.top--];
}

int stack_capacity()
{
	return stack.capacity;
}

bool stack_empty()
{
	return (stack.top == -1);
}

void stack_clear()
{
	while (stack.top != -1)
	{
		stack_pop();
	}
}

int stack_size()
{
	return stack.top + 1;
}

void stack_tranverse()
{
	int size = stack.top;
	while (size >= 0)
	{
		printf("%d ", stack.data[size--]);
	}
}

int main()
{
	stack_push(1);
	stack_push(2);
	stack_push(3);
	stack_push(4);
	stack_push(5);

	printf("遍历栈: ");
	stack_tranverse();
	printf("\n");

	printf("栈大小: %d", stack_size());
	printf("\n");

	printf("出栈: ");
	printf("%d ", stack_pop());
	printf("%d ", stack_pop());
	printf("\n");

	printf("栈大小: %d", stack_size());
	printf("\n");

	stack_clear();

	printf("栈大小: %d", stack_size());
	printf("\n");
	system("pause");
	return 0;
}