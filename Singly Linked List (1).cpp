#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        data=d;
        next=NULL;
    }
};
//insert_at_head
void Insert_at_head(Node *&head,int d){
    if(head==NULL){
        Node *n=new Node(d);
        return;
    }
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
    
}
//insert at tail
void insert_at_tail(Node *&head,int d){
    Node *n=new Node(d);
    if(head==NULL){
        head=n;
        return;

    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
//insert at specific position
void insert_at_position(Node *&head,int d,int pos){
    if(pos==1){
        Insert_at_head(head,d);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insert_at_tail(head,d);
        return;
    }
    Node *n=new Node(d);
    n->next=temp->next;
    temp->next=n;

}
//delete from head
void delete_from_head(Node *&head){
    if(head==NULL){
        return;

    }
    Node *temp=head->next;
    delete head;
    head=temp;
}
//delete from specific position
void delete_at_position(Node *&head,int pos){
    if(pos==1){
        delete_from_head(head);
        return;
    }
    int cnt=1;
    Node *curr=head;
    Node *prev=NULL;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    delete curr;
}
//delete last node
void delete_last_node(Node *&head){
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
//print
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
//return length
int get_length(Node *&head){
    int len=0;
    Node *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
int main() {
    Node* n1=new Node(20);
    Node* head=n1;
    Insert_at_head(head,10);
    insert_at_tail(head,30);
    insert_at_position(head,25,3);
    insert_at_position(head,5,1);
    delete_from_head(head);
    delete_at_position(head,3);
    delete_last_node(head);
    cout<<get_length(head)<<endl;;
    print(head);
    

    return 0;
}
