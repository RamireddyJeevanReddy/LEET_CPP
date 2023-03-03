// OM SAI RAM //



/*
28. Find the Index of the First Occurrence in a String
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1. */


class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        int i,j,k,p=0,count=0;
        bool flag=false;
        k=0;
        for(j=0;j<m;j++){
            if(haystack[j]==needle[j]){
                flag=true;
                count=count+1;
            }
            else{
                flag=false;
            }
        }
        if(flag && count==m){
            return 0;
        }
        for(i=1;i<n;i++){
            k=0;
            count=0;
           
            if(m>1 && i+m>n){
                return -1;
            }
            for(j=i;j<i+m;j++){
                if(haystack[j]==needle[k]){
                    flag=true;
                    count=count+1;
                }
                else{
                    flag=false;
                }
                k=k+1;
            }
            if(flag && count==m){
                return i;
            }
        }
        return -1;
    }
};