#include<iostream>
#include<vector>
using namespace std;

bool subset_sum(vector<int>&arr,int sum,int i)
{
    if (sum == 0)
    {
        return true;
    }
    if (i >= arr.size() || sum < 0)
    {
        return false;
    }

    // pick
    bool pick = subset_sum(arr, sum - arr[i], i + 1);

    // not pick
    bool not_pick = subset_sum(arr, sum, i + 1);

    return pick || not_pick;
}

bool subset_sum_dp(vector<int>&arr,int sum,int i,vector<vector<int>>&dp)
{
    if (sum==0)
    {
        return true;
    }
    if(i>=arr.size()||sum<0)
    {
        return false;
    }
    if (dp[sum][i]!=-1)
    {
        return dp[sum][i];
    }
    // pick
    bool pick = subset_sum_dp(arr,sum-arr[i],i+1,dp);
    // not pick
    bool not_pick = subset_sum_dp(arr,sum,i+1,dp);

    // store the result in dp and return it
    dp[sum][i] = pick || not_pick;
    return dp[sum][i];
}
int main()
{
    int sum;
    cout<<"Enter the sum "<<endl;
    cin>>sum;
    vector<int>arr;
    int n = arr.size();
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the array"<<endl;
    for (int i = 0; i <n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<subset_sum(arr,sum,0);
    return 0;
}