#include "pch.h"
#include "Money.h"

Money::Money() :
	m_iMoney(0)
{

}

Money::~Money()
{

}

void Money::AddMoney(int money)
{
	m_iMoney += money;
}

bool Money::UseMoney(int money)
{
	if (money > m_iMoney)
		return false;
	else
		m_iMoney -= money;

	return true;
}
