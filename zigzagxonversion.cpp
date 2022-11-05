
#include <iostream>
#include <string>
class Solution {
public:
  std::string convert(std::string s, int numRows) {
    std::string result = s;

    int nodeDistance = (numRows - 1) * 2, index, displacement = 0;

    for (int i = 0; i < s.length(); i++) {      
      index = i % nodeDistance;
      if (i != 0 && index == 0) displacement++;
      
      if (index > numRows - 1){
	std::cout << "x" << " - " << i << " " << displacement <<std::endl;
	result.at(index + displacement) = ' ';
      } else {
	std::cout << index << " - " << i << " " << displacement <<std::endl;
	result.at(index + displacement) = s.at(i);
      }      
    }    
    
    return result;
  }
};


int main() {

  std::string s = "PAYPALISHIRING";
  int numRows = 4;

  Solution solution;
  std::cout << solution.convert(s, numRows) << std::endl;
  std::cout << "PAYPALISHIRING" << std::endl;  
}
