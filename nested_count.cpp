#include<iostream>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int level=0,maxnested=INT_MIN;
        for(char ch:s)
        {
            if(ch=='(') level++;
            maxnested=max(maxnested,level);
            if(ch==')') level--;
        }
        return maxnested;
    }
};
int main()
{
    Solution s;
    s.maxDepth("hello");
}