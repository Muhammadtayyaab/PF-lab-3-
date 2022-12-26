#include<iostream>

using namespace std;

main()
{
string movieName;
int adTicPrice;
int chTicPrice;
int numOFADTicSOl;
int numOFAChTicSOl;
float perofdonat;
float totalSoldTicAd;
float totalSoldTicCh;
float totalAmount;
float donation;
float afDonate;
cout<<"Enter Movie Name :";
cin>>movieName;
cout<<"Enter Adult Ticket Price:";
cin>>adTicPrice;
cout<<"Enter Child Ticket Price:";
cin>>chTicPrice;
cout<<"Enter number of adult ticket sold:";
cin>>numOFADTicSOl;
cout<<"Enter number of adult ticket sold:";
cin>>numOFAChTicSOl;
cout<<"Enter percentage to donate:";
cin>>perofdonat;
totalSoldTicAd=adTicPrice*numOFADTicSOl;
totalSoldTicCh=chTicPrice*numOFAChTicSOl;
totalAmount=totalSoldTicAd+totalSoldTicCh;
donation=(totalAmount*perofdonat)/100;
afDonate=totalAmount-donation;
cout<<"Total Amount genrated:"<<totalAmount<<endl;
cout<<"Amount after donation:"<<afDonate;
}