#include "FileSystem.hpp"
#include <filesystem> // std::filesystem::path, std::filesystem::absolute

namespace seccamp
{
namespace FileSystem
{
std::string FullPath(const std::string_view path)
{
    return std::filesystem::absolute(path).string();
}

std::string Extension(const std::string_view path)
{
    return std::filesystem::path{path}.extension().string();
}
} // namespace FileSystem
} // namespace seccamp
