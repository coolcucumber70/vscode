#include <iostream>
using namespace std;
#include <queue>
#include <unordered_set>
class Solution
{
public:
    int getKthMagicNumber(int k)
    {
        priority_queue<long, vector<long>, greater<long>> heap;
        unordered_set<int> hash;
        long top;
        for (int i = 1; i < 5; i++)
        {
            heap.push(2 * i - 1);
            hash.emplace(2 * i - 1);
        }
        for (int i = 0; i < k;)
        {
            top = heap.top();
            heap.pop();
            i++;
            for (int j = 1; j < 4; j++)
            {
                long tmp = top * (2 * j + 1);
                if (hash.find(tmp) == hash.end())
                {

                    heap.push(tmp);
                    hash.emplace(tmp);
                }
            }
        }
        return top;
    }
};