/*
Input  : str1 = "3333311111111111", 
         str2 =   "44422222221111"
Output : 3377733333332222

Input  : str1 = "7777555511111111", 
         str2 =    "3332222221111"
Output : 7780887733332222
*/
#include<bits/stdc++.h> 
using namespace std;
string findSum(string str1, string str2) 
{
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    }
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    }
    if (carry) 
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
    return str; 
}
int main() 
{ 
    string str1 = "12"; 
    string str2 = "198111"; 
    cout << findSum(str1, str2); 
    return 0; 
} 