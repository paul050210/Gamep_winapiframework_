#pragma once
class Money
{
public:
	Money();
	~Money();
private:
	int m_iMoney;
private:
	int GetMoney() { return m_iMoney; }
	void AddMoney(int money);
	bool UseMoney(int money);
};

