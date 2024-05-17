#pragma once

///
/// イージング関数を定義した名前空間
/// 参考 : https://easings.net/ja
///
namespace EasingFuction {
	//sin関数を利用した、徐々に加速するイージング
	inline double EasingInSine(double x_) noexcept;

	//sin関数を利用した、徐々に減速するイージング
	inline double EasingOutSine(double x_) noexcept;

	//sin関数を利用した、加速して減速するイージング
	inline double EasingInOutSine(double x_) noexcept;

	//2乗を利用した、徐々に加速するイージング
	inline double EasingInQuad(double x_) noexcept;

	//2乗を利用した、徐々に減速するイージング
	inline double EasingOutQuad(double x_) noexcept;

	//2乗を利用した、加速して減速するイージング
	inline double EasingInOutQuad(double x_) noexcept;

	//3乗を利用した、徐々に加速するイージング
	inline double EasingInQubic(double x_) noexcept;

	//3乗を利用した、徐々に減速するイージング
	inline double EasingOutQubic(double x_) noexcept;

	//3乗を利用した、加速して減速するイージング
	inline double EasingInOutQubic(double x_) noexcept;

	//4乗を利用した、徐々に加速するイージング
	inline double EasingInQuart(double x_) noexcept;

	//4乗を利用した、徐々に減速するイージング
	inline double EasingOutQuart(double x_) noexcept;

	//4乗を利用した、加速して減速するイージング
	inline double EasingInOutQuart(double x_) noexcept;

	//5乗を利用した、徐々に加速するイージング
	inline double EasingInQuint(double x_) noexcept;

	//5乗を利用した、徐々に減速するイージング
	inline double EasingOutQuint(double x_) noexcept;

	//5乗を利用した、加速して減速するイージング
	inline double EasingInOutQuint(double x_) noexcept;

	//指数を利用した、徐々に加速するイージング
	inline double EasingInExpo(double x_) noexcept;

	//指数を利用した、徐々に減速するイージング
	inline double EasingOutExpo(double x_) noexcept;

	//指数を利用した、加速して減速するイージング
	inline double EasingInOutExpo(double x_) noexcept;
	
}
