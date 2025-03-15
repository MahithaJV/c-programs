#include <iostream>
#include <cstring> // For strcpy() and strlen()
using namespace std;

bool isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) return false; // Rotation must have same length

    char temp[2 * len1 + 1]; // Create a new array for concatenation
    strcpy(temp, str1); // Copy str1
    strcat(temp, str1); // Concatenate str1 to itself

for (int i = 0; i <= strlen(temp) - len1; i++) {  // Iterate through temp
    bool match = true;
    
    // Check character-by-character if temp[i : i+len1] matches str2
    for (int j = 0; j < len1; j++) {
        if (temp[i + j] != str2[j]) {  // If any character mismatches, stop
            match = false;
            break;
        }
    }
    
    if (match) return true;  // If we found a match, return true
}


int main() {
    char str1[] = "abcde";
    char str2[] = "deabc";

    if (isRotation(str1, str2)) 
        cout << "True" << endl;
    else 
        cout << "False" << endl;

    return 0;
}
