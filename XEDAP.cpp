#include "XEDAP.h"
#include"iostream"
using namespace std;
XEDAP::XEDAP()
{
	m_sMaXe = "";
	m_fTaiTrong = 0;
}
XEDAP::~XEDAP()
{
}
XEDAP::XEDAP(string sMaXe, float fTaiTrong)
{
	this->m_sMaXe = sMaXe;
	this->m_fTaiTrong = fTaiTrong;
}
XEDAP::XEDAP(string sMaXe, float fTaiTrong, string sMaLoai, string sHoTen, float fGioThue) :XE(sMaLoai, sHoTen, fGioThue)
{
	this->m_sMaXe = sMaXe;
	this->m_fTaiTrong = fTaiTrong;
}
string XEDAP::getMaXe()
{
	return this->m_sMaXe;
}
float XEDAP::getTaiTrong()
{
	return this->m_fTaiTrong;
}
void XEDAP::setMaXe(string sMaXe)
{
	this->m_sMaXe = sMaXe;
}
void XEDAP::setTaiTrong(float fTaiTrong)
{
	this->m_fTaiTrong = fTaiTrong;
}
double XEDAP::TinhTienThue()
{
	float giothue = getGioThue();
	if (giothue == 1)
		return 10000;
	else
	{
		return 10000 + 8000 * (giothue - 1);
	}
}
string XEDAP::hienthi()
{
	return "dap";
}
void XEDAP::Xuat()
{
	cout << "Xe " << hienthi() << endl;
	cout << "Ma loai :" << m_sMaLoai << endl;
	cout << "Ho Ten :" << m_sHoTen << endl;
	cout << "So Gio Thue :" << m_fGioThue << endl;
	cout << "Ma xe :" << m_sMaXe << endl;
	cout << "Tai trong :" << m_fTaiTrong << endl;
	cout << "Tien thue xe dap:" << TinhTienThue() << endl;
}