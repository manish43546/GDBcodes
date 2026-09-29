
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // STEP 1: Slow aur fast pointers initialize karo
        int slow = 0;
        int fast = 0;

        // STEP 2: Dono pointers ko cycle ke andar milao
        do {
            slow = nums[slow];           // 1 step
            fast = nums[nums[fast]];     // 2 steps

        } while (slow != fast);

        // STEP 3: Fast ko starting point par reset karo
        fast = 0;

        // STEP 4: Dono ko same speed se chalao
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        // STEP 5: Meeting point hi duplicate number hai
        return slow;
    }
};