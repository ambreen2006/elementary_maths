#include <prime_number_theorems.h>
#include <math.h>

int isprime(unsigned int whole_number)
{
  
  if(whole_number == 0)
  {
    return 0;
  }
  
  if(whole_number == 1 || whole_number == 2)
  {
    return 1;
  }
  
  if(whole_number % 2 == 0)
  {
    return 0;
  }
  
  int result = 1;
  unsigned int limit =  (unsigned int) sqrt(whole_number);
  for(unsigned int divisor = 3; divisor <= limit; divisor+=2)
  {
	if( whole_number % divisor == 0)
	{
	  return 0;
	}
  }
  
  return result;
}
