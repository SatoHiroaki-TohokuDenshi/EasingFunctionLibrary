#pragma once

///
/// イージング関数を定義した名前空間
/// 参考 : https://easings.net/ja
///
namespace EasingFuction {
	//sin関数を利用した、徐々に加速するイージング
	double EasingInSine(double x_) noexcept;

	//sin関数を利用した、徐々に減速するイージング
	double EasingOutSine(double x_) noexcept;

	//sin関数を利用した、加速して減速するイージング
	double EasingInOutSine(double x_) noexcept;

	//2乗を利用した、徐々に加速するイージング
	double EasingInQuad(double x_) noexcept;

	//2乗を利用した、徐々に減速するイージング
	double EasingOutQuad(double x_) noexcept;

	//2乗を利用した、加速して減速するイージング
	double EasingInOutQuad(double x_) noexcept;

	//3乗を利用した、徐々に加速するイージング
	double EasingInQubic(double x_) noexcept;

	//3乗を利用した、徐々に減速するイージング
	double EasingOutQubic(double x_) noexcept;

	//3乗を利用した、加速して減速するイージング
	double EasingInOutQubic(double x_) noexcept;

	//4乗を利用した、徐々に加速するイージング
	double EasingInQuart(double x_) noexcept;

	//4乗を利用した、徐々に減速するイージング
	double EasingOutQuart(double x_) noexcept;

	//4乗を利用した、加速して減速するイージング
	double EasingInOutQuart(double x_) noexcept;

	//5乗を利用した、徐々に加速するイージング
	double EasingInQuint(double x_) noexcept;

	//5乗を利用した、徐々に減速するイージング
	double EasingOutQuint(double x_) noexcept;

	//5乗を利用した、加速して減速するイージング
	double EasingInOutQuint(double x_) noexcept;

	//指数を利用した、徐々に加速するイージング
	double EasingInExpo(double x_) noexcept;

	//指数を利用した、徐々に減速するイージング
	double EasingOutExpo(double x_) noexcept;

	//指数を利用した、加速して減速するイージング
	double EasingInOutExpo(double x_) noexcept;

	//円を利用した、徐々に加速するイージング
	double EasingInCirc(double x_) noexcept;

	//円を利用した、徐々に減速するイージング
	double EasingOutCirc(double x_) noexcept;

	//円を利用した、加速して減速するイージング
	double EasingInOutCirc(double x_) noexcept;
	
	//最初に少し戻るイージング
	double EasingInBack(double x_) noexcept;

	//最後に行き過ぎてから戻るイージング
	double EasingOutBack(double x_) noexcept;

	//少し戻って、行き過ぎてから戻るイージング
	double EasingInOutBack(double x_) noexcept;

	//弾性のある入りのイージング
	double EasingInElastic(double x_) noexcept;

	//弾性のある終わりのイージング
	double EasingOutElastic(double x_) noexcept;

	//弾性のある入りと終わりのイージング
	double EasingInOutElastic(double x_) noexcept;

	//弾む動きの入りののイージング
	double EasingInBounce(double x_) noexcept;

	//弾む動きの終わりのイージング
	double EasingOutBounce(double x_) noexcept;

	//弾む動きの入りと終わりのイージング
	double EasingInOutBounce(double x_) noexcept;
}
