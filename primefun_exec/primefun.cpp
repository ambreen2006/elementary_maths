#include <iostream>
#include <prime_number_theorems.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
  unsigned int number = 0;
  unsigned int divisor;
  
  cout << "Testing for prime number: ";
  cin >> number;
  
  int result = isprime(number, divisor);
  cout <<  (result == true ? "Yes" : "No") << endl;
 
  if( !result)
  {
    cout <<"it divides by " << divisor << endl;
    
    unsigned int *prime_divisors = NULL;
    size_t length;
    
    copyPrimeDivisors(number,&prime_divisors,length); 
    
    for(int index = 0; index < length ; index++)
    {
      cout << *(prime_divisors+index) << " ";
    }
    
    cout << endl;
    free(prime_divisors);

  }
    
  return 0;
}
