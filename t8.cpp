#include<iostream>

using namespace std;

main()
{
int input;
int output;
int mdans1;
int mdans2;
int mdans3;
int mdans4;
int dans1;
int dans2;
int dans3;
cout<<"Enter a 4 digit number";
cin>>input;
mdans1=input%10;
dans1=input/10;
mdans2=dans1%10;
dans2=dans1/10;
mdans3=dans2%10;
dans3=dans2/10;
mdans4=dans3%10;
output=mdans1+mdans2+mdans3+mdans4;
cout<<"sum :"<<output;
}