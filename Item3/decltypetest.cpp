//
// Created by wegamekinglc on 16-5-11.
//

#include "decltypetest.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    deque<int> d{1, 2, 3, 4, 5, 6};
    cout << authAndAccess(d, 5) << endl;

    vector<double> v{1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    cout << authAndAccess(v, 5) << endl;

    authAndAccess(v, 5) = 10.0;
    cout << authAndAccess(v, 5) << endl;

    authAndAccess14(v, 5) = 0.0;
    cout << authAndAccess14(v, 5) << endl;

    cout << authAndAccessRV(makeDeque(), 5) << endl;
    cout << authAndAccessRV14(makeDeque(), 5) << endl;
}

