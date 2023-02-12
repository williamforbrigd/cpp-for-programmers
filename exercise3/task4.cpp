#include <iostream>
#include <string>

using namespace std;

void find_all_occurences(string sub, string sentence) {
  unsigned long index = 0;
  bool found = false;
  while ((index = sentence.find(sub, index)) != string::npos) {
    cout << "index of first occurrence of \"" << sub << "\": " << index << endl;
    index += sub.length();
    found = true;
  }
  if (!found)
    cout << "Could not find any \"er\" in the sentence" << endl;
}

int main() {
  string word1, word2, word3;
  cout << "Word1: ";
  cin >> word1;
  cout << "Word2: ";
  cin >> word2;
  cout << "Word3: ";
  cin >> word3;

  string sentence = word1 + " " + word2 + " " + word3;
  cout << sentence << endl;
  cout << "Word 1 length: " << word1.length() << endl;
  cout << "Word 2 length: " << word2.length() << endl;
  cout << "Word 3 length: " << word3.length() << endl;
  cout << "Sentence length: " << sentence.length() << endl;

  string &sentence2 = sentence;

  cout << "the lengt of the sentence: " << sentence.length() << endl;

  if (sentence2.length() >= 12) {
    sentence2[9] = 'x';
    sentence2[10] = 'x';
    sentence2[11] = 'x';
  }
  cout << "Sentence:  " << sentence << endl;
  cout << "Sentence2: " << sentence2 << endl;

  if (sentence.length() >= 5) {
    const string &sentence_start = sentence.substr(0, 5);
    cout << "Sentence: " << sentence << endl;
    cout << "Sentence start: " << sentence_start << endl;
  } else {
    cout << "The length of the sentence is shorter than 5 characters" << endl;
  }
  size_t found = sentence.find("hello");
  if (found != string::npos) {
    cout << "Found \"hello\" in the sentence" << endl;
  } else {
    cout << "Could not find \"hello\" in the sentence" << endl;
  }

  find_all_occurences("er", sentence);

  return 0;
}
