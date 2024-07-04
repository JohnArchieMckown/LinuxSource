#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <cassert>

int main (int argc, char *argv[], char *envp[]) {
	int index=0;
	std::vector<std::string> arguments(argv, argv+argc);

	std::cout << "There are " + std::to_string(argc) + " arguments" << '\n';
	for(std::string argument : arguments) { 
		std::cout << std::to_string(index++) + ":\t" +argument << '\n'; 
	}
	return 0;
}
