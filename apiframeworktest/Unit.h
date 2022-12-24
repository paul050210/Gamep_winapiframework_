#pragma once
#include "Object.h"

class Image;
class Unit :
	public Object
{
private:
	Image* m_pImage;
	int m_iAttackPower;   //���ݷ�
	float m_iAttackSpeed; //1�ʿ� ��� �����ϴ°�

public:
	Unit();
	~Unit();
private:
	void Attack();
	CLONE(Unit);
public:
	void Update() override;
	void Render(HDC _dc) override;
};

