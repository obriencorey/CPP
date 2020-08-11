#include<iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        
        long long int difference;
        long long int minDifference = INT_MAX;
        int output;
        
        for(long long int i = 0; i <= (x/2); i++){
            difference = abs((x) - (i * i));
            
            if(difference < minDifference && i * i <= x){
                minDifference = difference;
                output = i;
            }
        }
        
        return(x == 1? 1 : output);
    }
};

int main(){
    Solution s;
    int input;

    cout << "Enter your number ";
    cin >> input;
    cout << endl;

    cout << "The square root of " << input << " is " << s.mySqrt(input) << endl;


}