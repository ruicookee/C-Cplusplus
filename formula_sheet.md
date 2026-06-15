# Layout of a C Programme
## Comments
- `/* this is a long comment */`
- `// this is a single line comment`

## Identifiers
- varaibles like `double val = 10.0;`
- functions like `int main() {}`
- Legal identifiers include: _yay_, yay123, _yay_321 
- as long as no space, dont start with num, not keywords
- make sure they are descriptive

## Keywords
- reserved words with special meaning
- `int` `float` `if` `while`

## Operators
- To perform operations
- `+` `==` `++`

## Punctuators
- used to structure programme
- `;   ,   ( )   { }   [ ]`

## Preprocessor Directives
- `#include <stdio.h>`
- `#define PI 3.14`

## Tokens
- smallest individual unit in C
- compiler breaks code into small pieces eg.`int a = 10;` is 5 tokens
- Keywords, Identifiers, Constants, String literals, Operators, Punctuators

# Char Types
## Plain char
- single character (1 byte)
## Signed char
- stored values with a sign
## Unsigned char
- only non-negative values

# Integer Types
## int (normal)
- default int type (4 bytes)
## short
- usually smaller than int (2 bytes)
## long
- at least as large as int (4 - 8 bytes)
## long long
- at least 8 bytes
## Signed and Unsigned
- signed can represent -ve and +ve
- unsigned only +ve but gets larger range
