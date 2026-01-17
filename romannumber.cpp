#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int number=0;
       map<char,int>mpp;
       mpp['I']=1;
       mpp['V']=5;
       mpp['X']=10;
       mpp['L']=50;
       mpp['C']=100;
       mpp['D']=500;
       mpp['M']=1000;
      for(int i=0;i<s.size();i++)
      {
        if(mpp[s[i]]>=mpp[s[i+1]])
        {
            number+=mpp[s[i]];
        }
        else
        {
            number-=mpp[s[i]];
        }
      }
       return number;
    }
};
