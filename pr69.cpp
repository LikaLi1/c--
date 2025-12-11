#include <iostream>

int q(int a) {
	return a * a;
}

auto n(int a) -> int {
	return q(a);
}

int result = n(4);

int main() {
	std::cout << result << std::endl;
}
