// To check whether a given livked list contains any loops
#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head)
{
    ListNode *x1 = head; // moves in 1x speed
    ListNode *x2 = head; // moves in 2x speed

    while (x1 != NULL && x2 != NULL && x2->next != NULL)
    {
        x1 = x1->next;
        x2 = x2->next->next;
        if (x1 == x2)
            return true; // if the two pointers meet at a point, loop is confirmed
    }
    return false;
}

int main()
{
    ListNode *test = new ListNode(1);
    test->next = new ListNode(2);
    test->next->next = new ListNode(3);
    test->next->next = test->next;
    //test Object describes a LinkedList with a cycle
    cout<<hasCycle(test);
}