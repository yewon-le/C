#include <stdio.h>
#include <stdlib.h>
#include <string.h>

simple_pointer state_list()
{
    simple_pointer node1,node2;
    node1=(simple_pointer) malloc(sizeof(struct simple_list));
    node2=(simple_pointer) malloc(sizeof(struct simple_list));

    strcpy(node1->state, "NY");
    node1->count=5;
    node1->next=node2;

    strcpy(node2->state,"FL");
    node2->count =10;
    node2->next =NULL;

    return node1;
}

typedef struct simple_list *simple_pointer;
struct simple_list{
    char state[3];
    int count;
    simple_pointer *next;
};

simple_pointer state_list();
void append(simple_pointer ptr, simple_pointer inode);
void print_list(simple_pointer ptr);

int main()

{
    simple_pointer ptr,inode;

    ptr = state_list();
    inode = (simple_pointer) malloc(sizeof(struct simple_list));
    strcpy(inode->state, "TX");
    inode->count =7;
    append(ptr, inode);
    print_list(ptr);
}

