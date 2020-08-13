#include<iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        
        long long int upper, mid, lower, num;
        long long int diff, diff1, diff2;
        
        //initialize
        upper = (x/2) + 1;
        lower = 0;
        mid = upper / 2;
        
        do{
            diff = abs(x - (mid * mid));
            
            mid -= 1;
            diff1 = abs(x - (mid * mid));
            
            mid += 2;
            diff2 = abs(x - (mid * mid));
            
            mid -= 2;
            
            if(x - (mid * mid) < 0){
                upper = mid;
            }
            else{
                lower = mid;
            }
            
            mid = (upper + lower) / 2;
            
            
            
        }while(!(diff < diff1 || diff < diff2));
        
        
        return(mid);
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