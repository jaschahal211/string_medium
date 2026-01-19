#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int size=part.size();
        while(s.find(part)!=string::npos)
        {
            s.erase(s.find(part),size);

        }
        return s;
        
    }
};