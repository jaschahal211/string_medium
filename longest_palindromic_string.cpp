#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==0) return "";
        int start=0,maxlen=1;
        for(int i=0;i<s.size();i++)
        {
            expand(s,i,i,start,maxlen);//odd length palindrome
            expand(s,i,i+1,start,maxlen);//even length palindrome
        }
        return s.substr(start,maxlen);        
    }
     void expand(string &s,int left,int right,int &start,int &maxlen){
        while(left>=0&&right<=s.size()-1&&s[left]==s[right])
        {
            if(right-left+1>maxlen){
                start=left;
                maxlen=right-left+1;
            }
            left--;
            right++;
        }
     }
};