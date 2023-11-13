class Solution
{
    private:
        bool check(string str1 , string str2){
            for(int i =0 ;i < str1.size() ; i++){
                if(str1[i] != str2[i])
                    return 0;
            }
            return 1;
        }
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        //check for anticlock wise
        string str ,str3 ;
        int n = str1.size();
        for(int i = 2 ;i < n ; i++)
            str += str1[i];
        str += str1[0] ;
        str += str1[1] ;
        //check for clockwise
        str3 += str1[n-2];
        str3 += str1[n-1];
        for(int i = 0 ; i< n -2 ; i++)
            str3 += str1[i];
        if(check(str, str2) || check(str3 , str2))
            return true;
        return false;

}
}
