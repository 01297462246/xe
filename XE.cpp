#include "XE.h"
#include "vector"
#include "string"
using namespace std;
XE::XE()
{
	m_sMaLoai = "";
	m_sHoTen = "";
	m_fGioThue = 0;
}
XE::~XE()
{
}
XE::XE(string sMaLoai, string sHoTen, float fGioThue)
{
	this->m_sMaLoai = sMaLoai;
	this->m_sHoTen = sHoTen;
	this->m_fGioThue = fGioThue;
}
string XE::getMaLoai()
{
	return this->m_sMaLoai;
}
string XE::getHoTen()
{
	return this->m_sHoTen;
}
float XE::getGioThue()
{
	return this->m_fGioThue;
}
void XE::setXe(string sMaLoai, string sHoTen, float fGioThue)
{
	this->m_sMaLoai = sMaLoai;
	this->m_sHoTen = sHoTen;
	this->m_fGioThue = fGioThue;
}
void XE::setMaLoai(string sMaLoai)
{
	this->m_sMaLoai = sMaLoai;
}
void XE::setHoTen(string sHoTen)
{
	this->m_sHoTen = sHoTen;
}
void XE::setGioThue(float fGioThue)
{
	this->m_fGioThue = fGioThue;
}