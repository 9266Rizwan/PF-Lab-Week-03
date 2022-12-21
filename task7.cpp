#include <iostream>
using namespace std;
main()
{
int MegaBytes;
int kb;
int byte;
int bit;

int onebyte=8;
int onekb= onebyte*1024;
int oneMB=onekb*1024;


cout << "Enter number of Megabytes : ";
cin >> MegaBytes ;

bit=MegaBytes*oneMB;
cout << "Bits of data : " << bit ;

}

