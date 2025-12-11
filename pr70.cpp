#include <iostream>

int q(int a, int b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}

auto n(int a, int b) -> int {
	return q(a, b);
}

int result = n(9, 2);

int main() {
	std::cout << result << std::endl;
}
