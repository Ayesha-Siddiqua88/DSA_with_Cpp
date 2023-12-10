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

// method 2
// The question states that we have to find an element in the array with frequency=1.
// So , the first idea that pops in the mind is to store the frequency of each element in a map (or a frequency array) and then traverse that map/array and return the element with frequency=1.

// Map the given array's elements to their frequency. ( KEY : ELEMENT , VALUE : FREQUENCY )
// Traverse that map and return the key whose value =1.
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       unordered_map<int,int> a;
	   for(auto x: nums)
		   a[x]++;
	   for(auto z:a)
		   if(z.second==1)
			   return z.first;
	   return -1;
    }
};
