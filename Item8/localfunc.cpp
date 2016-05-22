//
// Created by pchome on 2016/5/22.
//

#include "localfunc.hpp"

int f1(std::shared_ptr<Widget> spw) {
    return 1;
}

double f2(std::unique_ptr<Widget> upw) {
    return 0.0;
}

bool f3(Widget *pw) {
    return false;
}