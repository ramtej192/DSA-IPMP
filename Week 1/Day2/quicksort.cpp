#include <iostream>
using namespace std;

int partition(int a[],int l,int h){
    int pivot=a[h];
    int i=l-1;

    for(int j=l;j<h;j++){
        if(a[j]<pivot){
            i++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[i+1];
    a[i+1]=a[h];
    a[h]=temp;
    return i+1;
}

void qs(int a[],int l,int h){
    if(l<h){
        int p=partition(a,l,h);
        qs(a,l,p-1);
        qs(a,p+1,h);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    qs(a,0,n-1);
    cout<<"Sorted array:\n";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}

