#include<iostream>

using namespace std;

main()
{
float vi;
float accceleration;
int time;
float vf;
cout<<"Enter initial velocity:";
cin>> vi;
cout<<"Enter Acceleration:";
cin>>accceleration;
cout<<"Enter Time:";
cin>>time;
vf=accceleration*time+vi;
cout<<"Final Velocity :"<<vf;
}