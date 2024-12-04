#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char source[]="Hello, World!";
	char destination[50];//make sure the destination array
	//usr strcpy() to copy the source string into destination 
	strcpy(destination,source);
	cout<<"Source string"<<source<<endl;
	cout<<"Destination string"<<destination<<endl;
	return 0;
	
}
