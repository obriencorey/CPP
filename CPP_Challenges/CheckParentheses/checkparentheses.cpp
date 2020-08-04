class Solution {
public:
    bool isValid(string s) {
        //ascii values
        // ( - 40
        // ) - 41
        // { - 123
        // } - 125
        // [ - 91
        // ] - 93
        
        //Implement timer that increments for each new open paranthese
        
        int Pcount = 0;     //parantheses
        int Ccount = 0;     //curly brace
        int Bcount = 0;     //bracket
        int index;
        int empty = 0;
        
        if(s.length() == 0){
            empty = 1;
        } else{
            
            for(index = 0; index < s.length(); index++){
                if(s[index] == 40){
                    Pcount++;
                }
                if(s[index] == 41){
                    Pcount--;
                }
            }   
        }
        
        return(returnfalse());
        
    }
    
    bool returnfalse(void){
        return(false);
    }
};