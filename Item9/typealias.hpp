//
// Created by pchome on 2016/5/22.
//

#ifndef EFFECTIVECPP_TYPEALIAS_HPP
#define EFFECTIVECPP_TYPEALIAS_HPP

#include <memory>
#include <unordered_map>
#include <string>
#include <list>

typedef
std::unique_ptr<std::unordered_map<std::string, std::string>> UPtrMapSS;

using UPtrMapSSUsing = std::unique_ptr<std::unordered_map<std::string, std::string>>;

typedef void(*FP)(int, const std::string &);

using FPusing = void (*)(int, const std::string &);

template<typename T>
using MyAllocListUsing = std::list<T>;

template<typename T>
struct MyAllocList {
    typedef std::list<T> type;
};

#endif //EFFECTIVECPP_TYPEALIAS_HPP
