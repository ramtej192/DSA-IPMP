class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,index=0;
        int mxima=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(sum<0){
                i=index;
                index++;
                sum=0;
            }
            else{
                sum+=nums[i];
                mxima=max(mxima,sum);
            }
        }
        return mxima;
    }
};
