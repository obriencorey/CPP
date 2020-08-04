#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.length();
        int counter = 0;
        int arraylength;
        
        char characters[length];
        bool output = true;
        
        //loop through input string and if the character is alphanumeric, add it to char array
        for(int i = 0; i < length; i++){
            if((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123) || (s[i] > 47 && s[i] < 58)){
                if(s[i] > 64 && s[i] < 91){
                  characters[counter] = (s[i] + 32);
                    counter++;  
                } else{
                characters[counter] = s[i];
                counter++;
                }
            }
        }
        //at this point, counter is now at the end of the array characters
        
        arraylength = counter;
        counter--;
        for(int i = 0; i < arraylength; i++){
            cout << "Counting up: " << characters[i] << "      " << "Counting down: " << characters[counter] << endl;
            if(characters[i] != characters[counter]){
                output = false;
            }
            counter--;
        }
        
        return(output);
    }
};

int main(){
    Solution s;
    std::string input = "RacECar";

    if(s.isPalindrome(input)){
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}