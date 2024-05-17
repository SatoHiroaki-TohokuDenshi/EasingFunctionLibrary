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
	return 1.0 - std::pow(1.0 - x_, 2.0);
}

double EasingFuction::EasingInOutQuad(double x_) noexcept {
	if (x_ < 0.5)	return 2.0 * std::pow(x_, 2.0);
	else			return 1.0 - std::pow(-2.0 * x_ + 2.0, 2.0) / 2.0;
}

double EasingFuction::EasingInQubic(double x_) noexcept {
	return std::pow(x_, 3.0);
}

double EasingFuction::EasingOutQubic(double x_) noexcept {
	return 1.0 - std::pow(1.0 - x_, 3.0);
}

double EasingFuction::EasingInOutQubic(double x_) noexcept {
	if (x_ < 0.5)	return 4.0 * std::pow(x_, 3.0);
	else			return 1.0 - std::pow(-2.0 * x_ + 2.0, 3.0) / 2.0;
}

double EasingFuction::EasingInQuart(double x_) noexcept {
	return std::pow(x_, 4.0);
}

double EasingFuction::EasingOutQuart(double x_) noexcept {
	return 1.0 - std::pow(1.0 - x_, 4.0);
}

double EasingFuction::EasingInOutQuart(double x_) noexcept {
	if (x_ < 0.5)	return 8.0 * std::pow(x_, 4.0);
	else			return 1.0 - std::pow(-2.0 * x_ + 2.0, 4.0) / 2.0;
}

double EasingFuction::EasingInQuint(double x_) noexcept {
	return std::pow(x_, 5.0);
}

double EasingFuction::EasingOutQuint(double x_) noexcept {
	return 1.0 - std::pow(1.0 - x_, 5.0);
}

double EasingFuction::EasingInOutQuint(double x_) noexcept {
	if (x_ < 0.5)	return 16.0 * std::pow(x_, 5.0);
	else			return 1.0 - std::pow(-2.0 * x_ + 2.0, 5.0) / 2.0;
}

double EasingFuction::EasingInExpo(double x_) noexcept {
	if (x_ == 0.0)	return 0.0;
	else			return std::pow(2.0, 10.0 * x_ - 10.0);
}

double EasingFuction::EasingOutExpo(double x_) noexcept {
	if (x_ == 0)	return 1.0;
	else			return 1.0 - std::pow(2.0, -10.0 * x_);
}

double EasingFuction::EasingInOutExpo(double x_) noexcept {
	if (x_ == 0.0)		return 0.0;
	else if (x_ == 1.0)	return 1.0;
	else if (x_ < 0.5)	return std::pow(2.0, 20.0 * x_ - 10.0) / 2.0;
	else				return (2.0 - std::pow(2.0, -20.0 * x_ + 10.0)) / 2.0;
}
