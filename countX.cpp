#include <iostream>
#include <vector>

using namespace std;

int firstOccurrence(const vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int firstOccur = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            firstOccur = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return firstOccur;
}

// Function to find the last occurrence of X in the array
int lastOccurrence(const vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int lastOccur = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            lastOccur = mid;
            left = mid + 1; // Continue searching towards right for the last occurrence
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return lastOccur;
}

// Function to count occurrences of X in the array
int countOccurrences(const vector<int> &arr, int target)
{
    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    if (first == -1)
        return 0;

    return last - first + 1;
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 5, 6};
    int X = 2;
    cout << "Number of occurrences of " << X << ": " << countOccurrences(arr, X) << endl;

    return 0;
}
