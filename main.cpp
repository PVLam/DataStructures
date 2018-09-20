#include <iostream>
using namespace std;
#include "lib.h"
#include <stdlib.h>

int main()
{
	List<Sach> ds;
	int c;
	do
	{
		menu();
		cin>>c;
		switch(c)
		{
			case 1:
				Themsach(ds);
				break;
			case 2:
				Hienthi(ds);
				break;
			case 3: 
				Luufile(ds);
				break;
			case 4: 
				//DocFile(ds);
				break;
			case 5:
				Suasach(ds);
				break;
			case 6: 
				//XuatHTML(ds);
				break;
			case 0:
			{
				break;
			}
		}
		system("clear");
	}while(c!=0);

}