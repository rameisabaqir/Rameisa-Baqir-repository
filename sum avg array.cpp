#include<iostream>
using namespace std;
int main(){
	int rows;
	int col;
	int sum =0;
	cout<<"Enter the number of row"<<endl;
	cin>>rows;
	cout<<"Enter number of columns"<<endl;
	cin>>col;
	int arr[rows][col];
	for(int i=0;i<rows;i++)
	{for(int j=0;j<col;j++)
	{cout<<"Elements ["<<i<<"]["<<j<<"]:";
	cin>>arr[i][j];
	}
	}
	cout<<"/nThe 2D array is:/n";
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		 sum = sum+arr[i][j];
			cout<<"sum is"<<sum<<endl;
		}
		double avg;
		avg=sum/2;
		cout<<"average is"<<avg<<endl;
	}
	return 0;
}
