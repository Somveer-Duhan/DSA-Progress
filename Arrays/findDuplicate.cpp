//I have used the solution of two step approach.
// First we will take two pointer,one will take one step at a time and the other one two at a time.
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int oneStep=nums[0];
        int twoStep=nums[0];
        while(true){
            oneStep=nums[oneStep];
            twoStep=nums[nums[twoStep]];
            if(oneStep==twoStep){
                break;
            }
        }
        int ptr1=nums[0];
        int ptr2=oneStep;
        while(ptr1!=ptr2){
            ptr1=nums[ptr1];
            ptr2=nums[ptr2];
        }
        return ptr1;
    }
};