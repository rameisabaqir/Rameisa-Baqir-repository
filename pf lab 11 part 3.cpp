#include<iostream>
using namespace std;
struct StudentGrading{
char name [20];
	int sapId;
	char address[20];
	char department[20];
	float marksSubject1;
	float marksSubject2;
};
	int main()
	{  
	StudentGrading s1[5];
	for (int i=0; i<5;i++)
	{cout<<"Enter details for students"<<i+1<<endl;
	cout<<"Enter student name";
	cin.getline(s1[i].name,20);
	cout<<"Enter sap Id";
	cin>>s1[i].sapId;
	cout<<"Enter address";
	cin>>s1[i].address;
	cout<<"enter department";
	cin>>s1[i].department;
	cout<<"Enter marks for subject 1";
	cin>>s1[i].marksSubject1;
	cout<<"Enter marks for subject 2";
	cin>>s1[i].marksSubject2;
	//Clear the input buffer
	cin.ignore();
	}
	for(int i=0;i<5;i++)
	{cout<<"student information"<<endl;
	cout<<"Name"<< s1[i].name<<endl;
	cout<<"sap Id"<<s1[i].sapId<<endl;
	cout<<"Address"<<s1[i].address<<endl;
	cout<<"Department"<<s1[i].department<<endl;
	cout<<"Marks for subject 1"<<s1[i].marksSubject1<<endl;
	cout<<"Marks for Subject 2"<<s1[i].marksSubject2<<endl;
	}
	int max=0;
	for(int i=1;i<5;i++)
	int marks[i];
	if(marks[i]>max)
	{max=marks[i];
	}
	cout<<"maximum marks"<<max<<endl;
return 0;}