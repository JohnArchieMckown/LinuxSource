#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

int main (int argc, char *argv[], char *envp[]) {
	int index=0;
	vector<string> arguments(argv, argv+argc);

	cout << "There are " + to_string(argc) + " arguments"; cout << endl;
	for(string argument : arguments) { 
		cout << to_string(index++) + ":\t" +argument; 
		cout << endl; 
	}
	return 0;
}
