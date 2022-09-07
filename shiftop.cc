// left shit and right shift

// left shift : shift all the bits by 1 place  to the left

//      5<<1 here 5 is left shifted by 1 place
//      3<<2 here 3 is left shifted by 2 place

// for lshift and right shift in positive numbers ,padding used is 0

// for negative numbers ..padding in compiler dependent

// #include <iostream>
// using namespace std;
// int main()
// {

//     cout << "17/2 is ";
//     cout << (17 >> 1) << endl;

//     cout << "17/2*2 is ";
//     cout << (17 >> 2) << endl;

//     cout << "19*2 is ";
//     cout << (19 << 1) << endl;

//     cout << "21*4 is ";
//     cout << (21 << 2) << endl;

//     return 0;
// }

/*increment and decrement operators*/

#include <iostream>
using namespace std;
int main()
{

    int i = 2;
    cout << "i++ : " << i++ << endl;
    cout << "++i : " << ++i << endl;
    cout << "--i : " << --i << endl;
    cout << "i-- : " << i-- << endl;

    return 0;
}