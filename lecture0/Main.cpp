#include "MyLib/Common.hpp"     // - 13:50
#include "MyLib/FileSystem.hpp" // - 14:30
#include "MyLib/Point.hpp"      // - 14:20
#include "MyLib/Timer.hpp"      // - 14:40
#include "MyLib/Utility.hpp"    // - 14:00
#include <print>
//  [14:40 - 14:55 break time]
#include "MyLib/BinaryFileReader.hpp" // - 15:25
#include "MyLib/BinaryFileWriter.hpp" // - 15:10
#include "MyLib/TextFileReader.hpp"   // - 15:55
#include "MyLib/TextFileWriter.hpp"   // - 15:40
//  [15:55 - 16:10 break time]
#include "MyLib/Color.hpp" // - 16:30
// #include "MyLib/Image.hpp" // - 16:50
// #include "MyLib/BMP.hpp" // - 17:10

using namespace seccamp;

int main()
{
    std::println("Hello, SecCamp!");

    std::println("---- Common.hpp ----");
    {
#if SECCAMP_PLATFORM(MACOS)
        std::println("macOS");
#endif
    }

    std::println("---- Utility.hpp ----");
    {
        std::println("IsEven(42) = {}", IsEven(42));
        std::println("IsOdd(42) = {}", IsOdd(42));
    }

    std::println("---- Point.hpp ----");
    {

        Point p1 = {1, 2};
        std::println("p1 = ({}, {})", p1.x, p1.y);
        std::println("p1.length() = {}", p1.length());
        std::println("p1.length<float>() = {}", p1.length<float>());
        std::println("p1 = {}", p1);
    }

    std::println("---- FileSystem.hpp ----");
    {
    }

    std::println("---- Timer.hpp ----");
    {
        Timer timer;
        Sleep(1000);
        // timer.print();
    }

    std::println("---- BinaryFileWriter.hpp ----");
    {
    }

    std::println("---- BinaryFileReader.hpp ----");
    {
    }

    std::println("---- TextFileWriter.hpp ----");
    {
    }

    std::println("---- TextFileReader.hpp ----");
    {

        TextFileReader reader{"README.md"};
        std::string line;
        reader.readLine(line);
        std::println("line = {}", line);
    }
    
    std::println("---- Color.hpp ----");
    {
        Color color = {255, 123, 123, 255};
        std::println("color == color", color == color);
        std::println("color = {}", color);
    }

    std::println("---- Image.hpp & BMP.hpp ----");
    {
    }
}
