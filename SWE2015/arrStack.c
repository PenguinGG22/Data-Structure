#include <stdio.h>
#include <stdlib.h>
#include "arrStack.h"

/*
procedure create():
 stack ← allocateStack()
 stack.items ← allocateArray()
 stack.top ← -1
Stack.capacity ← maxCapacity()
 return stack
end procedure
*/
Stack* create(void) {
    Stack *s = (Stack*)malloc(sizeof(Stack));

    s->items = (int*)malloc(sizeof(int) * LEN);
    s->top = -1;
    s->capacity = LEN;

    return s;
}

/*
procedure isEmpty(stack)
 if stack.top = -1 then
 return true
 else
 return false
 end if
end procedure
*/
int isEmpty(Stack* s) {
    if(s->top == -1)
        return TRUE;
    else
        return FALSE;
}

/*
procedure isFull(stack)
 if stack.top = stack.capacity - 1 then
 return true
 else
 return false
 end if
end procedure
*/
int isFull(Stack* s) {
    if(s->top == s->capacity - 1)
        return TRUE;
    else
        return FALSE;
}

/*
procedure push(stack, item)
 if isFull(stack) then
 print(“Cannot push. Stack is full.”)
 return error() ▹ failed
 else
 stack.top ← stack.top + 1
 stack.items[stack.top] ← item
 return ▹ stack is updated
 end if
end procedure
*/
void push(Stack* s, int item) {
    if(isFull(s)) {
        printf("Cannot push. Stack is full.\n");
        return;
    }
    else {
        s->top++;
        s->items[s->top] = item;
        return;
    }
}

/*
procedure pop(stack)
 if isEmpty(stack) then
 print (“Cannot pop. Stack is empty.”)
 return error() ▹ failed
 else
 data ← stack.items[stack.top]
 stack.top ← stack.top - 1
 return data ▹ stack is also updated
 end if
end procedure
*/
int pop(Stack* s) {
    if(isEmpty(s)) {
        printf("Cannot pop. Stack is full.\n");
        return -1;
    }
    else {
        int data = s->items[s->top];
        s->top--;
        return data;
    }
}

/*
procedure peek(stack)
 if isEmpty(stack) then
 print (“Cannot peek. Stack is empty”)
 return error() ▹ failed
 else
 return stack.items[stack.top]
 end if
end procedure
*/
int peek(Stack* s) {
    if(isEmpty(s)) {
        printf("Cannot peek. Stack is full.\n");
        return -1;
    }
    else {
        return s->items[s->top];
    }
}

/*
procedure destroy(stack)
 free(stack.items)
 free(stack)
end procedure
*/
void destroy(Stack* s) {
    free(s->items);
    free(s);
}