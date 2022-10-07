#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next=NULL;
       
    }
};
// detect loop using floyd's cycle algorithm
// this achieved by creating two ptr slow and fast where these two pointer point to same node loop is found
int detectLoop(node* &list)
{
    node *slow_p = list, *fast_p = list;
 
    while ((fast_p !=NULL)&& (fast_p->next!=NULL)) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            return 1;
        }
    }
    return 0;
}
void insert_node(node* head,int val)
{
    node* Node=new node(val);
    if(head==NULL)
    {
        head=Node;
        return;
    }
    node* temp=head;
     while(temp->next!=NULL)
     {
         temp=temp->next;

     }
    temp->next =Node;
}
int main()
{
    node* head=NULL;
    insert_node(head,10);
    insert_node(head,4);
    insert_node(head,15);
    insert_node(head,20);
    if(detectLoop(head)) cout<<"1";
    else cout<<"0";
    return 0;
}