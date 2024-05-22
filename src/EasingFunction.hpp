#pragma once

///
/// �C�[�W���O�֐����`�������O���
/// �Q�l : https://easings.net/ja
///
namespace EasingFuction {
	//sin�֐��𗘗p�����A���X�ɉ�������C�[�W���O
	double EasingInSine(double x_) noexcept;

	//sin�֐��𗘗p�����A���X�Ɍ�������C�[�W���O
	double EasingOutSine(double x_) noexcept;

	//sin�֐��𗘗p�����A�������Č�������C�[�W���O
	double EasingInOutSine(double x_) noexcept;

	//2��𗘗p�����A���X�ɉ�������C�[�W���O
	double EasingInQuad(double x_) noexcept;

	//2��𗘗p�����A���X�Ɍ�������C�[�W���O
	double EasingOutQuad(double x_) noexcept;

	//2��𗘗p�����A�������Č�������C�[�W���O
	double EasingInOutQuad(double x_) noexcept;

	//3��𗘗p�����A���X�ɉ�������C�[�W���O
	double EasingInQubic(double x_) noexcept;

	//3��𗘗p�����A���X�Ɍ�������C�[�W���O
	double EasingOutQubic(double x_) noexcept;

	//3��𗘗p�����A�������Č�������C�[�W���O
	double EasingInOutQubic(double x_) noexcept;

	//4��𗘗p�����A���X�ɉ�������C�[�W���O
	double EasingInQuart(double x_) noexcept;

	//4��𗘗p�����A���X�Ɍ�������C�[�W���O
	double EasingOutQuart(double x_) noexcept;

	//4��𗘗p�����A�������Č�������C�[�W���O
	double EasingInOutQuart(double x_) noexcept;

	//5��𗘗p�����A���X�ɉ�������C�[�W���O
	double EasingInQuint(double x_) noexcept;

	//5��𗘗p�����A���X�Ɍ�������C�[�W���O
	double EasingOutQuint(double x_) noexcept;

	//5��𗘗p�����A�������Č�������C�[�W���O
	double EasingInOutQuint(double x_) noexcept;

	//�w���𗘗p�����A���X�ɉ�������C�[�W���O
	double EasingInExpo(double x_) noexcept;

	//�w���𗘗p�����A���X�Ɍ�������C�[�W���O
	double EasingOutExpo(double x_) noexcept;

	//�w���𗘗p�����A�������Č�������C�[�W���O
	double EasingInOutExpo(double x_) noexcept;

	//�~�𗘗p�����A���X�ɉ�������C�[�W���O
	double EasingInCirc(double x_) noexcept;

	//�~�𗘗p�����A���X�Ɍ�������C�[�W���O
	double EasingOutCirc(double x_) noexcept;

	//�~�𗘗p�����A�������Č�������C�[�W���O
	double EasingInOutCirc(double x_) noexcept;
	
	//�ŏ��ɏ����߂�C�[�W���O
	double EasingInBack(double x_) noexcept;

	//�Ō�ɍs���߂��Ă���߂�C�[�W���O
	double EasingOutBack(double x_) noexcept;

	//�����߂��āA�s���߂��Ă���߂�C�[�W���O
	double EasingInOutBack(double x_) noexcept;

	//�e���̂������̃C�[�W���O
	double EasingInElastic(double x_) noexcept;

	//�e���̂���I���̃C�[�W���O
	double EasingOutElastic(double x_) noexcept;

	//�e���̂������ƏI���̃C�[�W���O
	double EasingInOutElastic(double x_) noexcept;

	//�e�ޓ����̓���̂̃C�[�W���O
	double EasingInBounce(double x_) noexcept;

	//�e�ޓ����̏I���̃C�[�W���O
	double EasingOutBounce(double x_) noexcept;

	//�e�ޓ����̓���ƏI���̃C�[�W���O
	double EasingInOutBounce(double x_) noexcept;
}
