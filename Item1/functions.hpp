//
// Created by wegamekinglc on 16-5-9.
//

#ifndef EFFECTIVECPP_FUNCTIONS_HPP
#define EFFECTIVECPP_FUNCTIONS_HPP

#include <cstddef>

template<typename T, std::size_t N>
constexpr std::size_t arraySize(const T (&)[N]) noexcept {
    return N;
};

#endif //EFFECTIVECPP_FUNCTIONS_HPP
