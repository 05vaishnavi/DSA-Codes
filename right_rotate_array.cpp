#include<iostream>
using namespace std;
void rightRotate(int arr[],int n){
int temp=arr[n-1];
int i;
for(i=n-1;i>0;i--){
    arr[i]=arr[i-1];
}
arr[i]=temp;
}
int main(){
    int a[10]={12,43,21,49,45,67,53,78,44,26};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Traversing before left rotation:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
rightRotate(a,n);
cout<<"Traversing after left rotation:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
return 0;
}
