#include <iostream>
#include <string>
#include <unordered_map>
#include <stack>

/*
"abcabcbb"
"bbbbb"
"pwwkew"
 */

class Solution {
public:
  int lengthOfLongestSubstring(std::string str) {
    std::string tmp, result;   
    for (int i = 0; i < str.length(); i ++ ) {
      auto pos = tmp.find(str.at(i));
      if (pos != str.npos) tmp.erase(0, pos + 1);
      
      tmp.push_back(str.at(i));

      std::cout << tmp.length() << " " << result.length() << " " << tmp  << " " << result << std::endl;
      if (tmp.length() > result.length() ) {
	result = tmp;
      }
    }      
    return result.size();    
  }
};


int main() {
  std::string str;
  std::cout << "Enter a string "  << std::endl;
  std::cin >> str;
  
  Solution solution;
  std:: cout << solution.lengthOfLongestSubstring(str) << std::endl;;

  return 0;
}
