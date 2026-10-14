#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  using namespace std;
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  cout << "$ ";
  string input;
  getline(std::cin, input);
  cin >> input;
  cout << input << "command not found\n";
}
