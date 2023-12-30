 vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> vote;
        for(int i=0;i<n;i++){
            vote[arr[i]]++;
        }
        int maxi=0;
        string cand="";
        for(auto itr: vote){
            if(itr.second>maxi){
                maxi=itr.second;
                cand=itr.first;
            }
            else if(itr.second==maxi){
                if(cand>itr.first)
                    cand=itr.first;
            }
        }
        return {cand, to_string(maxi)};
    }
