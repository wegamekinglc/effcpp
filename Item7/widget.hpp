//
// Created by wegamekinglc on 16-5-17.
//

#ifndef EFFECTIVECPP_WIDGET_HPP
#define EFFECTIVECPP_WIDGET_HPP

#include <initializer_list>

class Widget {
public:
    Widget();

    Widget(int i, bool b);

    Widget(int i, double d);

    Widget(std::initializer_list<long double> il);

    operator double() const;

private:
    double value_;
};


#endif //EFFECTIVECPP_WIDGET_HPP
