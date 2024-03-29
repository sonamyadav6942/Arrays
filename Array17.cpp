#include <iostream>
using namespace std;
    int main()
    {
    int num, i, arr[100];
    cout << "Enter the number of element :";
    cin >> num;
    cout << "Enter" << " " << num << " " << "in an array:";
    for(i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Reverse of an array element are:";
    for(i = num - 1; i >= 0; i-- )
    {
        cout << arr[i] << " ";
    }

    return 0;
}