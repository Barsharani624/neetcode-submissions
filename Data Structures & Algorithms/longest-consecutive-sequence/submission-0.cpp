class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        if(nums.empty()){
            return 0;
        }
        
        int count = 1;
        int longest = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1]+1){
                    count++;
                }
                else{
                    longest = max(longest, count);
                    count = 1;
                }
            }
        }
        longest = max(longest,count);
        return longest;
    }
};
