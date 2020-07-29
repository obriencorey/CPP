/*
Created By: Corey OBrien on July 28th 2020
Purpose: Input an array of integers and output a pointer to an array which contains
         the target indices whose values sum to the target

*/

#include<iostream>
using namespace std;

class Solution{

public:
    int target;

    int getTarget(){
        //get the target value
        int val;
        std::cout << "Enter your target value: ";
        cin >> val;
        
        return val;
    }

    void display(int disp){
        //debugging function

        std::cout <<"Target is " << disp << endl;
    }

    int* findTarget(int target, int* array, int size){
        int flag = 0;
        int* found;

        while(!flag){
            for(int i = 0; i <= size; i++){
                for(int j = 0; j <= size; j++){
                    if( (array[i] + array[j]) == target){
                        if(!flag){
                            found = new int [3];
                            found[0] = i;
                            found[1] = j;
                            found[2] = -1; 

                            //std::cout << found[] << " " << i << j << endl;
                        }
                        flag = 1;
                    }
                }
            }
        }

        if(flag == 0){
            found = 0;
        }

        return(found);
    }

};


int main(){
    int nums[] = {2,7,11,15};       //sample numbers
    int length = sizeof(nums)/sizeof(int);
    int offset = sizeof(int);
    int* sol;

    Solution s;                     //declare solution object


    s.target = s.getTarget();       //get target value
    s.display(s.target);

    sol = s.findTarget(s.target,nums,length);
    
    std::cout << "[ " << *(sol) << ", " << *(sol + 1) << "]" << endl;
}