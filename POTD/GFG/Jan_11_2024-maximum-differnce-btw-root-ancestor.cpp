string removeKdigits(string s, int k) {
        int n = s.size();
        string ans;
        for(int i=0;i<n;i++){
            while(!ans.empty() && ans.back()>s[i] && k){
                ans.pop_back();
                k--;
            }
            if(s[i]!='0'||ans.size())
                ans.push_back(s[i]);
        }
        ans = ans.substr(0,max((int)ans.size()-k,0));
        return ans.size()?ans:"0";
    }
