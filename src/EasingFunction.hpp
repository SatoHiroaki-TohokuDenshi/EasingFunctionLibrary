#pragma once

///
/// �C�[�W���O�֐����`�������O���
/// �Q�l : https://easings.net/ja
///
namespace EasingFuction {
	//sin�֐��𗘗p�����A���X�ɉ�������C�[�W���O
	inline double EasingInSine(double x_) noexcept;

	//sin�֐��𗘗p�����A���X�Ɍ�������C�[�W���O
	inline double EasingOutSine(double x_) noexcept;

	//sin�֐��𗘗p�����A�������Č�������C�[�W���O
	inline double EasingInOutSine(double x_) noexcept;

	//2��𗘗p�����A���X�ɉ�������C�[�W���O
	inline double EasingInQuad(double x_) noexcept;

	//2��𗘗p�����A���X�Ɍ�������C�[�W���O
	inline double EasingOutQuad(double x_) noexcept;

	//2��𗘗p�����A�������Č�������C�[�W���O
	inline double EasingInOutQuad(double x_) noexcept;

	//3��𗘗p�����A���X�ɉ�������C�[�W���O
	inline double EasingInQubic(double x_) noexcept;

	//3��𗘗p�����A���X�Ɍ�������C�[�W���O
	inline double EasingOutQubic(double x_) noexcept;

	//3��𗘗p�����A�������Č�������C�[�W���O
	inline double EasingInOutQubic(double x_) noexcept;

}
