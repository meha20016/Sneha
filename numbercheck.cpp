#include<iostream>
using namespace std;
class numbercheck
{
public:
void check(int x)
{
int num;
num=x;
if(num>0)
cout<<num<<" is Positive";
else if(num<0)
cout<<num<<" is Negative";
else
cout<<num<<" is neither Positive nor Negative";
}
};
int main()
{
int i;
cout<<"Enter the number:";
cin>>i;
numbercheck nc;
nc.check(i);
return 0;
}
