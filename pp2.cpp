/*
  Order Colors


  A string str contains a list of color names that are separated by a single space.


  Colors in str are mixed up, but each color has its original position at the end of the color name, positions are 1-indexed.

  For example, the string "black1 gold2 white3" can be rearranged to "gold2 black1 white3" or "gold2 white3 black1".
  str contains only up to 9 colors.


  Given a str with rearranged colors, sort the colors to the original state and return the original str.


  Example 1:

  Input: str = "red2 blue5 black4 green1 gold3"
  Output: "green red gold black blue"

  Example 2:

  Input: str = "gold2 black1 white3"
  Output: "black gold white"

 

  Constraints:

  2 <= str.length <= 200
  str consists of multiple color names, spaces, and digits from 1 to 9.
  str contains up to 9 color names.
  str contains at least one color name.
  Color names in str in are separated by a single space.
  str contains no leading or trailing spaces.
*/


#include <cctype>
#include <iostream>
#include <istream>
#include <locale>
#include <string>
#include <sstream>
#include <utility>
#include <vector>
#include <iterator>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
  string solution(string s) {
    // write your solution here
    std::map<int, std::string> map;
    std::string result, tmp;
    for (int i = 0, r = 0; i < s.length(); i++) {
      if (isdigit(s.at(i), std::locale("en_US.UTF8"))) {	
	tmp = s.substr(i-r, r);
	tmp.erase(std::remove_if(tmp.begin(), tmp.end(), ::isspace), tmp.end());
	map.insert(std::make_pair(s.at(i), tmp));
	r = 0;
      } else {
	r++;
      }
    }
    
    std::map<int, std::string>::iterator it;
    for (it = map.begin(); it != map.end(); it++) {
      result.append(it->second);
      if (std::next(it) != map.end()) result.append(" ");  
    }
    
    return result;
  }
};

/**
   R E A D M E
   DO NOT CHANGE the code below, we use it to grade your submission. If changed your submission will be failed automatically.
**/
int main()
{
  string a;
  getline(cin, a);

  Solution solution;
  string output = solution.solution(a);

  std::cout << output << endl;

  return 0;
}

