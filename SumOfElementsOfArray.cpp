#include <iostream>
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
