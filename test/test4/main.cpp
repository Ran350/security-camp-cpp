#include "TextFile.hpp"
#include <iostream>
#include <string>

int main()
{
    const std::string text = "Hello, World!";

    if (mylib::WriteTextFile("output.txt", text))
    {
        std::cout << "OK\n";
    }
    else
    {
        std::cout << "Failed\n";
    }
}
