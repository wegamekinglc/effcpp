//
// Created by pchome on 2016/5/22.
//

#ifndef EFFECTIVECPP_LOCALFUNC_HPP
#define EFFECTIVECPP_LOCALFUNC_HPP

#include <mutex>
#include <memory>

template<typename FuncType, typename MuxType, typename PtrType>
auto lockAndCall(FuncType func, MuxType &mutex, PtrType ptr) -> decltype(func(ptr)) {
    using MuxGuard = std::lock_guard<MuxType>;
    MuxGuard g(mutex);
    return func(ptr);
};


class Widget {
};


int f1(std::shared_ptr<Widget> spw);

double f2(std::unique_ptr<Widget> upw);

bool f3(Widget *pw);

#endif //EFFECTIVECPP_LOCALFUNC_HPP
