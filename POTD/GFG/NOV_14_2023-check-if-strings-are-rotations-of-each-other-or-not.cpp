class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
               if(s1==s2) return true;
        int n=s2.size();
        for(int i=0;i<n;i++) {
            s2.push_back(s2[0]);
            s2.erase(0,1);
            if(s1==s2) return true;
        }
        return false;
    }
};
