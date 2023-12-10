#include<iostream>
using namespace std;

int main(){
  class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int len=nums.size();
        if(len==1){
            return nums[0];
        }
        for(int i=0;i<len;i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};
}
