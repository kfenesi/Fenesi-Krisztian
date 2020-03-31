#include<stdio.h>

int isFull(int *CAPACITY, int *top) {
	if (*top == *CAPACITY - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

int isEmpty(int *CAPACITY, int *top) {
	if (*top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

void push(int *n, int *top, int *stack) {
		(*top)++;
		stack[*top] = *n;
		printf("%d pushed. \n", *n);
}

int pop(int *top, int *stack) {
	return (*top)--;
}

void peek(int *top, int *stack) {
	printf("Peek element %d \n", stack[*top]);
}

int main() {
	int *ch, *n, *i, *top, *CAPACITY, *stack;
	ch = (int*)malloc(sizeof(int));
	n = (int*)malloc(sizeof(int));
	i = (int*)malloc(sizeof(int));
	top = (int*)malloc(sizeof(int));
	stack = (int*)malloc(sizeof(int));
	CAPACITY = (int*)malloc(sizeof(int));;
	*top = -1;
	*CAPACITY = 7;

	while (1) {
		printf("1. Verify if the stack is full \n");
		printf("2. Verify if the stack is empty \n");
		printf("3. Push \n");
		printf("4. Pop \n");
		printf("5. Peek \n");
		printf("6. Print all the elements of the stack \n");
		printf("0. Quit \n");

		printf("Enter your choice\n");
		scanf("%d", ch);
	
		switch (*ch) {
		case 1: if (isFull(CAPACITY, top)) {
			printf("Stack is full\n");
		}
				else {
			printf("Stack is not full\n");
		}
			break;
		case 2: if (isEmpty(CAPACITY, top)) {
			printf("Stack is empty\n");
		}
				else {
			printf("Stack is not empty\n");
		}
			break;
		case 3: if (isFull(CAPACITY, top)) {
			printf("Stack is full\n");
		}
				else {
				printf("Enter element tu push: \n");
				scanf("%d", n);
				push(n, top, stack);
		}
			break;
		case 4: if (isEmpty(CAPACITY, top)) {
			printf("Stack is empty\n");
		}
				else {
			*n = pop(top, stack);
		}
			break;
		case 5:if (isEmpty(CAPACITY, top)) {
			printf("Stack is empty\n");
		}
			   else {
			peek(top, stack);
		}
			break;
		case 6: for (*i = 0; *i <= *top; (*i)++) {
			printf("%d ", stack[*i]);
		} 
				printf("\n");
				break;
		case 0: exit(0);
			break;
		default: printf("Invalid input\n");
			break;
		}
	}
	system("pause");
	return 0;
}