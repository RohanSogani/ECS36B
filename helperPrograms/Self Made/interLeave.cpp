#include <iostream>
using namespace std;

bool is_Interleave(string s1,int i,string s2,int j,string res,string s3)
    {
        cout<<"s1 --> "<<s1<<" s2 --> "<<s2<<" s3 --> "<<s3<<endl;
        if((res == s3) && i==s1.length() && j == s2.length())
            return true;
        bool ans=false;
        if(i<s1.length())
            ans|=is_Interleave(s1,i+1,s2,j,res+s1[i],s3);
        if(j<s2.length())
            ans|=is_Interleave(s1,i,s2,j+1,res+s2[j],s3);
        return ans;

    }
    bool isInterleave(string s1, string s2, string s3) {
        return is_Interleave(s1,0,s2,0,"",s3);
    }

int main() {
    string s1 = "aabacb";
    string s2 = "caa";
    string s3 = "caaabaacb";
    bool r = isInterleave(s1, s2, s3);
    cout<<"result is -->"<<r<<endl;
}