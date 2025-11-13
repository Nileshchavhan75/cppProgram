#include<iostream>
using namespace std;
class decimal
{
	public:
		int deci =4;
		int pow =1;
		int ans =0;
		int rem;
		friend void convert(decimal &);
};
void convert(decimal &dx)
{
		while(dx.deci>0)
	{
		dx.rem=dx.deci%2;
		dx.deci/=2;
		dx.ans=dx.ans+(dx.pow*dx.rem);
		dx.pow*=10;
		
	}
	cout<<dx.ans;
}
int main()
{
	decimal obj;
	convert(obj);
}