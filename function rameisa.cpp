#include<iostream>
using namespace std;
//ftn defination
void passByValue(int num)
{
	num=num+10;//modifyins value
	cout<<"inside function (pass by value)"<<num<<endl;
}
int main()
{
	int number= 5;
	cout<<"Before function call:"<<number<<endl;
	passByValue(number);//passing the value
	cout<<"After function call:"<<number<<endl;
	return 0;
}