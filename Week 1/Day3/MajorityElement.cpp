#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    map<int,int> freq;
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        int num = nums[i];
        freq[num] = freq[num] + 1;
    }
    vector<int> res;
    map<int,int>::iterator it;
    for(it = freq.begin(); it != freq.end(); it++) {
        if(it->second > n / 3) { 
            res.push_back(it->first); 
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = majorityElement(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

