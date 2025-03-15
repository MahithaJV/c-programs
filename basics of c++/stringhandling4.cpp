#include <iostream>
#include <cstring>
using namespace std;

void compressString(char str[]) {
    int len = strlen(str);  // Get length of input string
    char compressed[50];    // Buffer for compressed string
    int index = 0, count = 1;

    for (int i = 1; i <= len; i++) {  
        if (str[i] == str[i - 1]) {  
            count++;  // Count repeated characters
        } else {
            compressed[index++] = str[i - 1];  // Store character
            compressed[index++] = '0' + count; // Convert count to char
            count = 1;  // Reset count for new character
        }
    }
    compressed[index] = '\0';  // Null terminate the compressed string

    cout << "Compressed: " << compressed << endl;
}

int main() {
    char str[] = "aaabbc";
    compressString(str);
    return 0;
}
