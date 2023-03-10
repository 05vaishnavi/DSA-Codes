#include<iostream>
using namespace std;
int stack[100], top = -1, n,ch, c=1 ;
int main(){
    cout<<"Enter the size of the stack:"<<endl;
    cin>>n;



    while(c){
            cout<<"----------Stack Implementation----------"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Peek"<<endl;
    cout<<"4. isEmpty"<<endl;
    cout<<"5. isFull"<<endl;
    cout<<"6. Display"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"X----------------X---------------------X"<<endl;
        cout<<"\n\nEnter your choice:"<<endl;
            cin>>ch;
    switch(ch){
case 1:
    if(top == n-1 ){
        cout<<"The stack is full"<<endl;

    }
    else{
            top+=1;
    cout<<"Enter the element to be pushed:"<<endl;
    cin>>stack[top];

    }
    break;
case 2:
    if(top == -1){
        cout<<"The stack is empty"<<endl;

    }
    else{
        top-=1;

    }
    break;

case 3:
    cout<<"Peek: "<<stack[top]<<endl;
    break;
case 4:
    if(top == -1){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }
    break;
case 5:
    if(top == n-1){
        cout<<"The stack is full"<<endl;

    }
    else{
        cout<<"The stack is not full"<<endl;

    }
    break;
case 6:
    if(top > -1){
    for(int i=top;i>=0;i--){
        cout<<"Element"<<i<<": "<<stack[i]<<endl;
    }

    }
    else{
        cout<<"The stack is empty"<<endl;

    }
    break;
case 7:
    c=0;
    break;
default:
    cout<<"////Wrong input////"<<endl;
    break;
    }
    }
return 0;
}
