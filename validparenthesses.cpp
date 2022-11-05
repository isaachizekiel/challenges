/*
  Valid Parentheses

  Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

  An input string is valid if:

  Open brackets must be closed by the same type of brackets.
  Open brackets must be closed in the correct order.

 

  Constraints:

  1 <= s.length <= 104
  s consists of parentheses only '()[]{}'.


  Example 1:


  Input: s = "()"

  Output: valid


  Example 2:


  Input: s = "()[]{}"

  Output: valid


  Example 3:


  Input: s = "(]"

  Output: invalid


  Example 4:


  Input: s = "([)]"

  Output: invalid


  Example 5:


  Input: s = "{[]}"

  Output: valid
*/

#include <iostream>
#include <string>
#include<stack>
#include <sstream>
#include <vector>


class Solution {
public:
  bool isValid(std::string str) {

    if (str.length() % 2 != 0) return false;
    
    bool result = false;
    std::stack <char> s;

    for (int i = 0; i < str.length(); i ++) {
      switch (str.at(i)) {
      case '(':
      case '[':
      case '{':	
	s.push(str.at(i));
	break;
      case ')':
	if (s.top() == '(') {
	  result = true;
	  s.pop();
	} else {
	  return false;
	}	
	break;
      case ']':
	if (s.top() == '[') {
	  result = true;
	  s.pop();
	} else {
	  return false;
	}
	break;
      case '}':
	if (s.top() == '{') {
	  result = true;
	  s.pop();
	} else {
	  return false;
	}
	break;	
      }
    }    
    return result;    
  }
};


int main() {
  std::string str;  
  std::cout << "Input the parentesis " << std::endl;
  std::cin >> str;  
  Solution solution;
  if (solution.isValid(str)) std::cout << str << " is valid." << std::endl;
  else  std::cout << str << " is not valid." << std::endl;
  std::cout << solution.isValid(str);
}
