#pragma once
#include "XE.h"
#ifndef XeMay_h
#define XeMay_h
class XEMAY :public XE
{
private:
	string m_sBienSo;
	float m_fLoaiXe;
public:
	XEMAY();
	virtual ~XEMAY();
	XEMAY(string sBienSo, float fLoaiXe);
	XEMAY(string sBienSo, float fLoaiXe, string sMaLoai, string sHoTen, float fGioThue);
	string getBienSo();
	float getLoaiXe();
	void setBienSo(string sBienSo);
	void setLoaiXe(float fLoaiXe);
	string hienthi();
	void Xuat();
	double TinhTienThue();
};
#endif // !XeMay_h
