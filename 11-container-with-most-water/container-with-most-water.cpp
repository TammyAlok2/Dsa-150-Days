class Solution {
public:
    int maxArea(vector<int>& height) {
        
        // we are applying two pointer approach here

        int maxArea = 0;
        int n = height.size();

        int left = 0;
        int right = n-1;

        // we need to find the lenght and width 

        while(left < right){
            int length = min(height[left],height[right]);
            int width = right - left ;

            int area = length * width ;
            maxArea = max(maxArea , area);

            if (height[left] <= height[right]){
                left ++;
            }
            else {
                right --;
            }
        }
        return maxArea;
    }
};