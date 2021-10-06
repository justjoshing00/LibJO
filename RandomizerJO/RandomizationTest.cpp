#include <iostream>
#include"Randomizer.h"

int main()
{
	xoroshiro128 rng;
	
	// i would like to constrain the results, but in general this seems fine
	// i also probably need to think a little harder about the seed for the generator
	for(int i = 0; i < 20; i++)
	{
		std::cout << rng.next() << std::endl;
	}
	return 0;
}
