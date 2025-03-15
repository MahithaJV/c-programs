#include <iostream>
#include <cstring>
using namespace std;

void reverseWords(char str[]) {
    char *word = strtok(str, " "); // Tokenize using space
    char words[10][20]; // Array to store words
    int count = 0;
    
    while (word != nullptr) {
        strcpy(words[count++], word); // Store words in array
        word = strtok(nullptr, " ");
    }
    
    for (int i = count - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }
    cout << endl;
}

int main() {
    char str[] = "Hello World from C++";
    reverseWords(str);
    return 0;
}
