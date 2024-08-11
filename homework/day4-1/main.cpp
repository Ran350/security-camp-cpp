#include <cctype>
#include <print>
#include <string>
#include <string_view>

std::string ToLower(std::string_view s)
{
    std::string result(s);

    for (char &c : result)
    {
        c = std::tolower(c);
    }

    return result;
}

int main()
{
    std::string s = "Hello, World!";
    std::println("{}", ToLower(s));
}
