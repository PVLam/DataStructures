#ifndef sach_h
#define sach_h
#include <iostream>
using namespace std;
class Sach
{
private:
	string Ten ;
	string TG;
	int NamXB;
	int Sotrang;
public:
	Sach(){}
	Sach(string a, string b, int c, int d): Ten(a), TG(b), NamXB(c), Sotrang(d){}
	friend ostream &operator <<(ostream &out, Sach &a)
	{
		out<<a.Ten<<"\n";
		out<<a.TG<<"\n";
		out<<a.NamXB<<"\n";
		out<<a.Sotrang<<"\n";
		return out;
	} 
	friend istream &operator >>(istream &in, Sach &b)
	{
		cout<<"Ten: "; cin.ignore(); getline(in, b.Ten);
		cout<<"Tac gia: "; cin.ignore(); getline(in, b.TG);
		cout<<"Nam xuat ban: "; in>>b.NamXB;
		cout<<"So trang: "; in>>b.Sotrang;
		return in;
	}
};
#endif