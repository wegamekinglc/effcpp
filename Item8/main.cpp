//
// Created by pchome on 2016/5/22.
//

#include "localfunc.hpp"
#include <mutex>
#include <iostream>

using namespace std;

int main() {
    std::mutex f1m, f2m, f3m;
    auto result = lockAndCall(f1, f1m, nullptr);
    cout << result << endl;

    result = lockAndCall(f2, f2m, nullptr);
    cout << result << endl;

    result = lockAndCall(f3, f3m, nullptr);
    cout << result << endl;

    return 0;
}
