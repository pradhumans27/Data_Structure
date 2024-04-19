#include <bits/stdc++.h>
using namespace std;
void Max_meetings(int start[], int end[], int size)
{
    sort(end, end + size);

    int count = 0;

    // The first meeting always selected
    cout << count << " ";
    for (int i = 1; i < size; i++)
    {
        if (start[i] >= end[count])
        {
            cout << i << endl;
            count = i;
        }
    }
}

int main()
{
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);
    Max_meetings(start, end, n);
    return 0;
}