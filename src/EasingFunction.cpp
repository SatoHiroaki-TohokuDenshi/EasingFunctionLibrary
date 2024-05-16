#include "EasingFunction.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

double EasingFuction::EasingInSine(double x_) noexcept {
	return 1.0 - std::cos((x_ * M_PI) / 2.0);
}

double EasingFuction::EasingOutSine(double x_) noexcept {
	return std::sin((x_ * M_PI) / 2.0);
}

double EasingFuction::EasingInOutSine(double x_) noexcept {
	return -(std::cos(M_PI * x_) - 1.0) / 2.0;
}
