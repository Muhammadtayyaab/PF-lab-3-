#include<iostream>

using namespace std;

main()
{
int bagSize;
int bagCost;
float area;
float costPerPounds;
float costPerArea;
cout<<"Enter bag size in pounds :";
cin>>bagSize;
cout<<"Enter cost of the bag :";
cin>>bagCost;
cout<<"Enter Area covered by each inSquare feet :";
cin>>area;
costPerPounds=bagCost/bagSize;
costPerArea=bagCost/area;
cout<<"Cost of Fertilizer per pound :"<<costPerPounds<<endl;
cout<<"Cost of Fertilizer the area per square feets :"<<costPerArea;
}