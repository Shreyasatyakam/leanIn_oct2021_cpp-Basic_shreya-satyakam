ques1.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        vector<int> :: iterator it;
        for(int i=0; i< nums.size(); i++){
            int ele = target - nums[i];
            it = find(nums.begin(), nums.end(), ele);
            if(it != nums.end()){ // found
                if((it - nums.begin()) == i)
                    continue;
                ret.push_back(i);
                ret.push_back(it - nums.begin());
                return ret;
            }
        }
        return ret;
    }
};

ques2.

 class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> :: iterator it;
        it = nums.begin();
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
                nums.erase(it);
                it--;
                i--;
            }
            it++;
        }
        return nums.size();
    }
};

ques3.
  
  class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> original;
        vector<int> :: iterator it;
        for(it = nums.begin(); it != nums.end(); it++){
            int ele = *it;
            if(find(original.begin(), original.end(), ele) != original.end()){
                nums.erase(it);
                it--;
            }
            else{
                original.push_back(*it);
            }
            
        }
        return nums.size();
    }
};

ques4.
  
  class solution{
    public:
         void reverseString(vector<char>&s){
           int left = 0;
           int right = s.size() - 1;
           while(left<right){
             char tmp = s[left];
             s[left++] = s[right];
             s[right] = tmp;
           }
       }
  };
  
  
  
  
