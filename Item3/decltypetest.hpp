//
// Created by wegamekinglc on 16-5-11.
//

#ifndef EFFECTIVECPP_DECLTYPETEST_HPP
#define EFFECTIVECPP_DECLTYPETEST_HPP

#include <deque>

template<typename Container, typename Index>
auto authAndAccess(Container &c, Index i) -> decltype(c[i]) {
    return c[i];
};

template<typename Container, typename Index>
decltype(auto) authAndAccess14(Container &c, Index i) {
    return c[i];
};

template<typename Container, typename Index>
auto authAndAccessRV(Container &&c, Index i)
-> decltype(std::forward<Container>(c)[i]) {
    return std::forward<Container>(c)[i];
};


template<typename Container, typename Index>
decltype(auto) authAndAccessRV14(Container &&c, Index i) {
    return std::forward<Container>(c)[i];
};

std::deque<int> makeDeque() {
    return std::deque<int>{1, 2, 3, 4, 5, 6};
}


#endif //EFFECTIVECPP_DECLTYPETEST_HPP
