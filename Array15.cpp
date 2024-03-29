#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& arr) {
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        right_sum += arr[i];
    }
    for (int i = 0; i < arr.size(); i++) {
        right_sum -= arr[i];
        if (left_sum == right_sum) {
            return i;
        }
        left_sum += arr[i];
    }
    return -1;
}

int main() {
    vector<int> arr {1, 4, 6, 3, 2, 5};
    int pivot = findPivot(arr);
    if (pivot != -1) {
        cout << "Pivot found at index " << pivot << endl;
    } else {
        cout << "No pivot found in the array" << endl;
    }
    return 0;
}
