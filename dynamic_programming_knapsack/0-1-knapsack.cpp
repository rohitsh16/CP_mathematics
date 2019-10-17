#include <bits/stdc++.h>
using namespace std;

int knapSack(int W,int wt[],int val[],int n){
  int dp[n+1][W+1];
  int i,j;
  for(i=0;i<=n;i++){
    for(j=0;j<=W;j++){
      if(i==0 || j==0)
        dp[i][j] = 0;
      else if(j-wt[i] >= 0)
        dp[i][j] = max(val[i]+dp[i-1][j-wt[i]], dp[i-1][j]);
      else
        dp[i][j] = dp[i-1][j];
    }
  }
  return dp[n][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<knapSack(W, wt, val, n)<<endl;
    return 0;
}
