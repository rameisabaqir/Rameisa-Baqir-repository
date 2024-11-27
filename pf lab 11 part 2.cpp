#include<iostream>
using namespace std;
struct login{
	char name[10];
	char username[10];
};
int main()
{
	cout<<"-----Login System-----"<<endl;
	login l{
	cout<<"Enter Username";
	cin>>getline(l.username,10);
	cout<<"Enter name";
	cin>>getline(l.name,10)}
	if(name==username)
	{cout<<"Welcome you have successfully login";
	}
	else
	{cout<<"Login failed."<<endl;
	}
	return 0;
}