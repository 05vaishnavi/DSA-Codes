#include<iostream>
using namespace std;
int main(){
    int a[10]={12,43,21,49,45,67,53,78,44,26};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Traversing before deletion:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
int pos,j;
cout<<"Enter the position:"<<endl;
cin>>pos;
if (pos>n){
cout<<"The position for the element is invalid"<<endl;
return 0;
}

for(j=pos-1;j<n;j++){
    a[j]=a[j+1];
}
n-=1;
cout<<"Traversing after deletion:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
return 0;
}
