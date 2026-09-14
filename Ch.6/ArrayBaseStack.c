#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack * pstack)
{
    pstack->topIndex = -1;
}

int SIsEmpty(Stack * pstack)
{
    if(pstack->topIndex == -1)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack * pstack, Data data)
{
    pstack->topIndex++;
    pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack * pstack)
{
    if(pstack->topIndex == -1)
    {
        printf("Stack Memory Error!");
        exit(-1);
    }
    else
    {
        Data rData = pstack->stackArr[pstack->topIndex];
        pstack->topIndex--;
        return rData;
    }
}

Data SPeek(Stack * pstack)
{
    if(pstack->topIndex == -1)
    {
        printf("Stack Memory Error!");
        exit(-1);
    }
    else
    {
        return pstack->stackArr[pstack->topIndex];
    }
}