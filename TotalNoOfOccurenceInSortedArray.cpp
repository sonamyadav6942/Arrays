--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
        ans = mid;
        end =  mid - 1;
    }
    else if(key > arr[mid])
    {
        start = mid + 1;
    }
    else if(key < arr[mid])
    {
        end = mid - 1;
    }

    mid = start + (end - start) / 2;
    }
return ans;
    }

int lastOcc(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
        ans = mid;
        start = mid + 1;
    }
    else if(key > arr[mid])
    {
        start = mid + 1;
    }
    else if(key < arr[mid])
    {
        end = mid - 1;
    }

    mid = start + (end - start) / 2;
}
return ans;
}

int countOcc(int arr[], int size, int key){
    int first = firstOcc(arr, size, key);
    int last = lastOcc(arr, size, key);
    int count = last - first + 1;
    return count;
}

int main()
{
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};


    cout << "First Occurence of 3 at index : " << firstOcc(even, 11, 3) << endl;
    cout << "Last Occurence of 3 at index : " << lastOcc(even, 11, 3) << endl;
    cout << "Total number of occurrences of 3: " << countOcc(even, 11, 3) << endl;

    return 0;
    
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
