#include <iostream>
using namespace std;
class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1.size() != s2.size())
            return false;
        for (int i = 0; i < s1.size(); i++)
        {
            int  pos = i;
            if (s1[i] != s2[i])
            {
                while (1)
                {
                    pos = s1.find(s2[i], pos+1);
                    if (pos == -1)
                        return false;
                    if(s1[pos] != s2[pos])
                    {
                        swap(s1[i], s1[pos]);
                        string a=s1.substr(i);
                        string b=s2.substr(i);
                        return !a.compare(b);
                    }
                }
            }
        }
        return true;
    }
};