#include <cmath>
#include <iostream>
#include <ostream>
#include <vector>
#include <algorithm>
/*
  - x - x - x - x
  0 1 2 3 4 5 6 7
  9 6 7 4 6 1 3 6

  x - x - x - x - 
  0 1 2 3 4 5 6 7
  9 6 7 4 6 1 3 6
*/


class Solution {
public:
  bool containsNearbyAlmostDuplicate(std::vector<int>& nums, int indexDiff, int valueDiff) {

    int tmpi = 0, tmpdiff, tmpsize, nums_size = nums.size();
    bool do4j;
    int i;
    
    for (int i = 0; i + indexDiff <= nums_size - 1; i++) {
      std::cout << i << " " << nums.at(i) << std::endl;

      
      
    }
    
    return false;
  }
};


int main() {

  std::vector<int> nums;  


  int indexDiff = 2, valueDiff = 3;
  nums.push_back(1);
  nums.push_back(5);
  nums.push_back(9);
  nums.push_back(1);
  nums.push_back(5);
  nums.push_back(9);  

  /*
    int indexDiff = 3, valueDiff = 0;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
  */
  /*
    int indexDiff = 3, valueDiff = 0;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);  
  */
  /*
    int indexDiff = 2, valueDiff = 0;
    nums.push_back(2);
    nums.push_back(2);
  */
  /*
    int indexDiff = 3, valueDiff = 1;
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(-1);
    nums.push_back(6);
    nums.push_back(5);
  */
  /*
    int indexDiff = 2, valueDiff = 3;
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(3);
  */
  /*
    int indexDiff = 2, valueDiff = 4;
    nums.push_back(-3);
    nums.push_back(-3);
  */
  Solution solution;
  std::cout << solution.containsNearbyAlmostDuplicate(nums, indexDiff, valueDiff) << std::endl; 
}
