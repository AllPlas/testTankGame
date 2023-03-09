//
// Created by alex on 09.03.23.
//

#ifndef SFMLTANKS_CONFIG_H
#define SFMLTANKS_CONFIG_H
#include <filesystem>

namespace data
{
namespace fs = std::filesystem;

inline const fs::path mapFile{ "../map.txt" };
inline const fs::path assetsDir{ "../assets/" };
}  // namespace data

#endif  // SFMLTANKS_CONFIG_H
