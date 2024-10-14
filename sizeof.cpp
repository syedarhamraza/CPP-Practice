#include <iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // int = 4 bytes,  numbers = 4(int size)*5(number of elements)= 20
    cout << "Output in bytes: " << sizeof(myNumbers) << "Bytes" << endl;
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << "Output in number of elements: " << getArrayLength << endl;
    return 0;
}
