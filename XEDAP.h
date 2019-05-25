#pragma once
#include "XE.h"
#ifndef  XeDap_h
#define XeDap_h
class XEDAP :public XE
{
private:
	string m_sMaXe;
	float m_fTaiTrong;
public:
	XEDAP();
	virtual ~XEDAP();
	XEDAP(string sMaXe, float fTaiTrong);
	XEDAP(string sMaXe, float fTaiTrong,string sMaLoai,string sHoTen,float fGioThue);
	string getMaXe();
	float getTaiTrong();
	void setMaXe(string sMaXe);
	void setTaiTrong(float fTaiTrong);
	void Xuat();
	double TinhTienThue();
	string hienthi();
};
#endif // ! XeDap_h
