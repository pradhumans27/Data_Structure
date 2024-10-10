#include<iostream>
using namespace std;
void reverse(string s)
{
    int ptr1 = 0;
    int ptr2  = s.size()-1;
    while(ptr1<ptr2)
    {
        swap(s[ptr1],s[ptr2]);
        ptr1++;
        ptr2--;
    }
}

string convert_decimal_to_binary(int x)
{
    string res = "";

    
    while (x!=0)
    {
            if(x%2==1)
            {
                res += '1';
            }
            else 
            res+='0';
        x = x/2;
    }
    reverse(res);

    return res;
    
}

int main()
{    int x;
    cout<<"Enter any Decimal number"<<endl;
    cin>>x;
    string ans = (convert_decimal_to_binary(x));
  
    cout <<"The binary form is : "<<ans;
    return 0;
}