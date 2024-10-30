#include <iostream>
using namespace std;
int main()
{
	//5! 5*4*3*2*1=120
	int n;
	long factorial = 1.0;
	cout<<"Enter factorial";
	cin>>n;
	if(n<0)
	cout<<"Error! Factorial of negative number doesn't exist";
	else{
		int i=1;
		do{
			cout<<i<<endl;
			int f= factorial*i;
			cout<<f;
			i++;
		}
		while(i<=n);
		cout<<"factorial of"<<n<<"="<<factorial;
	}
	return 0;
}
