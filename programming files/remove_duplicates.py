# bugs introduced: AT

def remove_duplicates(arr):
    arr.sort()
    unique_arr = []
    removed_elements = []
    # If element is found twice in the same array, item is removed and added to the unique array
    # Otherwise, element is added to removed elements array
    for i in range(len(arr)):
        if i == 0 or arr[i] == arr[i-1]:
            unique_arr.append(arr[i])
        else:
            removed_elements.append(arr[i-1])
    # returns new arrays as tuple
    return unique_arr, removed_elements

# Test the function
arr = [1, 2, 2, 3, 4, 4, 5]
unique_arr, removed_elements = remove_duplicates(arr)
print("Original array:", arr)
print("Unique array:", unique_arr)
print("Removed elements:", removed_elements)
