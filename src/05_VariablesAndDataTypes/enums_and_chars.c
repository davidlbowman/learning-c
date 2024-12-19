#include <stdio.h>

int main() {

    enum primaryColor {red, yellow, blue};
    enum primaryColor myColor = red;
    // enum primaryColor invalidColor = purple;
    enum primaryColor firstColor = 0;

    enum direction {north, south, east = 10, west};
    enum direction myDirection = north;
    // enum direction invalidDirection = 11;
    enum direction numericDirection = 10;

    char myLetter = 'D'; // 8-bit character
    char myString[] = "Hello World!"; // 8-bit character array

    char aCharOrString = "D"; // Not recommended, it thinks it's a string.
    // char aVariableOrAChar = D; // This is not recommended, it thinks it's a variable.
    char ASCIIValue = 65; // This is the ASCII value for the letter A.

    // Escape Sequences
    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char backslash = '\\';
    char singleQuote = '\'';
    char doubleQuote = '\"';
    char questionMark = '\?';
    char nullCharacter = '\0';
    char alert = '\a';
    
    return 0;
}