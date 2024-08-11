#include <iostream>

int main()
{
#if defined(_MSC_VER)
#if _MSVC_LANG < 201103L
    std::cout << "before C++11\n";
#elif _MSVC_LANG == 201103L
    std::cout << "C++11\n";
#elif _MSVC_LANG == 201402L
    std::cout << "C++14\n";
#elif _MSVC_LANG == 201703L
    std::cout << "C++17\n";
#elif _MSVC_LANG == 202002L
    std::cout << "C++20\n";
#elif 202002L < _MSVC_LANG
    std::cout << "C++20 or later\n";
#endif
#else // その他のコンパイラの場合
#if __cplusplus < 201103L
    std::cout << "before C++11\n";
#elif __cplusplus == 201103L
    std::cout << "C++11\n";
#elif __cplusplus == 201402L
    std::cout << "C++14\n";
#elif __cplusplus == 201703L
    std::cout << "C++17\n";
#elif __cplusplus == 202002L
    std::cout << "C++20\n";
#elif 202002L < __cplusplus
    std::cout << "C++20 or later\n";
#endif
#endif
}
