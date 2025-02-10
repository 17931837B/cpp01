#include <iostream>
#include <string>
#include "Harl.hpp"

int main()
{
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("NOTFOUND");
	return (0);
}
