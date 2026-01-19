class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),x,count=0,y;
        for(int j=0;j<n;j++){
            x=nums[j];
            count=1;
            for(int i=j+1;i<n;i++){
                if(nums[i]==x){
                    count++;
                }
            }
            if(count>n/2)
            y=nums[j];
        }
          return y;
    }
  
};
