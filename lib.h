#ifndef lib_h
#define lib_h
#include <iostream>
using namespace std;
#include "node.h"
#include "sach.h"
#include "list.h"

void menu()
{
	cout<<"CHUONG TRINH QUAN LY THU VIEN\n";
	cout<<"1. Them sach\n";
	cout<<"2. Hien thi danh sach\n";
	cout<<"3. Luu xuong file\n";
	cout<<"4. Mo tu file\n";
	cout<<"5. Sua sach\n";
	cout<<"6. Xuat HTML\n";
	cout<<"0. Thoat\n";
	return;
}

void Themsach(List<Sach> &ds)
{
	Sach a;
	cin>>a;
	ds.pushBack(a);
}

void Suasach(List<Sach> &ds)
{
	int n;
	cout<<"Moi nhap so thu tu sach: "; cin>>n;
	ds.deleteAt(n);
	Sach a;
	cout<<"Moi sua sach:\n";
	cin>>a;
	ds.insert(a,n);
}

void Hienthi(List<Sach> &ds)
{
	ds.print();
}

void Luufile(List<Sach> &ds)
{
	char t[100] = "dulieu.txt";
	ds.Ghifile(t);
}

/*void Docfile(List<Sach> &ds)
{
	int n = 0;
	ifstream f("dulieu.txt");
	if(!f.is_open())
	{
		cout<<"Loi\n";
		return ;
	}
	while(!f.eof())
	{
		f>>ds[n++]; 
	}
	f.close();
}*/


#endif