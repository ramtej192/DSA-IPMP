class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();

        long long Sn = (long long)n * (n + 1) / 2;
        long long S2n = (long long)n * (n + 1) * (2LL * n + 1) / 6;

        long long S = 0, S2 = 0;
        for (int x : arr) {
            S += x;
            S2 += (long long)x * x;
        }

        long long diff = S - Sn;            
        long long sum = (S2 - S2n) / diff;  

        long long R = (diff + sum) / 2;
        long long M = R - diff;

        return {(int)R, (int)M};
    }
};

