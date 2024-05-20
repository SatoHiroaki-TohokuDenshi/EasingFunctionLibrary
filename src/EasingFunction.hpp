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

	//4��𗘗p�����A���X�ɉ�������C�[�W���O
	inline double EasingInQuart(double x_) noexcept;

	//4��𗘗p�����A���X�Ɍ�������C�[�W���O
	inline double EasingOutQuart(double x_) noexcept;

	//4��𗘗p�����A�������Č�������C�[�W���O
	inline double EasingInOutQuart(double x_) noexcept;

	//5��𗘗p�����A���X�ɉ�������C�[�W���O
	inline double EasingInQuint(double x_) noexcept;

	//5��𗘗p�����A���X�Ɍ�������C�[�W���O
	inline double EasingOutQuint(double x_) noexcept;

	//5��𗘗p�����A�������Č�������C�[�W���O
	inline double EasingInOutQuint(double x_) noexcept;

	//�w���𗘗p�����A���X�ɉ�������C�[�W���O
	inline double EasingInExpo(double x_) noexcept;

	//�w���𗘗p�����A���X�Ɍ�������C�[�W���O
	inline double EasingOutExpo(double x_) noexcept;

	//�w���𗘗p�����A�������Č�������C�[�W���O
	inline double EasingInOutExpo(double x_) noexcept;

	//�~�𗘗p�����A���X�ɉ�������C�[�W���O
	inline double EasingInCirc(double x_) noexcept;

	//�~�𗘗p�����A���X�Ɍ�������C�[�W���O
	inline double EasingOutCirc(double x_) noexcept;

	//�~�𗘗p�����A�������Č�������C�[�W���O
	inline double EasingInOutCirc(double x_) noexcept;
	
	//�ŏ��ɏ����߂�C�[�W���O
	inline double EasingInBack(double x_) noexcept;

	//�Ō�ɍs���߂��Ă���߂�C�[�W���O
	inline double EasingOutBack(double x_) noexcept;

	//�����߂��āA�s���߂��Ă���߂�C�[�W���O
	inline double EasingInOutBack(double x_) noexcept;

	//�e���̂������̃C�[�W���O
	inline double EasingInElastic(double x_) noexcept;

	//�e���̂���I���̃C�[�W���O
	inline double EasingOutElastic(double x_) noexcept;

	//�e���̂������ƏI���̃C�[�W���O
	inline double EasingInOutElastic(double x_) noexcept;
}
