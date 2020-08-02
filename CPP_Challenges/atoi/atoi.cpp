class Solution {
public:
    int myAtoi(string str) {
        //count length of number
        //go back through from the first digit and add it up
        int index = 0;
        int numberfirst = 0;
        int charfirst = 0;
        int minus = 0;
        int numcount = 0;
        int position;
        int innum = 0;
        int endnum = 0;
        long long int output = 0;
        int signflag = 0; //1 if a plus or minus is reached
        
        //begin num count section, finds length of number and starting index
        while(str[index] != '\0' && !charfirst && !endnum){
            if(str[index] > 47 && str[index] < 58){ //check if char is number
                if(!innum){
                    position = index;
                    innum = 1;
                }
                
                numcount++;  
            } else{ //if not a number
                if(signflag && (str[index] != 45 && str[index] != 32 && str[index] != 43)){
                    charfirst = 0;
                }
                if(!innum){
                    if(str[index] == 45){ //if minus sign
                        minus = 1;
                        signflag = 1;
                    } else if(str[index] == 32){ //if space or plus sign
                        
                    } else if(str[index] == 43){
                        signflag = 1;
                    }
                    else{
                        charfirst = 1;
                    }
                }
                if(innum){
                        endnum = 1;
                }
                
                    
            }
            index++;
        }
        //end num count section
        //at this point, numcount equals the length of the target number
        //and position equals the starting position of the number
        index = 0;
        
        for(int i = position + numcount - 1; i >= position; i--){
            output += (str[i] - 48) * pow(10,index);
            index++;
        }
        
        if(minus){
            output = -1 * output;
        }
        if(output > 2147483647 - 1){
            output = 2147483647;
            
        }
        if(output < -2147483647){
            output = -2147483647 - 1;
            
        }
        
        return(charfirst);
        
    }
};