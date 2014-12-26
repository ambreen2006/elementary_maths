#include <prime_number_theorems.h>
#include<iostream>
#include <math.h>
#include <cstdlib>

bool isprime(unsigned int whole_number, unsigned int &divisor_num)
{
  
  if(whole_number == 0)
  {
    divisor_num = 0;
    return false;
  }
  
  if(whole_number == 1)
  {
    divisor_num = 1;
    return false;
  }
  
  if(whole_number == 2)
  {
    divisor_num = 2;
    return false;
  }
  
  if(whole_number % 2 == 0) 
  {
    divisor_num = whole_number / 2;
    return false;
  }
  
  
  bool result = true;
  unsigned int limit =  (unsigned int) sqrt(whole_number);
  for(unsigned int divisor = 3; divisor <= limit; divisor+=2)
  {
	if( whole_number % divisor == 0)
	{
	  divisor_num = divisor;
	  return false;
	}
  }
  
  return result;
}



void copyPrimeDivisors(long int whole_number, unsigned int **prime_divisors, size_t &length)
{
    std::cout << "Finding Prime Divisors" << std::endl;
    
    bool divisable = true;
    unsigned int divident = whole_number; 
    unsigned int count = 0;
    unsigned int * p = NULL;
    
    /*
     * Given prime number theorem. prime_divisors will be allocated size initially to be N/log(N)
     */
    
    length = whole_number / log(whole_number);
    p = (unsigned int *) malloc(sizeof(unsigned int)*length); 
    
   
    while(divisable)
    {
	unsigned int divisor; 
	divisable = false;
	if( !(isprime(divident, divisor)) )
	{
	   if(divisor == 1)
	   {
	       divisable = false;
	       break;
	   }
	   
	   divisable = true;
	   divident = divident / divisor;
	      
	   if((count+1) > length)
	   {
	    p =  (unsigned int *) realloc(p, (count+5)*sizeof(unsigned int));
	   }
	   
	   *(p+count) = divisor;
	   count++;
	   }
	else  
	{
	   if((count+1) > length)
	   {
	      p =  (unsigned int *) realloc(p, (count+5)*sizeof(unsigned int));
	   }
	   
	   *(p+count) = divident;
	   count++;
	}
	
     }
     
    p =  (unsigned int *) realloc(p, count*sizeof(unsigned int));
    length = count;
    
    *prime_divisors = p;
}
    
    
bool isOdd(unsigned int number)
{
  if((number % 2) == 0)
  {
    return false;
  }
  else 
  {
    return true;
  }
}

