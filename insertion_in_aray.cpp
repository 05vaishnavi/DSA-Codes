#include<iostream>
using namespace std;
int main(){
    int a[10]={12,43,21,49,45,67,53,78,44,26};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Traversing before insertion:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
n++;
int val,pos,j;
cout<<"Enter the element to be inserted:"<<endl;
cin>>val;
cout<<"Enter the position:"<<endl;
cin>>pos;
if (pos>n){
cout<<"The position for the element is invalid"<<endl;
return 0;
}

for(j=n-1;j>pos-1;j--){
    a[j]=a[j-1];
}
a[j]=val;
cout<<"Traversing after insertion:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
return 0;
}
