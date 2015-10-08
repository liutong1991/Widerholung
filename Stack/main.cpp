#include <iostream>

using namespace std;

typedef struct
{
    int *base;
    int *top;
    int size;
}Stack;

void InitStack(Stack &s);
int main()
{
    Stack qstack;

    return 0;
}

void InitStack(Stack &s)
{
    s.base=(int *)malloc(100*sizeof(int));
    s.top=s.base;
    s.size=100;
}

