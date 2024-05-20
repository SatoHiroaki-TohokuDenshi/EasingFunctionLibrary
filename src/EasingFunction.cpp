#include "EasingFunction.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

namespace {
	constexpr double CONSTANT_EASING_BACK = 1.70158;
}

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

double EasingFuction::EasingInCirc(double x_) noexcept {
	return 1.0 - std::sqrt(1.0 - std::pow(x_, 2.0));
}

double EasingFuction::EasingOutCirc(double x_) noexcept {
	return std::sqrt(1.0 - std::pow(x_ - 1.0, 2.0));
}

double EasingFuction::EasingInOutCirc(double x_) noexcept {
	if (x_ < 0.5)	return (1.0 - std::sqrt(1.0 - std::pow(2.0 * x_, 2.0))) / 2.0;
	else			return (std::sqrt(1.0 - std::pow(-2.0 * x_ + 2.0, 2.0)) + 1.0) / 2.0;
}

double EasingFuction::EasingInBack(double x_) noexcept {
	constexpr double CONSTANT_IN_BACK = CONSTANT_EASING_BACK + 1.0;

	return CONSTANT_IN_BACK * std::pow(x_, 3.0) - CONSTANT_EASING_BACK * std::pow(x_, 2.0);
}

double EasingFuction::EasingOutBack(double x_) noexcept {
	constexpr double CONSTANT_OUT_BACK = CONSTANT_EASING_BACK + 1.0;

	return 1.0 + CONSTANT_OUT_BACK * std::pow(x_ - 1.0, 3.0) + CONSTANT_EASING_BACK * std::pow(x_ - 1.0, 2.0);
}

double EasingFuction::EasingInOutBack(double x_) noexcept {
	constexpr double CONSTANT_INOUT_BACK = CONSTANT_EASING_BACK * 1.525;

	if (x_ < 0.5)	return (std::pow(2.0 * x_, 2.0) * ((CONSTANT_INOUT_BACK + 1.0) * 2.0 * x_ - CONSTANT_INOUT_BACK)) / 2.0;
	else			return (std::pow(2.0 * x_ - 2.0, 2.0) * ((CONSTANT_INOUT_BACK + 1.0) * (x_ * 2.0 - 2.0) + CONSTANT_INOUT_BACK) + 2.0) / 2.0;
}

double EasingFuction::EasingInElastic(double x_) noexcept {
	constexpr double CONSTANT_IN_ELASTIC = (2.0 * M_PI) / 3.0;

	if (x_ == 0.0)		return 0.0;
	else if (x_ == 1.0)	return 1.0;
	else				return -std::pow(2.0, 10.0 * x_ - 10.0) * std::sin((x_ * 10.0 - 10.75) * CONSTANT_IN_ELASTIC);
}

double EasingFuction::EasingOutElastic(double x_) noexcept {
	constexpr double CONSTANT_OUT_ELASTIC = (2.0 * M_PI) / 3.0;

	if (x_ == 0.0)		return 0.0;
	else if (x_ == 1.0)	return 1.0;
	else				return std::pow(2.0, -10.0 * x_) * std::sin((x_ * 10.0 - 0.75) * CONSTANT_OUT_ELASTIC) + 1.0;
}

double EasingFuction::EasingInOutElastic(double x_) noexcept {
	constexpr double CONSTANT_INOUT_ELASTIC = (2.0 * M_PI) / 4.5;

	if (x_ == 0.0)		return 0.0;
	else if (x_ == 1.0)	return 1.0;
	else if (x_ < 0.5)	return -(std::pow(2.0, 20.0 * x_ - 10.0) * std::sin((20.0 * x_ - 11.125) * CONSTANT_INOUT_ELASTIC)) / 2.0;
	else				return (std::pow(2.0, -20.0 * x_ + 10.0) * std::sin((20.0 * x_ - 11.125) * CONSTANT_INOUT_ELASTIC)) / 2.0 + 1.0;
}
