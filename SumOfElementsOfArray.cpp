/*#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int A[10] = {2,4,6,8,12,3,5,7,9,11};
	for(int i = 0; i < 10; i++)
	{
		sum = sum + A[i];
	}
	cout << "Sum of all elements is " << sum << endl;
	return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int A[10];
	cout << "Enter number of an element : ";
	for(int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	for(int i = 0; i < 10; i++)
	{
		sum = sum + A[i];
	}
	cout << "Sum of all elements is " << sum << endl;
	return 0;
}


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{
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

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int num, i, arr[100];
	cout << "Enter number of element in an array:";
	cin >> num;
	cout << "Enter" << " " << num << " " << "elements:";
	for(i = 0; i < num; i++)
	{
		cin >> arr[i];
	} 
	for(i = 0; i < num; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Elements in an array are:" << sum <<endl;
	return 0;
}