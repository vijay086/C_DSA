#include <stdio.h> 
#include <stdlib.h> 
#define n 100 
void PUSH(int stack[], int *top, int x) { 
    if (*top == n - 1) { 
        printf("Stack is overflow\n"); 
        return; 
    } 
    (*top)++; 
    stack[*top] = x; 
    printf("Pushed element:%d\n",x); 
} 
int POP(int stack[], int *top) { 
    if (*top == -1) { 
        printf("Stack is underflow\n"); 
        exit(EXIT_FAILURE); 
    } 
    int popped_element = stack[*top]; 
    (*top)--; 
} 
return popped_element; 
int main() { 
int stack[n]; 
int top = -1; // Initialize top pointer to -1 
// Example usage: 
PUSH(stack, &top, 5); // Pushing 5 onto the stack 
PUSH(stack, &top, 10); // Pushing 10 onto the stack 
PUSH(stack, &top, 15); // Pushing 15 onto the stack 
printf("Popped element: %d\n", POP(stack, &top)); // Popping an 
element 
printf("Popped element: %d\n", POP(stack, &top)); // Popping an 
element 
return 0; 
}
