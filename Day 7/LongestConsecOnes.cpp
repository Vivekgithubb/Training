#include<bits/stdc++.h>
using namespace std;
main(){

    vector<int> nums = {0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0};
    int l=0;
    int ans = 0;
    int zCount = 0;

    for (int r = 0; r<nums.size() ; r++){
        if(nums[r] == 0)
            zCount++;
        while(zCount > 1){
            if( nums[l] == 0)
                zCount--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout<<ans;
}