//
// Created by pengcheng.zhang on 2019/9/4.
//
#include <vector>
#include <map>
#include "include/twoSum.h"

using namespace std;
vector<int> twoSum::Solution::twoSum(vector<int>& nums, int target) {
        map<int,int> imap=map<int,int>{};
        for(int i=0;i<nums.size();i++){
            if(imap.count(nums[i])>0){
                return vector<int>{imap[nums[i]],i};
            }
            int def=target-nums[i];
            if (imap.count(def)==0){
                imap[def]=i;
                imap.insert(pair<int,int>(def,i));
            }
        }
        return vector<int>{-1,-1};
    }

