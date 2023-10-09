//link:https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
int firstOccurence(vectornums,int target){
int start =0;
int ans =-1;
int end = nums.size()-1;
int mid = start+(end-start)/2;

    while(start<= end){
        if(nums[mid]==target){
           ans=mid;
            //left searching 
            end =mid-1;
        }
        else if(nums[mid] < target){
            //right search 
            start = mid+1;
            
            
        }
        else {
            end= mid-1;
        }
        mid=start+(end-start)/2;
    
        
    }
        return ans;
}

    int lastOccurence(vector<int>nums,int target){
    int start =0;
    int ans =-1;
    int end = nums.size()-1;
    int mid = start+(end-start)/2;
    
    while(start<= end){
        if(nums[mid]==target){
           ans=mid;
            //right searching 
            start = mid+1;
        }
        else if(nums[mid] < target){
            //right search 
            start = mid+1;
            
            
        }
        else {
            end= mid-1;
        }
        mid=start+(end-start)/2;
  
        
    }
              return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans;
    
    int first= firstOccurence(nums,target);
    int second = lastOccurence(nums,target);
    
    ans.push_back(first);
    ans.push_back (second);
    return ans;
    
}
}
