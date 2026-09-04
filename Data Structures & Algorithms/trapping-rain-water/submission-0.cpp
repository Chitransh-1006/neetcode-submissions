class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),left=0,right = n-1,leftmax=0,rightmax=0,water=0;
        while(left<right){
            if(height[left]<=height[right]){
                leftmax = max(leftmax,height[left]);
                water+=leftmax-height[left];
                left++;
            }else{
                rightmax = max(rightmax,height[right]);
                water+=rightmax-height[right];
                right--;
            }
        }
        return water;        
    }
};
