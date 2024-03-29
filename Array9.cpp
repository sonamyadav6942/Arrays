#include <iostream>
using namespace std;
int main()
{
    int max, min;
    int arr[4] = {4, 12, 8, 10};
    max = arr[0];
    min = arr[0];
    for(int i = 0; i < 4; i++)
   { if(arr[0] < arr[i])
         max = arr[i];
       if(arr[0] > arr[i])
         min = arr[i];
    }
    cout << "Maximum : " << max << endl << "Minimum : " << min << endl;
    return 0;
}