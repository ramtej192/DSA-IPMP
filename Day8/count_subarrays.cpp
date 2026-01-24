class Solution {
public:
    long long subarrayXor(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;

        int xr = 0;
        long long count = 0;

        for (int x : arr) {
            xr ^= x;
            if (freq.count(xr ^ k))
                count += freq[xr ^ k];
            freq[xr]++;
        }

        return count;
    }
};

