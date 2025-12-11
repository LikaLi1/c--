#include <iostream>

int t = 0;

void p() {
	t++;
}

void l() {}

int main() {

	p();
	int l = 30;

	std::cout << "Global: " << t << std::endl;
	std::cout << "Local: " << l << std::endl;
}
