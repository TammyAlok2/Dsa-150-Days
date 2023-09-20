#include<iostream>
using namespace std;
class Solution
{
  public:
         
        int RightRotate(int n, int d) {
            int keep = (n >> d);
            int lost = (n << (16-d));

            // masks the lower 16 bits to 1 and rest all higher order bits to 0
            return (lost | keep) & 0xFFFF;


        }
        
        int LeftRotate(int n, int d) {
            
            int keep = (n << d);
            int lost = (n >> (16-d));
            // same here
            return (keep | lost) & 0xFFFF;
        }
        
        vector <int> rotate (int n, int d)
        {

            d %= 16;

            int ls = LeftRotate(n, d);
            int rs = RightRotate(n, d);
            
            vector<int> ans{ls, rs};
            return ans;
        }
};
