//
// Created by wegamekinglc on 16-5-17.
//

#include "widget.hpp"

Widget::Widget() {
    value_ = 0.0;
}

Widget::Widget(int i, bool b) {
    if (b)
        value_ = static_cast<double>(i);
    else
        value_ = -static_cast<double>(i);
}

Widget::Widget(int i, double d) {
    value_ = static_cast<double>(i) * d;
}

Widget::Widget(std::initializer_list<long double> il) {
    value_ = 1.0;
    for (auto i = il.begin(); i != il.end(); ++i)
        value_ *= *i;
}

Widget::operator double() const {
    return value_;
}
