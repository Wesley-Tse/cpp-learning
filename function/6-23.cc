#include <iostream>

void print(int i)
{
    std::cout << i << std::endl;
}

void print(int arr[], size_t n)
{
    for (auto i = 0; i < n; ++i)
        std::cout << arr[i] << std::endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(i);
    print(j, std::end(j) - std::begin(j));
}