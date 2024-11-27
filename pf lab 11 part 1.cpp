#include<iostream>
using namespace std;
struct Book{
char members[20];
	char bookTittle[20];
	char author[20];
	int publicationYear;
	int pages;
};
	int main()
	{  
	Book b1[5];
	for (int i=0; i<5;i++)
	{cout<<"Enter details for book"<<i+1<<endl;
	cout<<"Enter members ";
	cin.getline(b1[i].members,20);
	cout<<"Enter tittle of book";
	cin>>b1[i].bookTittle,20;
	cout<<"Enter name of author";
	cin>>b1[i].author,20;
	cout<<"enter year of publication";
	cin>>b1[i].publicationYear;
	cout<<"enter pages of book";
	cin>>b1[i].pages;
	//Clear the input buffer
	cin.ignore();
	}
	for(int i=0;i<5;i++)
	{cout<<"book information"<<endl;
	cout<<"members"<< b1[i].members<<endl;
	cout<<"bookTittle"<<b1[i].bookTittle<<endl;
	cout<<"author"<<b1[i].author<<endl;
	cout<<"publicationYear"<<b1[i].publicationYear<<endl;
	cout<<"pages"<<b1[i].pages<<endl;
	}
return 0;}