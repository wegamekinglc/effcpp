//
// Created by wegamekinglc on 16-5-11.
//

#ifndef EFFECTIVECPP_AUTOTEST_HPP
#define EFFECTIVECPP_AUTOTEST_HPP

#include <functional>
#include <numeric>

template<typename T>
T func(std::initializer_list<T> initList) {
    return std::accumulate(initList.begin(), initList.end(), 0, std::plus<T>());
}

#endif //EFFECTIVECPP_AUTOTEST_HPP
