#include <iostream>
using namespace std;

int main()
{
  int myNumbers[14] = {10, 20, 30, 40, 50, 12, 12, 12, 12, 12, 12, 12, 12, 12};
  int SizeOfMyNumbers = sizeof(myNumbers) / sizeof(myNumbers[0]);
  for (int i = 0; i < SizeOfMyNumbers; i++)
  {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}
