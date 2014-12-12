#include <iostream>
#include <prime_number_theorems.h>

using namespace std;

int main(int argc, char** argv)
{
  unsigned int number = 0;
  
  cout << "Testing for prime number: ";
  cin >> number;
  
  int result = isprime(number);
  cout <<  (result == 1 ? "Yes" : "No") << endl;
  
  return 0;
}