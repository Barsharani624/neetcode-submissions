class Solution {
public:
    int trap(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int leftmax = 0 , rightmax = 0, water = 0;

        while(left < right){
            if(heights[left] <= heights[right]){
                if(heights[left] >= leftmax){
                    leftmax = heights[left];
                }
                else{
                    water = water + (leftmax - heights[left]);
                }
                left = left + 1;
            }
            else{
                if(heights[right] >= rightmax){
                    rightmax = heights[right];
                }
                else{
                    water = water + (rightmax - heights[right]);
                }
                right = right - 1;
            }
        }
        return water;
    }
};
