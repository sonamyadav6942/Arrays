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


or
	
int min;
int arr[5] = {9,5,3,7,1};
for(int i = 0; i < 5; i++)
{
    if(arr[i] < arr[0])
    min = arr[i];  
}
cout << "Minimum element from an array are : " << min << endl;
