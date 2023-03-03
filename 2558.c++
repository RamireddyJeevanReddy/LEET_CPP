// OM SAI RAM

/*2558. Take Gifts From the Richest Pile
Easy
136
6
Companies
You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

Choose the pile with the maximum number of gifts.
If there is more than one pile with the maximum number of gifts, choose any.
Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
Return the number of gifts remaining after k seconds.*/

#include <cmath>
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        long long n;
        for(auto &it:gifts){
            pq.push(it);
        }
        for(int i=0;i<k;i++){
            n=floor(sqrt(pq.top()));
            pq.pop();
            pq.push(n);
        }
        n=0;
        while(!pq.empty()){
            n=n+pq.top();
            pq.pop();
        }
        return n;
    }
};