#include <cstring>
#include <iostream>

int main()
{
    const char s[] = "あいうえお"; // デフォルトの文字セットでエンコードされる
    const char8_t u8[] = u8"あいうえお"; // 必ず UTF-8 でエンコードされる

    if ((sizeof(s) == sizeof(u8)) // 文字列のバイト列長が等しい
        && (std::memcmp(s, u8, sizeof(s)) == 0)) // バイト列の内容が等しい
    {
        std::cout << "UTF-8\n";
    }
    else
    {
        std::cout << "non UTF-8\n";
    }
}
