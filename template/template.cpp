#include <iostream>
#include <array>

using namespace std;

int main (int argc, char *argv[], char *envp[]) {
	int index;

	cout << "There are "; cout << argc; cout << " arguments."; cout <<endl;
	for (index=0; index<argc; index++) {
		cout << argv[index]; cout << endl;
		}
	return 0;
}
