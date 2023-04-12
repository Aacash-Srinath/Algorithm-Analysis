//Greedy Algorithm for Activity Selection Problem
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Activity Start and Finish Time.
struct Activity
{
    int start, finish;
};

// Sort Activities by Finish time
bool compare(Activity a1, Activity a2)
{
    return (a1.finish < a2.finish);
}

void activitySelection(Activity arr[], int n)
{
    //Sort Function
    sort(arr, arr+n, compare);

    cout << "Selected Activities are : ";

    // First Activity Always Selected
    int i = 0;
    cout << "(" << arr[i].start << ", " << arr[i].finish << ") ";

    // Traverse for Remaining Activities
    for (int j = 1; j < n; j++)
    {
        // If start time of current activity >= finish time of previous activity
        if (arr[j].start >= arr[i].finish)
        {
            cout << "(" << arr[j].start << ", " << arr[j].finish << ") ";
            i = j;
        }
    }
}

int main()
{
    Activity arr[] = {{3, 4}, {2, 5}, {1, 3}, {5, 9}, {0, 7}, {11, 12}, {8, 10}};

    int n = sizeof(arr)/sizeof(arr[0]);
    activitySelection(arr, n);
    
    return 0;
}
