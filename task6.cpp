#include <iostream>
using namespace std;
main()
{

string Name;
int Matric;
int Intermarks;
float Ecatmarks;
float Matricper;
float Interper;
float Ecatper;
float Aggregate;
float Ecatweight;
float Interweight;
float Matricweight;


cout << "Enter your Name   : " ;
cin >> Name ;

cout << "Enter your Matric Marks  :";
cin >> Matric;
int totalM=550;
Matricper=Matric/550*100;


cout << "Enter your Intermediate Marks :";
cin >> Intermarks ;
int totalI=550;
Interper=Intermarks/1100*100;


cout << "Enter your Ecat Marks  : ";
cin >> Ecatmarks;
int totalE=550;
Ecatper=Ecatmarks/400*100;


Ecatweight= Ecatper*50/100;
Interweight= Interper*40/100;
Matricweight=Matricper*10/100;

Aggregate=Ecatweight+Interweight+Matricweight;

cout << "your Aggregate is  = " << Aggregate ;



}