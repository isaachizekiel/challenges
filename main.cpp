#include <iostream>
#include <type_traits>


bool isValid(std::string str) {
  bool result = false;
  int strLength = str.length();
  if (strLength % 2 != 0) return false;
  
  for (int i =0 ; i < strLength; i += 2) {
    switch (str.at(i)) {
    case '(':
      result = str.at(i+1) == ')';
      break;
    case '[':
      result = str.at(i+1) == ']';
      break;
    case '{':
      result = str.at(i+1) == '}';
      break;
    default:
      result = false;
    }
  }
  return result;
}


// ( = 40
// ) = 41
// [ = 91
// ] = 92
// { = 123
// } = 125


int main() {
  std::string str;
  int strLength;
  
  std::cout << "Enter a sequence of characters !" << std::endl;  
  std::cin >> str;
  strLength = str.length();

  std::cout << "You Entered: " << str << std::endl;

  if (isValid(str)) std::cout << str << " is valid" << std::endl;
  else std::cout << str << " is not valid" << std::endl;		      
    
  return 0;
}
