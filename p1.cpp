/*
  Given an integer array nums of unique elements, return all possible subsets (the power set).

  The solution set must not contain duplicate subsets. Return the solution in specified order.

 

  Example 1:

  Input: nums = [1,2,3]
  Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

  Example 2:

  Input: nums = [0]
  Output: [[],[0]]

 

  Constraints:

  1 <= nums.length <= 10
  -10 <= nums[i] <= 10
  All the numbers of nums are unique.
*/


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <utility>
#include <cmath>

using namespace std;

class Solution {
public:
  vector<vector<int>> subsets(vector<int> n) {
    //write your solution here
    vector<vector<int>> subs = {};
    int count = 2 << (n.size() - 1);

    for (int i = 0; i < count; i ++) {
      std::vector <int> vec = {};
      for (int j = 0; j < n.size(); j++) {
	std::cout << "i " << i << "   j " << j << "   (1 << j) " << (1 << j) << "   (i & (1 << j)) " << (i & (1 << j)) << std::endl;
	if ((i & (1 << j)) != 0) vec.push_back(n.at(j));	
      }
      subs.push_back(vec);
      std::cout  << "------------------------------------------" << std::endl;;
    }
    
    return subs;
  }
};

/**
   R E A D M E
   DO NOT CHANGE the code below, we use it to grade your submission. If changed your submission will be failed automatically.
**/
int main()
{
  vector<int> input;
  int item;

  string line;
  getline(cin, line);
  istringstream is(line);

  while (is >> item)
    {
      input.push_back(item);
    }


  Solution solution;
  vector<vector<int>> nodes = solution.subsets(input);

  std::cout << '[';
  for(auto& row:nodes){
    std::cout << '[';
    for(auto& col:row){
      std::cout << col;
      if (col != row.back())
	{
	  std::cout << ",";
	}
    }
    std::cout << ']';
    if (row != nodes.back())
      {
	std::cout << ",";
      }
  }
  std::cout << ']' << endl;

  return 0;
}
