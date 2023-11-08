   int n = matrix.size();
        int j = 0;
        vector<int> res;
        for(int i = 0; i < n; i++) {
            
            int check = j;
            while(j < n && j >= 0) {
                res.push_back(matrix[i][j]);
                
                if(check == 0) j++;
                else j--;
                
            }
            if(j == n) j = n-1;
            else j = 0;
        }
        
        return res;
