class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0 , right = heights.size()-1;
        int maxarea = 0;
        while(left < right){
            int width = right - left;
            int h = min(heights[left],heights[right]);
            int area = width * h;
            maxarea = max(maxarea , area);
            heights[left] < heights[right] ? left++ : right--;
        }
        return maxarea;
        
    }
};
