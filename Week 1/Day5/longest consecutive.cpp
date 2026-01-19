class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if (arr.empty()) return 0;

        sort(arr.begin(), arr.end());

        int longest = 1;
        int curr = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1] + 1) {
                curr++;
            }
            else if (arr[i] != arr[i - 1]) {
                curr = 1;
            }
            longest = max(longest, curr);
        }
        return longest;
    }
};

