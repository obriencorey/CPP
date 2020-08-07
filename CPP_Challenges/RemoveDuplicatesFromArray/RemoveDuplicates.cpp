#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int previous;   //checks previous values
        int next;       //checks next value
        int same = 0;   //increment if the same number is found
        
        if(!nums.empty()){
            previous = nums[0];

            for(int i = 1; i < length; i++){
                next = nums[i];

                if(previous == next){
                    nums.erase(nums.begin() + i);
                    i--;        //adjust for change in array size
                }

                previous = next;
                length = nums.size();
            }
        }
        
        return(nums.size());
    }
};


int main(){
    vector<int> numbers;
    int input;
    int cinTerminator = -999;
    Solution s;

    cout << "Enter your numbers (enter -999 to exit): " << endl;
    
    while ((cin >> input) && input != cinTerminator) {
        numbers.push_back(input);
    }

    s.removeDuplicates(numbers);

    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    cout << endl;
 
}