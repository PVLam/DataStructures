#include <iostream>
using namespace std;
#include "PT.h"

int main()
{
	int a[10000];
	int n = 0;
	int c;
	do
	{
		menu();
		cin>>c;
		switch(c)
		{
			case 1:
				Themso(a, n);
				break;
			case 2:
				Hienthi(a, n);
				break;
			case 3: 
				Docfile(a, n);
				break;
			case 4: 
				Ghifile(a,n);
				break;
			case 5:
				Sinhso(a,n);
				break;
			case 0:
			{
				break;
			}
		}
		system("clear");
	}while(c!=0);
}

