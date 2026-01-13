#include <iostream>
using namespace std;

int leastFrequentDigit(long long n){
    int freq[10]={0};
    if(n==0)
	freq[0]++;
    while(n>0){
        freq[n%10]++;
        n/=10;
    }
    int minFreq=1e9,ans=0;

    for(int i=0;i<=9;i++){
        if(freq[i]>0&&freq[i]<minFreq){
            minFreq=freq[i];
            ans=i;
        }
    }
    return ans;
}

int main(){
    long long n;
    cin>>n;
    cout<<leastFrequentDigit(n);
    return 0;
}

