#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> ivec;
    int val;
    int target = 5;
    std::cout << "Input Integers: " << std::endl;
    while (std::cin >> val)
        ivec.push_back(val);
    auto cnt = std::count(ivec.begin(), ivec.end(), target);
    std::cout << target << " appears " << cnt << " times in this vector." << std::endl;
    return 0;
}