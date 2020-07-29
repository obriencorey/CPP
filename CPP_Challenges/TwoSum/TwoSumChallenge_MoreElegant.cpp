/*
Created By: Corey OBrien on July 29th 2020
Purpose: Input an array of integers and output a pointer to an array which contains
         the target indices whose values sum to the target. However,
         do it more efficiently this time. 

*/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> output = {0,0}; 
        int length = nums.size();
        
        for(int i = 0; i < length; i++){
            for(int j = 0; j < length; j++){
                if(nums[j] + nums[i] == target && i != j){
                    output[0] = i;
                    output[1] = j;
                }
            }
        }
        
        
      
       return(output);
    }
};

void printVect(std::vector<int> const &input){
    for(int i = 0; i < input.size(); i++){
        std::cout << input.at(i) << ' ';
    }
}

int main(){
    Solution s;
    vector<int> ans;

    vector<int> data = {2,7,11,15};
    int targ = 9;

    ans = s.twoSum(data,targ);
    
    std::cout << "The values are found at indices ";
    printVect(ans);

    std::cout << endl; 


}
