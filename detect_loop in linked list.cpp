#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data=d;
        next=NULL;
    }

};
void insert_at_head(Node *&head,int data){
    Node *n=new Node(data);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=n;
    n->next=head;
    head=n;
}
//detect loop in linked list 
//Time->O(N) , space-> O(1)
bool detect_loop(Node *head){
    if(!head){
        return false;
    }

    Node *low=head;
    Node *high=head;
    

    while(high!=NULL and high->next!=NULL){
        low=low->next;
        high=high->next->next;

        if(low==high){
            return true;
        }
    }
    return false;
}

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main() {
    Node *head=NULL;
    insert_at_head(head,5);
    insert_at_head(head,4);
    insert_at_head(head,3);
    insert_at_head(head,2);
    insert_at_head(head,1);

    print(head);
    cout<<endl;

    cout<<detect_loop(head);
    return 0;
}
