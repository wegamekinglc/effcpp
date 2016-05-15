//
// Created by wegamekinglc on 16-5-15.
//

#include <iostream>
#include <typeinfo>
#include <vector>
#include <boost/type_index.hpp>

using namespace std;
using boost::typeindex::type_id_with_cvr;

template<typename T>
void f(const T &param) {
    cout << "T =     " << typeid(T).name() << endl;
    cout << "param = " << typeid(param).name() << endl;

    cout << "T =     "
    << type_id_with_cvr<T>().pretty_name() << endl;

    cout << "Param = "
    << type_id_with_cvr<decltype(param)>().pretty_name() << endl;
}

int main() {
    const int theAnswer = 42;

    auto x = theAnswer;
    auto y = &theAnswer;

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;

    const auto vw = vector<int>{1, 2, 3};
    f(&vw[0]);

    return 0;
}
