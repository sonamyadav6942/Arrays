"""
# Sum of Array Elements: Write a function to calculate the sum of all elements in an array.

# By using for loop

array= []
n = int(input("Enter the number of elements: "))
for i in range(n):
    element = int(input("Enter element: "))
    array.append(element)
    
sum = 0
for i in range(0, len(array)):
    sum = sum + array[i]
    i = i + 1
print("Sum of all the elements of the given array is",sum)

# By using while loop

arr = [2, 4, 6, 8, 10]
sum = 0
i = 0
while(i < len(arr)):
    sum = sum + arr[i]
    i = i + 1
print("Sum of all the elements of the given array is", sum)

# By taking array input from user
def sumArr(arr):
    total_sum = 0
    for num in arr:
        total_sum += num
    return total_sum
    
array = []
n = int(input("Enter the number of elements: "))
for i in range(n):
    element = int(input("Enter element: "))
    array.append(element)

sum_of_array = sumArr(array)
print("Sum of array elements:", sum_of_array)


print("-" * 30)


def sumTotal():
    array= []
    n = int(input("Enter the number of elements: "))
    for i in range(n):
        element = int(input("Enter element: "))
        array.append(element)
    
    sum = 0
    for i in array:
        sum = sum+i
    return sum
 
sum_of_array = sumTotal()
print("Sum of array elements:", sum_of_array)
    



array = []
num = int(input("Enter the number of elemets in array "))
for i in range(num):
    element = int(input("Enter elements: "))
    array.append(element)
    
sum = 0
for i in range(0, len(array)):
    sum = sum + array[i]
    i = i + 1
print("Sum of array of element is ", sum)


# Largest Element in Array: Find and return the largest element in an array.

array = []
n = int(input("Enter the number of elements in the array: "))
for i in range(n):
    element = int(input("Enter element: ")) 
    array.append(element)
    
max_element = array[0]
for i in range(1, len(array)):  
    if array[i] > max_element:
        max_element = array[i]

print("Maximum of elements in the array:", max_element)


print("-" * 30)


array = []
n = int(input("Enter the number of elements in the array: "))
for i in range(n):
    element = int(input("Enter element: ")) 
    array.append(element)
    
min_element = array[0]
for i in range(1, len(array)):  
    if array[i] < min_element:
        min_element = array[i]

print("Minimum of elements in the array:", min_element)


"""

print("-" * 30)


arr = []
n = int(input("Enter the number of elements in the array: "))
for i in range(n):
    element = int(input("Enter elements: "))
    arr.append(element)
    
print("Array elements are:", arr)
    
start = 0
end = n - 1
while start < end:
    arr[start], arr[end] = arr[end], arr[start]
    start = start + 1
    end = end - 1

print("Reverse of an array element: ", arr)

