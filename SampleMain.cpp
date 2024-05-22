#include <iostream>
#include "src/EasingFunction.hpp"

int main() {
	for (double it = 0.0; it < 1.0; it += 0.01) {
		double tmp = EasingFuction::EasingInOutBounce(it);
		tmp *= 100.0;
		for (int i = 0; i < std::round(tmp); i++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	return 0;
}