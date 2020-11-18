#include <iostream>

int	main()
{
	int		numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;
	// the reference will be pointing to the variable
	// from this point on, I can't change what my reference is pointing to

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	return (0);
}
