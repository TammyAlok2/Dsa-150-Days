class Solution {
public:
    vector<int> sumZero(int n) {
// we will do like we will add both negative and postive of same number 
vector<int>res;
for(int i =1;i<=n/2;i++){
res.push_back(i);
res.push_back(-i);
}

if(n%2!= 0 ) res.push_back(0);

return res;
        
    }
};