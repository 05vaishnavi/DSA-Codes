#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node *link;
};
void count_of_nodes(struct node *head)
{
	int count=0;
	if(head==NULL)
	{
		cout<<"linked list empty";
	}
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<"data is : "<<ptr->data<<endl;
		count++;
		ptr=ptr->link;
	}
	cout<<"total nodes are : "<<count;
}

void insertNode(struct node *head){

    if(head==NULL){
            cout<<"No head detected"<<endl;
        return;
    }
    int a;
    cout<<"Enter the value to be entered:"<<endl;
    cin>>a;
    if(head->link==NULL){
        head->data=a;
        head->link=NULL;
        return;
    }
    else{
    struct node *ptr=NULL;
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link->data=a;
    ptr->link->link=NULL;
    }

}
int main(){
struct node *head=NULL;
head=(struct node *)malloc(sizeof(struct node));
head->data=45;
head->link=NULL;
for(int i=0;i<3;i++){
    insertNode(head);
}
count_of_nodes(head);
return 0;
}
