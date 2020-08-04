#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.length();
        int counter = 0;
        int arraylength;
        bool output = true;
        
        if(!s.empty()){
            char characters[length];


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
                if(characters[i] != characters[counter]){
                    output = false;
                }
                counter--;
            }
        } else {
            output = true;
        }
        
        return(output);
    }
};

int main(){
    Solution s;
    std::string input;

    cout << "Enter your string: " << endl;
    cin >> input;

    if(s.isPalindrome(input)){
        cout << "Your string " << input <<  " is a palindrome" << endl;
    } else {
        cout << "Your string " << input <<  " is NOT a palindrome" << endl;
    }
}