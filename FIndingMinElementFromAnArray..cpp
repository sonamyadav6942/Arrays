#include<iostream>
using namespace std;
    
int main()
{
	int n=7,min;
	int A[7]={4,8,6,9,5,2,7};
	min=A[0];
	for(int i=0;i<7;i++)
	{
		if(A[i] < min)
		{
		    min=A[i];
		}
	}	
	cout<<"Minimum element from an array is : "<<min;
	
	return 0;
	
}
