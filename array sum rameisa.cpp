#include<iostream>
using namespace std;
int main()
{ 
int arr[5]={2,3,5,6,7};
int sum=0;
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<" ";
	
 sum=sum+arr[i];
 cout<<"sum is"<<sum<<endl;
}
cout<<endl;
return 0;
}
