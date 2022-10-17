#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
void insert_at_head(Node *&head,int d){
    if(head==NULL){
        head=new Node(d);
        return;
    }
    Node *n=new Node(d);
    n->next=head;
    head->prev=n;
    head=n;
}
void insert_at_last(Node *&head,int d){
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
    n->prev=temp;
}
void insert_at_pos(Node *&head,int d,int pos){
    if(pos==1){
        insert_at_head(head,d);
        return;
    }
    int cnt=1;
    Node *temp=head;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;

    }
    if(temp->next==NULL){
        insert_at_last(head,d);
        return;

    }
    Node *n=new Node(d);
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
    n->prev=temp;
}
void delete_at_head(Node *&head){
    Node *temp=head->next;
    temp->prev=NULL;
    head->next=NULL;
    delete head;
    head=temp;
}
void delete_at_last(Node *&head){
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
   
    temp->next->prev=NULL;
    delete temp->next;
    temp->next=NULL;
}
void delete_from_pos(Node *&head,int pos){
    if(pos==1){
        delete_at_head(head);
    }
    Node *curr=head;
    Node *temp=NULL;
    int cnt=1;
    while(cnt<pos){
        temp=curr;
        curr=curr->next;
        cnt++;
    }
    temp->next=curr->next;
    curr->next->prev=temp;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;


}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main() {
    Node *n=new Node(2);
    Node *head=n;
    insert_at_head(head,1);
    insert_at_last(head,4);
    insert_at_pos(head,3,3);
    delete_at_head(head);
    delete_at_last(head);
    insert_at_head(head,1);
    insert_at_last(head,4);
    delete_from_pos(head,3);
    print(head);


}
