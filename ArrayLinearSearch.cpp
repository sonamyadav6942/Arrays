--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int arr[100], num, key;
    cout << "Enter the size of an array : ";
    cin >> num;
    cout << "Enter an array element : ";
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter an element to search : ";
    cin >> key;
    for(int i = 0; i < num; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at index number : " << i;
            return 0;
        }        
    }
    cout << "Not Found";
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
