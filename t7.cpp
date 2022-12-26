#include<iostream>

using namespace std;

main()
{
string name;
float matricM;
float interM;
float ecat;
float tMatricMarks;
float tInterMarks;
float tEcatMarks;
float result;
cout<<"Enter name";
cin>>name;
cout<<"Enter matric marks";
cin>>matricM;
cout<<"Enter inter marks=";
cin>>interM;
cout<<"Enter Ecat marks";
cin>>ecat;
tMatricMarks=(matricM/1100)*0.1;
tInterMarks=(interM/550)*0.4;
tEcatMarks=(ecat/400)*0.5;
result=(tMatricMarks+tInterMarks+tEcatMarks)*100;
cout<<"your Aggregate is="<<result;
}