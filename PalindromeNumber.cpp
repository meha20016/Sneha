#include <iostream>
using namespace std;

int main() {
	int i,x1,x2,t,j;
	cout<<"Enter any 3 digit number:";
	cin>>i;
	t=i;
	x1=t%10;
	t/=10;
	x2=t%10;
	t/=10;
	j=(x1*100)+(x2*10)+t;
	if(i==j)
	cout<<"It is Palindrome";
	else
	cout<<"It is Not Palindrome";
	return 0;
}
