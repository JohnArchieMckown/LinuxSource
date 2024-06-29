#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

int main (int argc, char *argv[], char *envp[]) {
	int index;
	vector<string> arguments(argv, argv+argc);

	assert(arguments.size() == argc);

	cout << "There are "; cout << argc; cout << " arguments"; cout <<endl;
//	for (index=0; index<argc; index++) {
//		cout << index + ":" + argv[index]; cout << endl;
//		}

	assert(arguments.size() == argc);

//	for(index=0; index<argc; index++) { arguments.push_back(argv[index]); }

	for(string argument : arguments) { cout << argument <<endl; }
	return 0;
}
