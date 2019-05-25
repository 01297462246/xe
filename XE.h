#pragma once
#ifndef Xe_h
#define Xe_h
#include "vector"
#include "string"
using namespace std;
class XE
{
protected:
	string m_sMaLoai;
	string m_sHoTen;
	float m_fGioThue;
public:
	XE();
	virtual ~XE();
	XE(string sMaLoai, string sHoTen, float fGioThue);
	string getMaLoai();
	string getHoTen();
	float getGioThue();
	void setMaLoai(string sMaLoai);
	void setHoTen(string sHoTen);
	void setGioThue(float fGioThue);
	void setXe(string sMaLoai, string sHoTen, float fGioThue);
	virtual void Xuat() = 0;
	virtual double TinhTienThue() = 0;
	virtual string hienthi() = 0;
};
#endif // !Xe_h
