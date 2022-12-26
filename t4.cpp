#include<iostream>

using namespace std;

main()
{
string name;
int marks1;
int marks2;
int marks3;
int marks4;
int marks5;
int obtainMarks;
float percentage;
cout<<"your Name:";
cin>>name;
cout<<"Enter marks in subject 1:";
cin>>marks1;
cout<<"Enter marks in subject 2:";
cin>>marks2;
cout<<"Enter marks in subject 3:";
cin>>marks3;
cout<<"Enter marks in subject 4:";
cin>>marks4;
cout<<"Enter marks in subject 5:";
cin>>marks5;
obtainMarks=(marks1+marks2+marks3+marks4+marks5);
percentage=(obtainMarks*100)/500;
cout<<"Yours Percentage :"<<percentage;
}