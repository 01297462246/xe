#include"XEDAP.h"
#include "XEMAY.h"
#include"iostream"
using namespace std;
void NhapDS(vector<XE*>&x);
void XuatDS(vector<XE*>x);
float TongTienThue(vector<XE*>x);
void timXeMin(vector<XE*>x);
void main()
{
	int soluong;
	cout << "\nSo luong xe :"; cin >> soluong;
	vector<XE*>x(soluong);
	NhapDS(x);
	XuatDS(x);
	cout << "\n---Tong tien thue xe-----" << TongTienThue(x)<<endl;

	cout << "\n---Tien thue xe thap nhat-----" << endl;
	timXeMin(x);
	system("pause");
}
void NhapDS(vector<XE*>&x)
{
	int Loaixe;
	cout << "\n1. Xe dap ";
	cout << "\n2. Xe may";
	string sMaLoai="",sMaXe="",sBienSo="";
	string sHoTen="";
	float fGioThue=0,fLoaiXe=0,fTaiTrong=0;
	for (int i = 0; i < x.size(); i++)
	{
		cout << "\nLoai xe :"; cin >> Loaixe;
		cout << "\nMa Loai : "; 
		cin.ignore(1);
		getline(cin, sMaLoai);
		cout << "\nHo Ten : "; 
		getline(cin, sHoTen);
		cout << "\nGio thue :"; cin >> fGioThue;
		if (Loaixe == 1)
		{
			cout << "\nMa xe :"; 
			cin.ignore(1);
			getline(cin, sMaXe);
			cout << "\nTai trong :"; cin >> fTaiTrong;
			x[i] = new XEDAP( sMaXe,  fTaiTrong, sMaLoai,  sHoTen, fGioThue);
		}
		else if (Loaixe == 2)
		{
			cout << "\nBien so :"; 
			cin.ignore(1);
			getline(cin, sBienSo);
			cout << "\nLoai xe :"; cin >> fLoaiXe;
			x[i] = new XEMAY(sBienSo,  fLoaiXe, sMaLoai,  sHoTen,  fGioThue);
		}
	}
}
void XuatDS(vector<XE*>x)
{
	cout << "\n------Danh sach xe vua nhap--------" << endl;
	for (int i = 0; i < x.size(); i++)
	{
		x[i]->Xuat();
	}
}
float TongTienThue(vector<XE*>x)
{
	float fTong = 0;
	for (int i = 0; i < x.size(); i++)
	{
		fTong = fTong + x[i]->TinhTienThue();
	}
	return fTong;
}
void timXeMin(vector<XE*>x)
{
	int vitri = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i]->TinhTienThue() < x[vitri]->TinhTienThue())
			vitri = i;
	}
	x[vitri]->Xuat();
}