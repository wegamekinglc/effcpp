//
// Created by wegamekinglc on 16-5-15.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;


int main() {
    auto derefLess =
            [](const auto &p1, const auto &p2) {
                return *p1 < *p2;
            };

    int a[] = {1, 2, 3};
    cout << derefLess(&a[0], &a[2]) << endl;

    vector<double> s{1.0, 2.0, 3.0};
    cout << derefLess(&s[0], &s[2]) << endl;

    unordered_map<string, int> m;

    m["a"] = 1;
    m["b"] = 2;
    m["c"] = 3;

    for (const pair<std::string, int> &p: m)
        cout << p.first << ", " << p.second << endl;

    for (const pair<const std::string, int> &p: m)
        cout << p.first << ", " << p.second << endl;

    for (const auto &p: m)
        cout << p.first << ", " << p.second << endl;

    return 0;
}
