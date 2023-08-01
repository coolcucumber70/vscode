using namespace std;
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // 计算向量中元素的个数
    auto l = std::find(numbers.begin(), numbers.end(),20);
    auto r = std::find(numbers.begin(), numbers.end(),40);
    std::cout << "Number of elements in the vector: " << std::distance(numbers.begin(),r) << std::endl;

    return 0;
}

