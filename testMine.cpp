#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <assert.h>

#include "Mine.hpp"

int main (int argc, char *argv[], char *envp[]) {
	int index=0;
	std::vector<std::string> arguments(argv, argv+argc);

    std::cout << "There are " << argc << " arguments\n";
    for (std::string argument : arguments) {
        std::cout << index++ << ":\t" + argument << '\n';
    }

    Mine x1; // = new Mine();
	x1.One = 1;
	x1.Two = 2;
	Mine x2; // = new Mine();
        x2 = x1;
	x2.One = 4321;
	Mine x3 = x2;

	std::cout << "x1.One:" << x1.One << " " << &x1.One << " " << &x1 << std::endl;
	std::cout << "x1.Two:" << x1.Two << " " << &x1.Two << " " << &x1 << std::endl;

	std::cout << "x2.One:" << x2.One << " " << &x2.One << " " << &x2 << std::endl;
	std::cout << "x2.Two:" << x2.Two << " " << &x2.Two << " " << &x2 << std::endl;

	std::cout << "x3.One:" << x3.One << " " << &x3.One << " " << &x3 << std::endl;
	std::cout << "x3.Two:" << x3.Two << " " << &x3.Two << " " << &x3 << std::endl;

	return 0;
}
