#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
       map<char,int>mpp;
       for(char ch:s)
       {
        mpp[ch]++;
       }
       vector<pair<char,int>>v;
       for(auto it:mpp)
       {
        v.push_back({it.first,it.second});
       }
       sort(v.begin(),v.end(),[](pair<char,int>a,pair<char,int>b){
        return a.second>b.second;
       });
       string ans="";
       for(auto it:v)
       {
        for(int i=0;i<it.second;i++)
        {
            ans+=it.first;
        }
       }
       return ans;
    }
};
int main()
{
    Solution s;
    s.frequencySort("hello");
}