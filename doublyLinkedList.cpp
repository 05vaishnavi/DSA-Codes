#include<iostream>
using namespace std;
struct node{
int data;
struct node *prev;
struct node *next;
};
struct node* insert_first_node(struct node *head, int data){
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->prev=NULL;
temp->next=NULL;
temp->data=data;
head=temp;
return head;
};
void traverse(struct node *head){
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp=head;
while (temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}

int main(){
struct node *head=(struct node *)malloc(sizeof(struct node));
insert_first_node(head,57);
traverse(head);
return 0;
}
