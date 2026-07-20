#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Function to push a character onto the stack
void push(char ch) {
    if (top == MAX - 1)
        return;
    stack[++top] = ch;
}

// Function to pop a character from the stack
char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

int main() {
    char str[MAX];
    int i, len;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Push all characters onto the stack
    for (i = 0; i < len; i++) {
        push(str[i]);
    }

    // Compare original string with popped characters
    for (i = 0; i < len; i++) {
        ch = pop();
        if (str[i] != ch) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }

    printf("The string is a palindrome.\n");

    return 0;
}
