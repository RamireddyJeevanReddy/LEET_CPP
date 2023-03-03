// OM SAI RAM //

/* 2535. Difference Between Element Sum and Digit Sum of an Array
User Accepted:11138
User Tried:11405
Total Accepted:11488
Total Submissions:12806
Difficulty:Easy
You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.*/
class Solution {
public:
    int Sum(int a){
        int ans=0;
        while(a>0){
            ans=ans+(a%10);
            a=a/10;
        }
        return ans;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digit_sum=0;
        int ans=0;
        for(auto &it:nums){
            sum=sum+it;
            ans=it;
            digit_sum=digit_sum+(Sum(ans));
        }
        if(digit_sum>=sum){
            ans=digit_sum-sum;
        }
        else{
            ans=sum-digit_sum;
        }
        return ans;
    }
};