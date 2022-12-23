#include <iostream>
using namespace std;
int sum(int x, int y)
{
	return x + y;
}
float sum(float x, float y)
{
	return x + y;
}
int sum(int x, int y, int z)
{
	return x + y + z;
}

int main()
{
	cout << sum (10,5) << endl;
	cout << sum(12.5f, 3.4f) << endl;
	cout << sum(10,20,3) << endl;
	return 0;
}
