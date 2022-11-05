#include <ostream>
#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
  double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    double result = 0.0;    
    nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
    std::sort(nums1.begin(), nums1.end());
    
    int size = nums1.size();
    int midpoint = size / 2;
    
    if (size % 2 == 0) {
      result = nums1.at(midpoint) + (double)nums1.at(midpoint - 1) / 2;      
    } else  {
      result = nums1.at(midpoint);
    }
    
    return result;
  }
};


int main(){

  std::vector<int> nums1, nums2;

  nums1.push_back(1);
  nums1.push_back(2);
  nums1.push_back(3);

  nums2.push_back(9);
  nums2.push_back(10);
  nums2.push_back(11);
  nums2.push_back(12);


  Solution solution;

  std::cout << solution.findMedianSortedArrays(nums1, nums2) << std::endl;;
  
  return 0;
}
