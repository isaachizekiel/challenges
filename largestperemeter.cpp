#include <vector>
#include <algorithm>
#include <iostream>


// this is the crappiest solution update it if posible
class Solution {
public:
  int largestPerimeter(std::vector<int>& nums) {
    int result = 0, n1, n2, n3, tmp;
    std::sort(nums.begin(), nums.end());

    int s1, s2, s3;

    for (int i = nums.size() - 1;  i >= 0; i--) {
      if (i - 2 < 0) break;
      s3 = nums.at(i);
      s2 = nums.at(i - 1);
      s1 = nums.at(i - 2);      
      if (s1 + s2 > s3) tmp = s1 + s2 + s3;
      else tmp = 0;

      if (tmp > result) result = tmp;
    }

    return result;

  }
};



int main() {
  Solution solution;  
  std::vector<int> nums;
  
  // [3,2,3,4]
  // [2,3,3,6]

  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(1);
  //nums.push_back(4);

  //solution.largestPerimeter(nums);
  std::cout << solution.largestPerimeter(nums) << std::endl;
}
