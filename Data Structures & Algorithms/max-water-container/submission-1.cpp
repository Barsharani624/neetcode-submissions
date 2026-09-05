class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0 ;
        int right = heights.size()-1;
        int maxarea = 0;

        while(left < right){
            int height = min(heights[left],heights[right]);
            int width = right - left;
            int area = height * width;

            maxarea = max(area,maxarea);

            if(heights[left] < heights[right]){
                left++;
            } 
            else{
                right--;
            }
        }

        return maxarea;
        
    }
};
