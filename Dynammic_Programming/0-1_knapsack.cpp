#include<iostream>
#include<vector>
using namespace std;

int knapsack(int itr , int capacity, vector<int>&val,vector<int>&weight)
{
    int include = 0 ;
    int exclude = 0;
    if(itr==0 || capacity==0) return 0;
  
    // include
    if(capacity>=weight[itr-1])
    {
         include = val[itr-1] + knapsack(itr-1,capacity-weight[itr-1],val,weight);
    }
    exclude = knapsack(itr-1,capacity, val,weight);
    return max(include, exclude);
}
int using_dp(int itr, int capacity, vector<int>&val, vector<int>&weight,vector<vector<int>>&dp)
{
    int include = 0 ;
    int exclude = 0;
    if(itr == 0 || capacity == 0) return 0;
    if (dp[itr][capacity] != -1)
    {
       return dp[itr][capacity];
    }
    if(capacity >= weight[itr-1])
    {
         include = val[itr-1] + using_dp(itr-1, capacity-weight[itr-1], val, weight, dp);
    }
    exclude = using_dp(itr-1, capacity, val, weight, dp);
    return dp[itr][capacity] = max(include, exclude);
}


int main()
{
    vector<int>val;
    vector<int>weight;
    int capacity;
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;
    vector<vector<int>>dp(n+1, vector<int>(capacity+1, -1));

    for (int i = 0; i < n; i++)
    {
        int temp;
        cout << "Enter value for item " << i + 1 << ": ";
        cin >> temp;
        val.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        cout << "Enter weight for item " << i + 1 << ": ";
        cin >> temp;
        weight.push_back(temp);
    }
    cout << "The profit is " << using_dp(n, capacity, val, weight,dp);
    
    return 0;
}