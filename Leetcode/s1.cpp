#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int func(vector<int>nums,int k)
    {
       int n=nums.size();
       vector<int>avg(n,-1);
       long sum=0;
       int len=2*k +1;
       for(int i=0;i<n;i++){
          sum+=nums[i];
          if(i >=len) sum-=nums[i-len];
          if(i>len-1) avg[i-k]=sum/len;
       }






    }


    // {
    //     // map<string, int> mpp1;
    //     // for (auto &it : s1)
    //     //     mpp1[it]++;
    //     // for (auto &it : s2)
    //     // {
    //     //     if (mpp1[it] < 2)// if raj comes againj in 2nd strings then we cant deduct as per our code ,no -- is effective there and so if we keep <2 then mpp[it]==0 case will be considered which would have been missed if mpp[it]==1 rehne diya hota..
    //     //         mpp1[it]--;
    //     // }
    //     // int cnt = 0;
    //     // for (auto it : mpp1)
    //     // {
    //     //     if (it.second == 0)
    //     //         cnt++;
    //     // }
    //     // return cnt;

        






    // }
};

int main()
{
    
    return 0;
}