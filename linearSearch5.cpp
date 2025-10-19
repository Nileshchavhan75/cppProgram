//missing elemet from 1 to 5

#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4};
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<"\t"<<arr[i];
		sum+=arr[i];
	}
	int tsum=1+2+3+4+5;
	int missing_element=tsum-sum;
	cout<<"\n missing elemet is :"<<missing_element<<endl;
	return 0;
}