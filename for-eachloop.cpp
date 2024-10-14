#include <iostream>
using namespace std;

int main()
{
  // Create an array of integers
  int myNumbers[5] = {10, 20, 30, 40, 50};

  // Loop through integers
  for (int loop : myNumbers)
  {
    cout << loop << "\n";
  }

  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

  // Loop through strings
  for (string car : cars)
  {
    cout << car << "\n";
  }
  return 0;
}
