#include <print>
#include <string>
#include <string_view>

bool IsPalindrome(std::string_view s)
{
    for (size_t i = 0; i < (s.size() / 2); i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main() { std::println("{}", IsPalindrome("aaabbbaaa")); }
