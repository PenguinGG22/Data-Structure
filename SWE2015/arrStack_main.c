#include "arrStack.h"
#include <stdio.h>

int main(void)
{
    Stack *s = create();

    printf("Stack is empty: %d\n", isEmpty(s));

    push(s, 10);
    printf("Top element is %d\n", peek(s));

    push(s, 20);
    push(s, 30);

    int data = pop(s);
    
    printf("Popped element is %d\n", data);
    printf("Now, top element is %d\n", peek(s));

    destroy(s);
    return 0;
}