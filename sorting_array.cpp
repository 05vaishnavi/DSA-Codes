#include<iostream>
using namespace std;


void ascendingsort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
               int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

}
int main(){
    int a[10]={12,43,21,49,45,67,53,78,44,26};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Traversing before left rotation:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
ascendingsort(a,n);
cout<<"Traversing after left rotation:"<<endl;
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]: "<<a[i]<<endl;
}
return 0;
}
