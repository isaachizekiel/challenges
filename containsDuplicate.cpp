#include <algorithm>
#include <vector>
#include <iostream>

class Solution {
public:
  bool containsDuplicate(std::vector<int>& nums) {    
    std::sort(nums.begin(), nums.end());
    for (int i  = 0; i < nums.size() - 1; i++) {
      if (nums.at(i) == nums.at(i + 1)) return true;
    }    
    return false;
  }
};


int main() {
  Solution solution;

  std::vector<int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(4);
  nums.push_back(5);
	
  std::cout << solution.containsDuplicate(nums) << std::endl; 
  
}
