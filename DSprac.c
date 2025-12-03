#include <stdio.h>
#include <stdlib.h>

void push(int stack[], int *top, int MAX, int value) {
    if (*top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        (*top)++;
        stack[*top] = value;
        printf("%d pushed.\n", value);
    }
}

void pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack Underflow!\n");
        return;
    }

    
    if (stack[*top] == 10) {
        int count = 0;     

        for (int i = *top; i >= 0; i--) {
            if (stack[i] == 10)
                count++;
            else
                break;
        }

        if (count < 5) {
            printf("Cannot pop 10! Only %d consecutive 10s.\n", count);
            return;
        }
    }

    printf("%d popped.\n", stack[*top]);
    (*top)--;
}

void display(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int MAX, choice, value;

    printf("Enter size of stack: ");
    scanf("%d", &MAX);

    int stack[MAX];
    int top = -1;

    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(stack, &top, MAX, value);
                break;

            case 2:
                pop(stack, &top);
                break;

            case 3:
                display(stack, top);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}