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

double EasingFuction::EasingInQuad(double x_) noexcept {
	return std::pow(x_, 2.0);
}

double EasingFuction::EasingOutQuad(double x_) noexcept {
	return 1 - std::pow(1.0 - x_, 2.0);
}

double EasingFuction::EasingInOutQuad(double x_) noexcept {
	if (x_ < 0.5)	return 2.0 * std::pow(x_, 2.0);
	else			return 1 - std::pow(-2.0 * x_ + 2.0, 2.0) / 2.0;
}

double EasingFuction::EasingInQubic(double x_) noexcept {
	return std::pow(x_, 3.0);
}

double EasingFuction::EasingOutQubic(double x_) noexcept {
	return 1 - std::pow(1.0 - x_, 3.0);
}

double EasingFuction::EasingInOutQubic(double x_) noexcept {
	if (x_ < 0.5)	return 4.0 * std::pow(x_, 3.0);
	else			return 1 - std::pow(-2.0 * x_ + 2.0, 3.0) / 2.0;
}
