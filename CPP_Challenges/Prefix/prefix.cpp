/*
    By: Corey O'Brien
    Purpose: Gets list of words from user and outputs
             the common prefix
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output = "";
        int size = strs.size();
        int longeststring = 0; 
        int longestlength = 0;
        int shorteststring;
        int shortestlength;
        int charcount = 0;
        int matchcount = 0;
 
        if(size > 1){
            for(int i = 0; i < size; i++){
                if(strs[i].length() > longestlength){
                    longeststring = i;
                    longestlength = strs[i].length();
                }
            }

            shortestlength = longestlength;

            for(int i = 0; i < size; i++){
                if(strs[i].length() < shortestlength){
                    shorteststring = i;
                    shortestlength = strs[i].length();
                }
            }


            for(int j = 0; j < shortestlength; j++){
                int matchflag = 1;

                for(int k = 1; k < size; k++){
                    if(strs[k - 1][j] != strs[k][j]){
                        matchflag = 0;
                    }
                }

                if(matchflag && matchcount == j){
                    output +=  strs[1][j];
                    charcount++;
                    matchcount++;
                }
            }
        }
        else if(!strs.empty()){
            charcount++;
            output = strs[0];
        }else{
            charcount = 0;
        }
        
        return(charcount ? output : "");
        
    }
};

int main(){
    Solution Sol;

    string input;
    vector<string> words;

    cout << "Enter your words, one at a time (Enter '!QUIT' to quit): ";
    do{
        cin >> input;
        if(input != "!QUIT"){
           words.push_back(input);  
        }
    
    }while(input != "!QUIT");

    cout << endl <<  "Common prefix: " << Sol.longestCommonPrefix(words);


    return 0;
}