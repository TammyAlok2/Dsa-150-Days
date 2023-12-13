#include<bits/stdc++.h>
using namespace std;


void removeOcc(string &s, string &part ){

    // one case solution ; 
    // 1)  first find the part at the string part using find () function 
int  found = s.find(part);

if(found != string::npos){
    // part has been found 
    // 2) remove the part from the main string by making left and right string using substr() function
    string left_part = s.substr(0,found);
    string right_part = s.substr(found+part.size(), s.size());
// removed string 
    s = left_part+right_part;
}
else{
    // base case if part not found in the main string 
    // all the occurence of the part has been removed from the part 
    return ;
}

removeOcc(s,part);

}



int main (){
// question is to remove the part from the string 
string s = "abbabababdababc";
string part = "abc";
removeOCC(s,part);
cout<<s<<endl;



    return 0;
}

// learning 
// we learn two string function today 1) find function 2 ) substr function 

/*
1) find() function is used to find the part of the string in the main string 
suppose s = 'ababcababcbabc'
and the part is 'abc' and we have to find the postion of the part in the s string then 

syntax : string .find (part);
int found = s.find (part );
it gives the starting index of the part and if the part not found then it gives  sting:: npos 


2) substr() function is used to make the substring from the main string 
suppose string given s = " abcababc";
we have to make the substring of first three charcter then we wring 
string left = s.substr(0,3);
syntax  s.substr(intialpoint,finalpoint); 


Time complexity : for finding the string 0(m*n ) for substring 0(n) // one test case  + O(n/m)  all test case 
final complexity: 0(n*n)
space complexitY: 0(n/m)

*/ 