# Introduction to C++

## 1. First C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

### Breakdown:

**`#include <iostream>`**
- Preprocessor directive (runs before compilation)
- #include means the inclusive preprocessor
- the iostream file is needed for streaming input and output

**`using namespace std;`**
- Standard namespace (explanation in section 1.1)

**`int main()`**
- Every C++ program has a  main function()
- main() is the entry point of the program
- Returns integers to indicate program's status after execution

**`cout << "text"`**
- cout means Character output
- `<<` is the insertion operator (pushes data to screen)
- `endl` simply means end-line or go to next line

### 1.1 Namespaces?

A **namespace** is like a container that groups related code together to avoid naming conflicts.

**Why do we need namespaces?**
- Imagine two functions named log() 
- One function could mean the mathematical log another one could mean just logging(printing), recording
- so to avoid this type of naming conflicts we use namespaces
- Namespace tells C++ which "log" or which function we're talking about
- `std` is the **standard namespace** where C++ keeps cout, cin, endl, etc.
- or we could have `math` namespace for **mathematical log** and `app` namespace for the **other log**

**Two ways to use namespaces:**

```cpp
// Method 1: Using namespace declaration (easier)
using namespace std;
cout << "Hello";   // Can use cout directly

// Method 2: Without using namespace (more explicit)
std::cout << "Hello";  // Must specify std:: before cout
std::cin >> number;     // Must specify std:: before cin
```

### 1.2  Stream Operators `<<` and `>>`

**The Output Operator `<<` (Insertion Operator)**

Think of `<<` as an arrow pointing LEFT (toward the output):
```cpp
cout << "Hello"    // Arrow pushes "Hello" into cout (screen)
     ↑↑
   points left
```

**The Input Operator `>>` (Extraction Operator)**

Think of `>>` as an arrow pointing RIGHT (toward the variable):
```cpp
cin >> age         // Arrow extracts data from cin (keyboard) into age
    ↑↑
  points right
```


**Chaining multiple operations:**
```cpp
cout << "Name: " << name << ", Age: " << age << endl;
// Each << pushes the next piece of data to cout

cin >> firstName >> lastName;
// Each >> extracts the next value from keyboard
```

---

## 2. Variables and Data Types

### Basic Data Types:

```cpp
int age = 21;              // whole numbers
double price = 19.99;      // decimal numbers
char grade = 'A';          // single character (use single quotes)
string name = "Epstein";     // text (use double quotes)
bool passed = true;        // true or false
```

### Quick Reference:
| Type | Use For | Example |
|------|---------|---------|
| int | whole numbers | 42 |
| double | decimals | 3.14 |
| char | one character | 'A' |
| string | text | "Hello" |
| bool | yes/no | true |

### Variable Naming Rules:
- Start with letter or underscore
- No spaces, no special characters
- Can't start with number
- Use meaningful names

### Data Type Ranges and Precision:



**Integer Types:**
| Type | Size | Range | Use Case |
|------|------|-------|----------|
| int | 4 bytes | -2,147,483,648 to 2,147,483,647 | General whole numbers |
| short | 2 bytes | -32,768 to 32,767 | Small numbers, save memory |
| long | 8 bytes | ±9 quintillion | Very large numbers |
| unsigned int | 4 bytes | 0 to 4,294,967,295 | Only positive numbers |

**Floating Point Types:**
| Type | Size | Precision | Example Use |
|------|------|-----------|-------------|
| float | 4 bytes | ~7 decimal digits | 3.14159 |
| double | 8 bytes | ~15 decimal digits | 3.141592653589793 |
| long double | 16 bytes | ~19 decimal digits | Scientific calculations |

**Character and Boolean:**
| Type | Size | Range/Values |
|------|------|-------------|
| char | 1 byte | -128 to 127 or any ASCII character |
| bool | 1 byte | true (1) or false (0) |

**Important Notes:**
- `int` can store about ±2 billion
- Going beyond the range causes **overflow** (wraps around)
- `float` vs `double`: use `double` for better precision
- 1 byte = 8 bits

**Example of choosing the right type:**
```cpp
int age = 25;              // int is enough for age (0-120)
double accountBalance = 1523.47;  // double for money (needs decimals)
char initial = 'R';        // char for single letter
bool isStudent = true;     // bool for yes/no
```

### Primitive vs Derived Data Types

**Primitive Data Types (Built-in Types)**

These are basic types built into C++. You don't need to include anything extra to use them.

```cpp
// Primitive types - already in C++
int count = 10;
double price = 99.99;
char letter = 'A';
bool isValid = true;
float temperature = 98.6;
```

**Derived Data Types (Made from Primitives)**

These are built using primitive types. Some need libraries and some doesnt.

```cpp
// Arrays - collection of same type
int numbers[5] = {1, 2, 3, 4, 5};
char name[20] = "Rohit";

// String - needs #include <string>
string fullName = "Albert einstein";

// Pointers - stores memory addresses
int* ptr = &count;

// Functions...
int add(int a, int b) {
    return a + b;
}
```

**Quick Comparison:**

| Category | Examples | Notes |
|----------|----------|-------|
| Primitive | int, double, char, bool, float | Built into C++ |
| Derived | arrays, strings, pointers, functions | Made from primitives |



## 3. Input and Output

### Output (cout):
```cpp
cout << "Hello";                    // just text
cout << age;                        // just variable
cout << "Age: " << age << " years"; // mixed
```

### Input (cin):
```cpp
int number;
cout << "Enter a number: ";
cin >> number;
```


---

## 4. Basic Math Operators

```cpp
+   addition
-   subtraction
*   multiplication
/   division
%   remainder (modulus)
```

**Important:** Integer division drops decimals
- `7 / 2` = 3 (not 3.5)
- `7.0 / 2` = 3.5

---

## 5. Practice Exercises

**Exercise 1:** Personal Info
- Ask for name, age, and favorite number
- Display them in a formatted way

**Exercise 2:** Temperature Converter
- Input: Fahrenheit temperature
- Calculate: Celsius = (F - 32) × 5/9
- Display the result

**Exercise 3:** Circle Calculator  
- Input: radius
- Calculate: diameter, circumference, area
- Use PI = 3.14159

---






