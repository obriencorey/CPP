#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int length = 0;
        long long int check = 1;
        long long int divisor;
        long long int multiplier;
        long long int place1;         //counts from 1s to 10s to ...
        long long int place2;         //counts from ... to 10s to 1s
        bool output = true;
        
        while(x / check != 0){
                length++;
                check *= 10;
        }

        divisor = check;
        multiplier = 1;

        for(int i = 1; i <= length; i++){
            place1 = (x / multiplier) - (((x / multiplier) / 10) * 10);
            place2 = (x / (divisor / 10)) - ((x / ( divisor)) * 10);

            divisor /= 10;
            multiplier *= 10;

            if(place1 != place2){
                output = false;
            }
        }

        return(x < 0 ? false : output);
    }
};


int main(){
    const char* f = "false";
    const char* t = "true ";
    
    Solution s;
    int input; 
    std::cout << "Enter your number: ";
    std::cin >> input;
    std::cout << endl;

    std::cout << "Palindrome?: " << (s.isPalindrome(input) ? t : f) << endl;

}