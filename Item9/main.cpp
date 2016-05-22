//
// Created by pchome on 2016/5/22.
//

#include "typealias.hpp"
#include <iostream>

using namespace std;

void testFunc(int, const std::string &s) {
    cout << "This is test function, " << s << "!" << endl;
}

int main() {
    UPtrMapSS testMap1(new std::unordered_map<string, string>());
    UPtrMapSSUsing testMap2(new std::unordered_map<string, string>());

    FP fp1 = testFunc;
    FPusing fp2 = testFunc;

    fp1(1, "hell");
    fp2(1, "hell");

    MyAllocListUsing list1;
    MyAllocList::type list2;

    return 0;
}
