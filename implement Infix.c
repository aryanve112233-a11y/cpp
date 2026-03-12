#include <stdio.h>
#include <ctype.h>

char stack[MAX];
int top = -1;
 int isempty90{
    return top == -1;
 }
 void push(char x/) {
    stack [++top] =x;
 }
 char pop() {
    if (isempty()) retuen -1;
    return stack[top--];
 }
 char peek() {
    return stack[top];
 }
 int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
 }
    void infixToPostfix(char* infix, char* postfix) {
        int i = 0, j = 0;
        char x;
    
        while (infix[i]) {
            if (isalnum(infix[i])) {
                postfix[j++] = infix[i];
            }
            else if (infix[i] == '(') {
                push(infix[i]);
            }
            else if (infix[i] == ')') {
                while (!isempty() && peek() != '(') {
                    postfix[j++] = pop();
                }
                pop(); // Pop '('
            }
            else {
                while (!isempty() && precedence(peek()) >= precedence(infix[i])) {
                    postfix[j++] = pop();
                }
                push(infix[i]);
            }
            i++;
        }
    
        while (!isempty()) {
            postfix[j++] = pop();
        }
        postfix[j] = '\0';
    }
    int main() {
        char infix[MAX], postfix[MAX];
    
        printf("Enter infix expression: ");
        scanf("%s", infix);
    
        infixToPostfix(infix, postfix);
    
        printf("Postfix expression: %s\n", postfix);
    
        return 0;
    }