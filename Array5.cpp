#include <iostream>
using namespace std;
int main()
{
    // int arr[5] = {9, 1, 5, 3, 7};
    // int min1, min2;
    // min1 = arr[0];
    // min2 = arr[0];
    // for(int i =  0; i < 5; i++)
    // {
    //     if(arr[i] < min1)
    //     min1 = arr[i];
    //     else if(arr[i] < min2)
    //     min2 = arr[i];
    // }
    // cout << "Second smallest element in an array is : " << min2 << endl;


    // int sum = 0;
    // int arr[5] = {1, 2, 3, 4, 5};
    // for( int i = 0; i < 5; i++ )
    // {
    //     sum = sum + arr[i];
    // }
    // cout << "Sum of an element in an array is : " << sum << endl;
    // return 0;

    int arr[100];
    int sum = 0;
    int num;
    cout << "Enter the size of an array : ";
    cin >> num;
    cout << "Enter an array element : " << endl;
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < num; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of an element in an array is : " << sum << endl;
    return 0;
}