#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define Max 100

char stack[Max];
int top = -1;

void push(char data) {
    stack[++top] = data;
}

char pop() {
    if (top == -1) return '\0'; // Stack underflow
    return stack[top--];
}

int priority(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void infixToPrefix(char *infix, char *prefix) {
    char temp[Max];
    int i = 0, j = 0;

    // Step 1: Reverse the infix expression
    reverse(infix);

    // Step 2: Replace '(' with ')' and vice versa
    while (infix[i] != '\0') {
        if (infix[i] == '(') temp[j++] = ')';
        else if (infix[i] == ')') temp[j++] = '(';
        else temp[j++] = infix[i];
        i++;
    }
    temp[j] = '\0';

    // Step 3: Convert reversed infix to postfix
    i = 0, j = 0;
    while (temp[i] != '\0') {
        if (isalnum(temp[i])) { // Operand
            prefix[j++] = temp[i];
        } else if (temp[i] == '(') { // Opening parenthesis
            push(temp[i]);
        } else if (temp[i] == ')') { // Closing parenthesis
            while (stack[top] != '(') {
                prefix[j++] = pop();
            }
            pop(); // Remove '('
        } else { // Operator
            while (top != -1 && priority(stack[top]) >= priority(temp[i])) {
                prefix[j++] = pop();
            }
            push(temp[i]);
        }
        i++;
    }

    // Pop remaining operators
    while (top != -1) {
        prefix[j++] = pop();
    }
    prefix[j] = '\0';

    // Step 4: Reverse the postfix expression to get prefix
    reverse(prefix);
}

int main() {
    char infix[Max], prefix[Max];

    printf("Enter the infix expression: ");
    fgets(infix, Max, stdin);
    infix[strcspn(infix, "\n")] = '\0'; // Remove trailing newline

    infixToPrefix(infix, prefix);

    printf("The prefix expression is: %s\n", prefix);

    return 0;
}
