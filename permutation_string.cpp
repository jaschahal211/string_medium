#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(char ch:s1){
            freq[ch-'a']++;
        }
        int windowsize=s1.size();
        for(int i=0;i<s2.size();i++)
        {
            int windowIdx=0,idx=i;
            int winfreq[26]={0};
            while(windowIdx<windowsize&&idx<s2.size())
            {
                winfreq[s2[idx]-'a']++;
                windowIdx++;idx++;

            }
            if(isfrequency(freq,winfreq)) {return true;}

        }  
         return false;      
    }
    bool isfrequency(int freq[],int winfreq[])
    {
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=winfreq[i]) return false;
        }
        return true;
    }

};
