#include <iostream>
#include "Mine.hpp"

Mine::Mine() {
		std::cout << "Mine() construction\n";
	}

	Mine::~Mine() {
		std::cout << "Mine() destructor\n" ;
	}

Mine& Mine::operator=(const Mine& lhs) {
                std::cout << "Mine() operator=\n" ;
                if (this == &lhs) {
                        return *this;
                }
                One = lhs.One;
		Two = lhs.Two;
                return *this ;

	}

Mine::Mine(const Mine& rhs) {
                std::cout << "Mine() copy constructor\n" ;
                One = rhs.One;
		Two = rhs.Two;
	}

	void Mine::SetOne(int value) {One=value;}

	void Mine::SetTwo(int value) {Two=value;}

	int Mine::GetOne() {return One;}

	int Mine::GetTwo() {return Two;}

	int One = 0;
	int Two = 0;

