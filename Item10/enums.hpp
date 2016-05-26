//
// Created by wegamekinglc on 2016/5/26.
//

#ifndef EFFECTIVECPP_ENUMS_HPP
#define EFFECTIVECPP_ENUMS_HPP

#include <cstdint>
#include <string>

enum Color98 {
    black98, white98, red98
};

enum class Color11 : std::uint64_t;

int transform(const Color11 &c);

enum class Color11 : std::uint64_t {
    black11, white11, red11
};

enum UserInfoFields {
    uiName, uiEmail, uiResponse
};

using UserInfo =
std::tuple<std::string, std::string, std::size_t>;

#endif //EFFECTIVECPP_ENUMS_HPP
