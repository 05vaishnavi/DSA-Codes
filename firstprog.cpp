#include<iostream>
using namespace std;
int main(){
    int a[20];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"Elements in array:"<<endl;
    for(int i=0;i<10;i++){
        cout<<"a["<<i<<"]: "<<a[i]<<endl;
    }
    int new_arr[20];
    cout<<"Copying the array elements in a new array:"<<endl;
    for(int i=0;i<10;i++){
        new_arr[i]=a[i];
    }
    cout<<"Elements in new
    96  array:"<<endl;
    for(int i=0;i<10;i++){
        cout<<"new_arr["<<i<<"]: "<<new_arr[i]<<endl;
    }
return 0;
}
