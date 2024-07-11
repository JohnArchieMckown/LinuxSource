#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <assert.h>

class Mine {
	public:

	Mine() {
		std::cout << "Mine() constructor" << std::endl;
//		m_mine = std::make_unique<Mine>()
	}

	virtual ~Mine() {
		std::cout << "Mine() destructor" << std::endl;
	}

	Mine& operator=(const Mine& lhs) {
		std::cout << "Mine() operator=" << std::endl;
		if (this == &lhs) {
			return *this;
		}
		this->m_mine = lhs.m_mine;
		return *this ;
	}

	Mine(const Mine& rhs) {
		std::cout << "Mine() copy constructor" << std::endl;
		m_mine = rhs.m_mine;

	}
	
//	std::unique_ptr<int> m_mine;
	int m_mine;
};

int main (int argc, char *argv[], char *envp[]) {
	int index=0;
	std::vector<std::string> arguments(argv, argv+argc);

	std::cout << "There are " + std::to_string(argc) + " arguments" << '\n';
	for(std::string argument : arguments) { 
		std::cout << std::to_string(index++) + ":\t" +argument << '\n'; 
	}
	
	Mine x1; // = new Mine();
	x1.m_mine = 1234;
	Mine x2; // = new Mine();
        x2 = x1;
	x2.m_mine = 4321;
	Mine x3 = x2;
//	assert(&x2->m_mine != &x1->m_mine);

	std::cout << "x1:" << x1.m_mine << " " << &x1.m_mine << " " << &x1 << std::endl;
	std::cout << "x2:" << x2.m_mine << " " << &x2.m_mine << " " << &x2 << std::endl;
	std::cout << "x3:" << x3.m_mine << " " << &x3.m_mine << " " << &x3 << std::endl;
//	delete x1;
//	delete x2;

	return 0;
}
