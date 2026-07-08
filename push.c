#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int main() {
    int value;

    printf("Enter the value to push: ");
    scanf("%d", &value);

    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack.\n", value);
    }

    return 0;
}
