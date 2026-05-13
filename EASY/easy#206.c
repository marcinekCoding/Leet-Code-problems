#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

// 1->2->3
// 3->2->1
struct ListNode *reverseList(struct ListNode *head)
{
    if(head==NULL) return NULL;
    // recursive method 
    struct ListNode *curr = head;
    struct ListNode *prev = NULL;

    while (curr->next != NULL)
    { 0
źcvghjsda` bn        prev = curr;
        curr = curr->next;
    }
    if (curr == head)
    {
        return curr;
    }
    prev->next = NULL;

    curr->next = reverseList(head);
    return curr;
}

void print_list(struct ListNode *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->val);
        head = head->next;
    }
}
int main()
{
    struct ListNode *epstein_list = malloc(sizeof(struct ListNode));
    // struct ListNode *a2 = malloc(sizeof(struct ListNode));
    // struct ListNode *a3 = malloc(sizeof(struct ListNode));
    epstein_list->val = 1;
    // a2->val = 2;
    // a3->val = 67;

    epstein_list->next = NULL;
    // a2->next = a3;
    // a3->next = NULL;

    print_list(epstein_list);
    struct ListNode *nowa = reverseList(epstein_list);
    print_list(nowa);
    return 0;
}