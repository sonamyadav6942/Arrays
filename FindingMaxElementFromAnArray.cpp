#include<iostream>
using namespace std;
    
int main()
{
	int n=7,max;
	int A[7]={4,8,6,9,5,2,7};
	max=A[0];
	for(int i=0;i<7;i++)
	{
		if(A[i]>max)
		{
		    max=A[i];
		}
	}	
	cout<<"Maxmium element from an array is : "<<max;
	
	return 0;
	
}


or
	
int max;
int arr[5] = {38,18,22,16,10};
max = arr[0];
for(int i = 0; i < 5; i++)
{
    if(arr[i] > arr[0])
    max = arr[i];
}
cout << "Maximum element from an array are : " << max << endl;
