#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

int main() {
    int i;

    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }

    return 0;
}
