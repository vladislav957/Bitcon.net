#include<Bitcon.org.tlog/>
#include<.git/hooks/>
#include<.vs/Bitcon.org/FileContentIndex/>
#include<.vs/Bitcon.org/v17/ipch/AutoPCH/d45312fef46449e2/>
#include<.vs/Bitcon.org/v17/TestStore/0/>
#include<.vs/Bitcon.org/v17/TestStore/1/>


class ShiftRegister {
private:
	unsigned int data;

public:
	ShiftRegister() {
		data = 0;
	}

	void shiftRight(bool input) {
		data = (data >> 1) | (input << 7);
	}

	void printDate() {
		for (int i = 7; i >= 0; i--) {
			std::cout << ((data >> i) & 1);
		}

		std::cout << std::endl;
	}

};

int main() {
	ShiftRegister reg;

	reg.shiftRight(1);
	reg.printDate();

	reg.shiftRight(0);
	reg.printDate();

	return 0;
}