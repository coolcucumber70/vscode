#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str = "";
    cin>>str;
    int N = str.size();
    int countspace = 0;
    double ans = 0;
    for (size_t i = 0; i < N; ++i)
    {
        if (str[i] == ' ')
            countspace++;
    }
    ans = 1.0 * (N - countspace) / (1.0 * (countspace + 1));
    cout << ans << endl;
    return 0;
}
