#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
            }
        }
        
        return(nums.size());
    }
};

int main(){
    vector<int> numbers;
    int input;
    int value;
    int cinTerminator = -999;
    Solution s;

    cout << "Enter your numbers (enter -999 to exit): " << endl;
    
    while ((cin >> input) && input != cinTerminator) {
        numbers.push_back(input);
    }

    cout << "Enter your value to remove: " << endl;

    cin >> value;

    s.removeElement(numbers, value);

    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    cout << endl;
 
}