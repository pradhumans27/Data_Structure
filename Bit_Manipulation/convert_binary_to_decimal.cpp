#include<iostream>
using namespace std;

int convert_binary_to_decimal(string binary)
{
    int len = binary.size()-1;
    int power = 1;
       int res = 0;
    for (int i = len; i >=0; i--)
    {
       if (binary[i]=='1')
       {
        res = res + power;
       }
        power = power *2;
       
       
    }
    return res;
    
}
int main()
{
    string binary;
    cout<<"Enter the binary number";
    cin>>binary;
    int ans = convert_binary_to_decimal(binary);
    cout<<ans;
    return 0;
}