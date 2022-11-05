#include <iostream>
#include <stack>

/*
  this is a not working longest plaindrome but it uses a single loop to find
  the solution. at the backl of my head i think it is possible to find the
  longest palindrome useing a single for loop and a lot s of if statement s
  inside. but still a not workign solution;
*/

class Solution {
public:
  std::string longestPalindrome(std::string str) {
    std::string result;
    std::string tmp;
    std::stack<char> stk;

    for (int i = 0; i < str.length(); i++) {
      char ch = str.at(i), chplusone = 0;
      
      std::cout << i << " - " << str.length() << " - " << ch << " - "  << tmp <<std::endl;

      if (stk.empty()) {
	stk.push(ch);
	continue;	
      }

      if (i < str.length() - 1) {
	chplusone = str.at(i+1);
      }
      
      if (!stk.empty() && stk.top() == ch) {
	tmp.insert(tmp.begin(), ch);
	tmp.insert(tmp.end(), ch);
	stk.pop();
      }

      if (!stk.empty() && stk.top() == chplusone) {
	tmp = ch;
	tmp.insert(tmp.begin(), chplusone);
	tmp.insert(tmp.end(), chplusone);
	stk.pop();
      }
    
      if (tmp.length() > result.length()) {
	result = tmp;
      }

      stk.push(ch);
     
    }
    
    return result;
  }
};



int main() {
  Solution solution;
  std::cout << "Enter a string" << std::endl;
  std::string input;
  std::cin >> input;
  std::cout << solution.longestPalindrome(input) << std::endl;
}
