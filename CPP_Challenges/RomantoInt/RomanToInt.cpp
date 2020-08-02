#include<iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        //get length of string
        //loop through string
        //if I before V or X, subtract 1
        //if X before L or C, subtract 10
        //if C before D or M, subtract 100
        
        int length = 0;
        int maxpos;
        int output = 0;
        
        
        while(s[length] != '\0'){
            
            if(s[length] == 'I'){
                if(s[length + 1] == 'V' || s[length + 1] == 'X'){
                    output -= 1;
                } else{
                    output += 1; 
                }
            }
            
            if(s[length] == 'X'){
                if(s[length + 1] == 'L' || s[length + 1] == 'C'){
                    output -= 10;
                } else{
                    output += 10; 
                }
            }
            
            if(s[length] == 'C'){
                if(s[length + 1] == 'M' || s[length + 1] == 'D'){
                    output -= 100;
                } else{
                    output += 100; 
                }
            }
            
            if(s[length] == 'V'){
                output += 5;
            }
            
            if(s[length] == 'L'){
                output += 50;
            }
            
            if(s[length] == 'D'){
                output += 500;
            }
            
            if(s[length] == 'M'){
                output += 1000;
            }
            
            length++;
        }
        
        
        return(output);
    }
};

int main(){
    Solution s;

    string input;

    std::cout << "Enter your string: ";
    cin >> input;

    std::cout << endl << "Your number is: " << s.romanToInt(input) << endl;
}