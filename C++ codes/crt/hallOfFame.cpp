#include<bits/stdc++.h>
using namespace std;

string recSum(string n)
{
    int sum = 0;
    
    for(long unsigned int i = 0; i<n.length(); i++)
    {
        sum += int(n[i] - 48);
        cout<<n[i]<<endl;
        cout<<sum<<" "<<endl;
    }
    
    string ans = to_string(sum);
    return ans;
}

int superDigit(string n) {
    int ans;
    
    for(int i = 0; i<1; i++)
    {
        n = (recSum(n));
        cout<<n;
    }
    
    ans = stoi(n);
    return ans;
}

int main()
{
    int ans = superDigit("148");
    cout<<ans;
}