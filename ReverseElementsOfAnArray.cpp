--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  #include<iostream>
using namespace std;
int main()
{
        int arr[100], start, end, num, temp;
        cout <<"Enter the size of an array : ";
        cin >> num;
        cout <<"Enter an array elements : ";
        for(int i = 0; i < num; i++)
        {
                cin >> arr[i];
        }
        cout <<"Array elements are : ";
        for(int i = 0; i < num; i++)
        {
                cout << arr[i] << " ";
        }
        end = num - 1;  
        start = 0;     
        while(start < end)
        {
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
        }
        cout<<"\nReverse of an array elements are : ";
        for(int i = 0; i < num; i++)
        {
                cout << arr[i] << " ";
        }
        return 0;
}


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
