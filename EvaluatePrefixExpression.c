#include <stdio.h>
#include <ctype.h>
#include <string.h>

int stack[100];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char prefix[100];
    int i, a, b;

    printf("Enter Prefix Expression: ");
    scanf("%s", prefix);

    for (i = strlen(prefix) - 1; i >= 0; i--) {

        if (isdigit(prefix[i]))
            push(prefix[i] - '0');

        else {
            a = pop();
            b = pop();

            switch (prefix[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }

    printf("Result = %d\n", pop());

    return 0;
}
