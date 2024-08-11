#include <fstream>
#include "TextFile.hpp"

namespace mylib
{
    bool WriteTextFile(const std::string& path, const std::string& text)
    {
        std::ofstream file{ path };
        
        if (!file)
        {
            return false;
        }

        file << text;
        
        return true;
    }
}
