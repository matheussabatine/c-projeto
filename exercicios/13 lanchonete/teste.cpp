/*
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::istringstream;
using std::string;
using std::vector;

int main() {
  string text =
      "Vivamus quis sagittis diam. "
      "Cras accumsan, dui id varius "
      "vitae tortor.";
  string delimiter = "a";
  vector<string> words{};

  size_t pos;
  while ((pos = text.find(delimiter)) != string::npos) {
    words.push_back(text.substr(0, pos));
    text.erase(0, pos + delimiter.length());
  }
  for (const auto &str : words) {
    cout << str << endl;
  }

  return EXIT_SUCCESS;
}
*/