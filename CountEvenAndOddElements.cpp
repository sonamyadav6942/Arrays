--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 7, 8, 4, 5, 16, 8};
    int even_count = 0, odd_count = 0;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] % 2 == 0)
        even_count++;
        else
        odd_count++;
    }
    cout << "Even elements count : " << even_count << "\nOdd Elements count : " << odd_count;
    return 0;
}


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  
  
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int num;
    int even_count = 0, odd_count = 0;
    cout << "Enter the size of element in an array : ";
    cin >> num;
    cout << "Number of elements in an array are : ";
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        if(arr[i] % 2 == 0)
        even_count++;
        else
        odd_count++;
    }
    cout << "Even Elements count : " << even_count << "\nOdd Elements count : " << odd_count;
    return 0;
}


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
