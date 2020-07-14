// Fig. 10.19: fig10_19.cpp
// HugeInteger test program.
#include <iostream>
#include "HugeInteger.h"
using namespace std;
int main() {
    HugeInteger n1{7654321};
    HugeInteger n2{7891234};
    HugeInteger n3{"99999999999999999999999999999"};
    HugeInteger n4{"1"};
    HugeInteger n5;
    /*
    cout << "n1 is " << n1 << "\nn2 is " << n2
        << "\nn3 is " << n3 << "\nn4 is " << n4
        << "\nn5 is " << n5 << "\n\n";

    n5 = n1 + n2;
    cout << n1 << " + " << n2 << " = " << n5 << "\n\n";

    cout << n3 << " + " << n4 << "\n= " << (n3 + n4) << "\n\n";

    n5 = n1 + 9;
    cout << n1 << " + " << 9 << " = " << n5 << "\n\n";

    n5 = n2 + "10000";
    cout << n2 << " + " << "10000" << " = " << n5 << endl;*/

    cout << "---DEADLINE OPERATIONS---" << endl;

    HugeInteger n6{13};
    HugeInteger n7{12};
    HugeInteger n8{"13"};
    cout << "Overload operator *" << endl;

    cout << n6 << " * " << n7 << " = " << (n6 * n7) << endl; //HugeInteger * HugeInteger
    cout << n6 << " * " << 3 << " = " << (n6 * 3) << endl; //HugeInteger * int
    cout << n6 << " * " << "5" << " = " << (n6 * "5") << endl; //HugeInteger * string

    cout << n6 << " / " << n7 << " = " << (n6 / n7) << endl; //HugeInteger / HugeInteger
    cout << n6 << " / " << 0 << " = " << (n6 / 0) << endl; //HugeInteger / int
    cout << n6 << " / " << "5" << " = " << (n6 / "5") << endl; //HugeInteger / string

    cout << "\n\nThe results of comparing n6 and n7 and n8:" << boolalpha
        << "\nn6 > n7 yields " << (n6 > n7)
        << "\nn6 != n7 yields " << (n6 != n7)
        << "\nn6 == n8 yields " << (n6 == n8)
        << "\nn8 < n7 yields " << (n8 < n7)
        << "\nn8 >= n6 yields " << (n8 >= n6)
        << "\nn6 <= n7 yields " << (n6 <= n7) << endl;

}