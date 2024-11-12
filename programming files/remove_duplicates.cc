#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Parameters: int vector arr, int vector reference removed elements
// Returns: An array of all unique elements by removing duplicates

vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    vector<int> unique_arr;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]); //adding elements to array of unique elements
        }
        else{
            removed_elements.push_back(arr[i]); //adding elements to array of duplicates
        }
    }
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
