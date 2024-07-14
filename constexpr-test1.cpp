#include <iostream>
#include <cassert>
#include <cstdint>

constexpr size_t fibonacci(size_t n) {
	  size_t fib1=0;
	  size_t fib2=1;
	  size_t new_fib2=0;
	  assert(n > 0); // well, size_t cannot be negative, but "why not?"
	  
	  // Why does the code below end at n-1?
	  // Because the first two Fibonacci numbers are 
	  // the initial values of "fib1" and "fib2".
	  // And "new_fib2" is set to 0 also because that is
	  // the first Fibanacci number. So the first Fibonacci
	  // number is set above and we don't need to loop in that case.
	  //
	  // Oh, yes, the "cout" output being spread across multiple 
	  // lines is because I don't like to go beyond column 72.
	  // Why? I learned Fortran in the 1970s on punched cards,
	  // and the compiler left 73-80 for "sequence numbers" in
	  // case you dropped the deck & had a card sorter handy.
	  // I have many other coding oddities being 71.
	  for(size_t idx=1;idx < n-1;idx++) { 
/*		std::cout<<"loop "<<idx<<" before fib1="<<fib1
			<< " before fib2=" << fib2 
			<< " before new_fib2="<<new_fib2
			<<std::endl
			; */
	  	new_fib2 = fib1 + fib2;
	  	fib1 = fib2;
		fib2 = new_fib2;
/*		std::cout<<"loop "<<idx<<" after fib1="<<fib1
			<< " after fib2=" << fib2 
			<< " before new_fib2="<<new_fib2
			<<std::endl
			; */
	  }
	  return new_fib2;
}


int main(int argc, char** argv, char** envp) {
	constexpr size_t fib10 = fibonacci(10);
	std::cout << fib10 << std::endl;
}
