#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int num;
    cout << "Enter the size of an array : ";
    cin >> num;
    cout << "Enter element of an array are : ";
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Display an array element : " << " ";
    for(int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}