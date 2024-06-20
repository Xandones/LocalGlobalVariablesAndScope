#include <iostream>

// Scope of a variable: where a variable is acessible (globally or locally) and also its lifetime.

long long int X = LONG_MAX; // Global variable, acessible through all CPP file.

int main()
{
	int I;
	/* This variable is acessible through all main function.
	If I create another function I can only access this value if I send it to the function as a parameter. */

	std::cout << "Global varible value = " << X << "\n";

	for (I = 0; I < 5; I++)
	{
		int J = I + 2; // This variable is only acessible inside the for loop.
		std::cout <<"i = " << I << " | j = " << J << " | I + J + X = " << I + J + X << "\n";
	} /* Despite the maximum value of a long long int is declared, the sum(I + J + X) will still show its result
	  because it's not inside a variable */
	std::cout << "Final I value = " << I << "\n";
	// std::cout << "Final J value = " << j << "\n"; This line is unable to show J value because it no longer exists.
	std::cout << "Global varible value = " << X << "\n";
}