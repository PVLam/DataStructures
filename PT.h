#include <iostream>
using namespace std;
#include <fstream>
#include <stdlib.h>
#include <ctime>

void menu()
{
	cout<<"\n1. Them 1 so: \n";
	cout<<"2. Hien thi: \n";
	cout<<"3. Nap kho so tu file: \n";
	cout<<"4. Luu vao file: \n";
	cout<<"5. Sinh so ngau nhien: \n";
	cout<<"0. An phim 0 de ket thuc chuong trinh \n";
	return;
}

void Themso(int a[], int &n)
{
	cout<<"Nhap so: ";
	int f; cin>>f;
	a[n++] = f;
}

void Hienthi(int a[], int &n)
{
	for (int i = 0; i<n ; i++)
	{
		cout<<a[i]<<' ';
	}
}

void Docfile(int a[], int&n)
{
	char t[100];
	cout<<"Nhap ten file: ";
	ifstream fin(t);
	cin.ignore();
	cin.getline(t,100);
	if(!fin.is_open())
	{
		cout<<"Loi\n";
		return ;
	}
	while(!fin.eof())
	{
		fin>>a[n++]; 
	}
	fin.close();
}

void Ghifile(int a[], int &n)
{ 
	char t[100];
	cout<<"Nhap ten file: ";
	cin.ignore();
	cin.getline(t,100);
	ofstream f(t);
	cout<<"Luu vao file dang thuc thi?\n1.Co\n2.Khong\n";
	int flag;
	cin>>flag;
	if(flag == 1)
	{
		while(!f.eof())
		{
			f<<a[n++];
		}
	}
	else
	{
		n = 0;
		while(!f.eof())
		{
			f<<a[n++];
		}
	}
	f.close();
}

void Sinhso(int a[], int &n)
{
	srand(time(NULL));
	int j;
	cout<<"Nhap so luong so: ";
	cin>>j;
	n += j;
	cout<<"Luu vao file dang thuc thi?\n1.Co\n2.Khong\n";
	int flag;
	cin>>flag;
	if(flag == 1)
	{
		n += j;
		for (int i = n-1; i<n; ++i)
		{
			a[i] = rand()%100000;
		}
	}
	else
	{
		n = 0;
		for (int i = 0; i<j; ++i)
		{
			a[i] = rand()%100000;
		}
	}
}