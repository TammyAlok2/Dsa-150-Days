class Solution {
public:
    static bool comp ( vector<int> & a, vector<int> & b){
        return a[1] < b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // sort it according tot the end time 
        sort(intervals.begin(),intervals.end(),comp);

        // we are getting first interval 
        int limit = intervals[0][1];
        int count =1 ;

        for(int i =1;i<intervals.size();i++){
            if(limit <= intervals[i][0]){
                count++;
                limit = intervals[i][1]; // storing the second or last time 
            } // checking first or start time {
               
            }
        

        return intervals.size()-count;
    }
};