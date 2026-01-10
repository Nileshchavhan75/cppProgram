#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>n;
        int start = 0, end = numbers.size()-1;
        while(start<=end){
            if(numbers[start]+numbers[end] == target){
                n.push_back(start+1);
                n.push_back(end+1);
                return n;
            }else if(numbers[start]+numbers[end]<target){
                start++;
            }else{
                end--;
            }
        }
        return n;
    }
};