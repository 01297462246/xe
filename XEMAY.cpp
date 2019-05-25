#include "XEMAY.h"
#include"iostream"
using namespace std;
XEMAY::XEMAY()
{
	m_sBienSo = "";
	m_fLoaiXe = 0;
}
XEMAY::~XEMAY()
{
}
XEMAY::XEMAY(string sBienSo, float fLoaiXe)
{
	this->m_sBienSo = sBienSo;
	this->m_fLoaiXe = fLoaiXe;
}
XEMAY::XEMAY(string sBienSo, float fLoaiXe, string sMaLoai, string sHoTen, float fGioThue) :XE(sMaLoai, sHoTen, fGioThue)
{
	this->m_sBienSo = sBienSo;
	this->m_fLoaiXe = fLoaiXe;
}
string XEMAY::getBienSo()
{
	return this->m_sBienSo;
}
float XEMAY::getLoaiXe()
{
	return this->m_fLoaiXe;
}
void XEMAY::setBienSo(string sBienSo)
{
	this->m_sBienSo = sBienSo;
}
void XEMAY::setLoaiXe(float fLoaiXe)
{
	this->m_fLoaiXe = fLoaiXe;
}
string XEMAY::hienthi()
{
	return "May";
}
double XEMAY::TinhTienThue()
{
	if (m_fLoaiXe == 100)
		return 15000 * getGioThue();
	else
		return 20000 * getGioThue();
}
void XEMAY::Xuat()
{
	cout << "Xe " << hienthi() << endl;
	cout << "Ma loai :" << m_sMaLoai << endl;
	cout << "Ho Ten :" << m_sHoTen << endl;
	cout << "So Gio Thue :" << m_fGioThue << endl;
	cout << "Bien so :" << m_sBienSo << endl;
	cout << "Loai Xe :" << m_fLoaiXe << endl;
	cout << "Tien thue xe may : " << TinhTienThue() << endl;
}