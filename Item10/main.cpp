//
// Created by wegamekinglc on 2016/5/26.
//

#include "enums.hpp"
#include <iostream>
#include <tuple>

using namespace std;

int main() {

    cout << black98 << endl;
    cout << transform(Color11::black11) << endl;

    UserInfo info{"cheng li", "wegamekinglc@hotmail.com", 10};

    cout << get<uiName>(info) << endl;

    return 0;
}
