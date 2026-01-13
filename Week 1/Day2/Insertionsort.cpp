#include <iostream>
using namespace std;

void is(int a[],int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    is(arr,n);
    cout<<"Sorted array:\n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}

