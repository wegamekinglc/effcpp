//
// Created by wegamekinglc on 16-5-16.
//

#include "func.hpp"
#include <iostream>
#include <boost/type_index.hpp>

using namespace std;
using boost::typeindex::type_id_with_cvr;

int main()
{
    auto feature1 = createBoolVector()[3];
    cout << type_id_with_cvr<decltype(feature1)>().pretty_name() << endl;

    auto feature2 = static_cast<bool>(createBoolVector()[3]);
    cout << type_id_with_cvr<decltype(feature2)>().pretty_name() << endl;

    return 0;
}
