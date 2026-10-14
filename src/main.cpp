#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  using namespace std;
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  string input;
  std::getline(std::cin, input);

  // TODO: Uncomment the code below to pass the first stage
  cout << "$ ";;
  cin >> input;
  cout << input << "command not found\n";
}
