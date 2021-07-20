#include <iostream>
#include <string>

int main() {
  int check=0;
  std::string key_1="MOLANA";
  std::string key_2="HAFEZ";
  std::string data[5];
  for (int i=0;i<5;i++){
    std::getline(std::cin, data[i]);
  }
  for (int i=0;i<5;i++){
    size_t found_1 = data[i].find(key_1);
    size_t found_2 = data[i].find(key_2);
    if ((found_1 != std::string::npos) || (found_2 != std::string::npos)){
      std::cout << i+1 << ' ';
      check=1;
    }
  }
  if(check==0)
    std::cout << "NOT FOUND!" << std::endl;
  return 0;
}