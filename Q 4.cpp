#include <iostream>
#include <string>
using namespace std;

int countWords(string sentence) {
    int count = 0;
    bool isWord = false;
    for (char c : sentence) {
        if (c == ' ' || c == '\n' || c == '\t') {
            isWord = false;
        } else if (!isWord) {
            isWord = true;
            count++;
        }
    }
    return count;
}

int main() {
    string sentence = "This is a sample sentence.";
    cout << "Number of words: " << countWords(sentence) << endl;
    return 0;
}
