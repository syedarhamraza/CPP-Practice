#include <iostream>
#include <string>
using namespace std;

int main()
{
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++)
  {
    cout << cars[i] << "\n";
  }
  cout << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << i << " = " << cars[i] << "\n";
  }
  return 0;
}
