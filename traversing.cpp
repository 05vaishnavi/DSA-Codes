#include<iostream>
using namespace std;
int main(){
int a[10]={12,43,21,4,45,67,53,78,44,2};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Traversing:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
return 0;
}
