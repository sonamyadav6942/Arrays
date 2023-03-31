--------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#include<iostream>
using namespace std;
    
int main()
{
    int A[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=0,h=9,key,mid;
	cout<<"Enter the Key";
	cin>>key;
	    
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<"Found at"<<mid;
			return 0;
		}
		else if(key<A[mid])
			h=mid-l;
		else
			l=mid+l;
	}
	    
	cout<<"Not Found";
	
	return 0;
	    
}


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	
	#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0; 
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(key >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 18);
    cout << "Index of 18 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 20);
    cout << "Index of 20 is " << oddIndex << endl;

    return 0;
}


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
