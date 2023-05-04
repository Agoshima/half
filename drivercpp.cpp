#include <iostream>
#include <cmath>

template<typename T>
T half(T value)
{
    return value / static_cast<T>(2);
}

template<>
int half(int value)
{
    return std::round(static_cast<double>(value) / 2);
}

int main()
{
    // Testing the function with different data types
    std::cout << half(10) << std::endl;         // 5
    std::cout << half(11) << std::endl;         // 6
    std::cout << half(15) << std::endl;         // 7
    std::cout << half(20) << std::endl;         // 10
    std::cout << half(25) << std::endl;         // 12
    std::cout << half(30) << std::endl;         // 15

    std::cout << half(3.0) << std::endl;        // 1.5
    std::cout << half(3.5) << std::endl;        // 1.75
    std::cout << half(4.0) << std::endl;        // 2
    std::cout << half(4.5) << std::endl;        // 2.25
    std::cout << half(5.0) << std::endl;        // 2.5
    std::cout << half(5.5) << std::endl;        // 2.75

    return 0;
}
