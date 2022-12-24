#include "pch.h"
#include "Unit.h"
#include "ResMgr.h"
#include "Animator.h"
#include "Animation.h"
#include "Bullet.h"

Unit::Unit() :
	m_iAttackPower(5),
	m_iAttackSpeed(1)
{
	Image* pImg = ResMgr::GetInst()->ImgLoad(L"", L"");

	CreateAnimator();
	//���� �ִϸ��̼� ����
	GetAnimator()->CreateAnimation(L"UnitAttack", pImg, Vec2(0.f, 0.f), Vec2(0.f, 0.f), Vec2(0.f, 0.f), 0, 0.f);
}

Unit::~Unit()
{
}

void Unit::Attack()
{
	GetAnimator()->Play(L"UnitAttack", false);
	Vec2 vBulletPos = GetPos();
	vBulletPos.y -= GetScale().y / 2.f;

	Bullet* pBullet = new Bullet;
	pBullet->SetName(L"Bullet_Unit");
	pBullet->SetPos(vBulletPos);
	pBullet->SetScale(Vec2(25.f, 25.f));
	pBullet->SetDir(Vec2(1.f, 0.f));
	CreateObject(pBullet, GROUP_TYPE::BULLET_PLAYER);

	//TODO: Unit Bullet ����
}

void Unit::Update()
{
	//���� ���ݰŸ� �ȿ� ������
	if (1)
	{
		Attack();
	}
}

void Unit::Render(HDC _dc)
{
	Component_Render(_dc);
}
