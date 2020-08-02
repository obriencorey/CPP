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
            int matchflag = 0;
            
            for(int k = 1; k < size; k++){
                if(strs[k - 1][j] == strs[k][j]){
                    matchflag = 1;
                } else{
                    matchflag = 0;
                }
            }
            
            if(matchflag){
                output +=  strs[0][j];
                charcount++;
            }
        }
        
        return(charcount ? output : "");
        
    }
};
