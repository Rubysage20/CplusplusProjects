#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

void replaceThreeLetterWords(std::string& word) {
  if(word.length() == 3) {
    if(isupper(word[0])) {
      word = "C++";
    }else{
      word = "c--";
    }
    }
  }
int main() {
  std::ifstream inputFile("input.txt");
  std::ofstream outputFile("output.txt");

  if(!inputFile.is_open()) {
    std::cerr <<"Error opening input file." << std::endl;
      return 1;
  }
  if(!outputFile.is_open()) {
    std::cerr <<"Error opening output file." << std::endl;
    return 1;
  }
  std::string word;
  while(inputFile >> word) {
    replaceThreeLetterWords(word);
    std:: cout << word << " ";
    outputFile << word << " ";
  }
  inputFile.close();
  outputFile.close();
  return 0; 
}