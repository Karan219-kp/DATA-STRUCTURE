#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

int main() {

    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }

    return 0;
}
