#ifndef __ARR_STACK_H__
#define __ARR_STACK_H__

#define TRUE        1
#define FALSE       0
#define LEN         100

typedef struct {
    int *items;
    int top;
    int capacity;
} Stack;

Stack* create(void);
int isEmpty(Stack* s);
int isFull(Stack* s);
void push(Stack* s, int item);
int pop(Stack* s);
int peek(Stack* s);
void destroy(Stack* s);

#endif