#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int distinctAverages(vector<int>& nums) {
        if(nums.size() == 2){
            return 1;
        }
        int n = nums.size();
        vector<float> v;
        int count = 0,minm = 0, maxm = 0;
        while(n != 0){
            minm = *min_element(nums.begin(),nums.end());
            maxm = *max_element(nums.begin(),nums.end());
            count = minm + maxm / 2;
            v.push_back(count);
            remove(nums.begin(),nums.end(),minm);
            remove(nums.begin(),nums.end(),maxm);
            n = n - 2 ;
        }
        count = 0;
        sort(v.begin(),v.end());
        for(int i = 0; i<v.size(); i++){
            while(i < v.size() - 1 && v[i] == v[i+1] ){
                i++;
            }
            count++;
        }
        
        return count;
        
    }

int main() {
    // Write C++ code here
    vector<int> nums{4,1,4,0,3,5};
    std::cout << "Hello world!";
    return distinctAverages(nums);
}
