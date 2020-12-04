#include<stdio.h>
#include<malloc.h>

struct ll_node
{
    int value;
    struct ll_node* next;
};

void prepend(struct ll_node** lst, int value)
{
    struct ll_node* nll_node = (struct ll_node*) malloc(sizeof(struct ll_node));
    nll_node->value = value;
    nll_node->next = *lst;
    *lst = nll_node;
}

void free_ll(struct ll_node** lst)
{
    struct ll_node* cur = *lst;
    struct ll_node* next;
    while (cur != NULL)
    {
        next = cur->next;
        free(cur);
        cur = next;
    }
    *lst = NULL;
}

int main()
{
    struct ll_node** lst;
    struct ll_node* node = (struct ll_node*) malloc(sizeof(struct ll_node));
    node->value = 1;
    node->next = NULL;
    lst = &node;
    prepend(lst, 2);
    
    struct ll_node* head = *lst;
    while (head != NULL)
    {
        printf("%d\n", head->value);
        head = head->next;
    }

    free_ll(lst);
    printf("%d\n", *lst != *lst);

    return 0;
}