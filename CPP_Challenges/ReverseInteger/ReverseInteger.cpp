#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    int reverse(int x) {

        long long int counter;  //keeps track of number of digits
        long long int check;    //used to check size of number
        long long int output = 0;   //return value
        long long int divisor;      //counts up 
        long long int multiplier;   //counts down
        long long int num = (long long)x;
  
        //get length of input number
        check = 1;
        counter = 0;
        while(num / check != 0){
                counter++;
                check *= 10;
        }
        
        divisor = check;  //conventiently = to value needed
        multiplier = 1;   //this will be increased


        for(int i = 1; i <= counter; i++){

                output += (10*(-num / divisor) + (num / (divisor / 10))) * multiplier;

                divisor /= 10;
                multiplier *= 10;
        }
        return((output > 2147483647 || output < -2147483647) ? 0 : output);
        //
    }
};

int main(){
    Solution s; 

    int num;

    std::cout << "Enter your number ";
    std::cin >> num;

    std::cout << s.reverse(num);
}