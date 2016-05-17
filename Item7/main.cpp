//
// Created by wegamekinglc on 16-5-17.
//

#include "widget.hpp"

using namespace std;

int main() {
    Widget w0{};
    Widget w1(10, true);
    Widget w2{10, true};
    Widget w3(10, 5.0);
    Widget w4{10, 5.0};
    Widget w6({});
    return 0;
}
