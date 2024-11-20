#include<iostream>
using namespace std;
//ftn defination
void sum()
{ int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
int sum=a+b;
cout<<"sum is"<<sum<<endl;
}
int mul(int a,int b)
{ 
int mul=a*b;
return mul;
}
int main()
{ 
cout<<"Using function type";
sum();
int a,b;
cout<<"Entertwo numbers"<<endl;
cin>>a>>b;
int m=mul (a,b);
cout<<"Multiplication is"<<m<<endl;
return 0;
}