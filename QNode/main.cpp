#include <iostream>

using namespace std;

typedef struct node
{
    int var;
    node *next;
}NODE;

int main()
{
    cout<<" Test the function of branch"<<endl;
    return 0;
}

NODE* InitList()
{
    NODE *L;
    L=(NODE*)malloc(sizeof(NODE));
    L->next=NULL;
    return L;
}

void DestroyList(NODE *L)
{
    NODE *temp=L;
    L=L->next;
    free(temp);
    while(L->next!=NULL)
    {
        temp=L;
        L=L->next;
        free(temp);
    }
    free(L);
}
