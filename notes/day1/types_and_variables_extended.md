# Types, Variables, and Typecasting - Extended Guide

## 1. Type Casting

Type casting means converting a value from one data type to another.
During type casting compromises are made ( sometimes data loss, precision loss etc)

### Why Do We Need Type Casting?

say we need to divide 5 by 8
- As fractions: 5/8 = 0.625 (more than half)
- As whole numbers: 5/8 = 0 (loses the decimal part!)
``` even tho 5 and 8 are integers(whole numbers), mathematically the true result of division must be a decimal```

This is exactly what happens in C++ with different data types!

**Real-World Reasons:**

1. **Getting Accurate Calculations**
```cpp
int total = 100;
int students = 3;
double perPerson = total / students;  // Gives 33.0 (wrong!)
// We want 33.333... but integer division gives us 33
```

2. **Storing Different Sized Data**
```cpp
double price = 19.99;
int dollars = price;  // Need to extract just the dollar part
// Without casting, compiler might complain or give warnings
```

3. **Working with User Input**
```cpp
// User enters their test score as a percentage
int score = 85;  // They got 85%
// But we need to calculate: 85% of 120 points
double actualPoints = score / 100.0 * 120;  // Need decimal division!
```

**Think of it like this:**
- Sometimes you need precision (double), sometimes you don't (int)
- C++ needs to know you're doing it on purpose!

### 1.1 Implicit Type Casting (Automatic)

** --> ** C++ automatically converts smaller types to larger types when it's safe.


```cpp
int x = 10;
double y = x;        // int → double (automatic, safe)
cout << y;           // Output: 10.0
// Why safe? double can hold all int values + decimals
```

**More Examples:**
```cpp
// Example 1: Small to large (automatic)
char letter = 'A';   // Behind the scenes: 'A' is stored as 65
int num = letter;    // char → int (automatic)
cout << num;         // Output: 65

// Example 2: Less precise to more precise
float f = 3.14f;     // float has ~7 digits precision
double d = f;        // double has ~15 digits precision (automatic)

// Example 3: In calculations
int count = 5;
double result = count * 2.5;  // int becomes double automatically
cout << result;      // Output: 12.5
```

**Type Size Hierarchy (small → large):**
```
Smaller → Larger (automatic conversion is safe)
char → short → int → long → float → double
```

**Key Point:** C++ does this automatically because no data is lost!

### 1.2 Explicit Type Casting (Manual)

**What is it?** When going from larger to smaller, YOU must tell C++ "I know what I'm doing!"

**Why manual?** Because data might be lost

**Method 1: C-Style Cast (Old way, but common)**
```cpp
double pi = 3.14159;
int wholeNumber = (int)pi;    // Chops off .14159 → keeps 3
cout << wholeNumber;          // Output: 3

// Real example: Money
float price = 19.99;
int dollars = (int)price;     // Get only dollar part → 19
cout << "$" << dollars;       // Output: $19


**Method 2: C++ Style Cast (Better way, preferred)**
```cpp
double x = 7.8;
int y = static_cast<int>(x);  // Clearer and safer
cout << y;                     // Output: 7


// More examples:
char ch = 'A';
int asciiValue = static_cast<int>(ch);  // Output: 65

double balance = 1234.56;
int wholeDollars = static_cast<int>(balance);  // Output: 1234
```

### 1.3 Type Casting in Division (VERY IMPORTANT!)

**The Big Problem:** Integer division throws away decimals!

**Why does this happen?**
```cpp
int a = 7, b = 2;
double result = a / b;     // You might expect 3.5, but you get 3.0!



**Real-World Example:**
```cpp
// Calculate class average
int numStudents = 5;
int totalPoints = 437;
average1 = totalPoints / numStudents;         // 87.0 (wrong! Lost .4)
average2 = (double)totalPoints / numStudents; // 87.4 (correct!)
```

**Multiple Solutions:**

```cpp
int a = 7, b = 2;

// Solution 1: Cast one number to double
double result1 = (double)a / b;         // 3.5 ✓
double result2 = a / (double)b;         // 3.5 ✓ (either one works)

// Solution 2: Use static_cast (preferred in professional code)
double result3 = static_cast<double>(a) / b;  // 3.5 ✓



**Remember:** Cast BEFORE dividing, not after!
```cpp
int x = 10, y = 3;

// Wrong order:
double bad = (double)(x / y);   // 3.0 - division already happened!

// Right order:
double good = (double)x / y;    // 3.333... - division uses double
```

### 1.4 Data Loss Warning

```cpp
// Be careful: casting can lose data!
double bigNum = 1234.56789;
int smallNum = (int)bigNum;    // Loses decimal: 1234

int large = 300;
char tiny = (char)large;       // char range: -128 to 127
cout << tiny;                  // Overflow! Unpredictable result
```

---

## 2. Const Variables

**What is const?** It makes a variable **read-only** - like permanent markers



### 2.1 Basic const Usage

```cpp
const double PI = 3.14159;     // Must set value immediately
const int MAX_STUDENTS = 30;
const char GRADE = 'A';

// PI = 3.14;  // ERROR! Can't change const - it's permanent!

// Real-world example:
const double TAX_RATE = 0.08;  // Sales tax in your state
const int DAYS_IN_WEEK = 7;    // This never changes!
```

**Why use const? (Very practical reasons!)**

1. **Prevents Mistakes:**
```cpp
const double SPEED_OF_LIGHT = 299792458;  // meters per second
// Later in code:
// SPEED_OF_LIGHT = 123;  // ERROR! Compiler stops you!
```

2. **Makes Code Clearer:**
```cpp
// Bad (hard to understand):
if (age > 18) { ... }

// Good (clear meaning):
const int VOTING_AGE = 18;
if (age > VOTING_AGE) { ... }
```

3. **Easy to Update in One Place:**
```cpp
const double PRICE_PER_ITEM = 9.99;
// Used 50 times in your code
// Need to change price? Change it once!
```


---

## 3. Type Modifiers

**What are modifiers?** They adjust how much space a variable takes and what values it can hold.

### 3.1 Signed vs Unsigned

**Simple Explanation:**
- **signed** (default) = can be negative or positive (like a thermometer: -10°F to +100°F)
- **unsigned** = only positive numbers (like counting people: 0, 1, 2, 3...)

```cpp
// signed (default) - allows negative numbers
int normalInt = -42;           // Can be: -2 billion to +2 billion
signed int same = -42;         // "signed" is optional (it's default)

// unsigned - NO negative numbers allowed
unsigned int positiveOnly = 42; // Can be: 0 to 4 billion
// unsigned int wrong = -5;     // ERROR or weird behavior!
```

**When to use unsigned (Real examples):**




**..:** `unsigned` gives you double the positive range!
- signed int: -2 billion to +2 billion
- unsigned int: 0 to 4 billion

```cpp
unsigned int studentCount = 150;
unsigned char colorValue = 255;   // RGB values (0-255)
```

### 3.2 Short and Long (Size Options)


**Memory Comparison:**
```cpp
short s = 100;   // Uses 2 bytes of memory
int i = 100;     // Uses 4 bytes of memory
long l = 100;    // Uses 8 bytes of memory

// All store 100, but use different amounts of memory!
// Use short when you know numbers will be small
```


---

## 4. The sizeof Operator

**What is sizeof?** It tells you how much memory (in bytes) a variable uses.

**Think of it like:** Checking how much storage space a file takes on your computer.

### 4.1 Basic Usage

```cpp
// Check size of data types
cout << "Size of int: " << sizeof(int) << " bytes" << endl;
cout << "Size of double: " << sizeof(double) << " bytes" << endl;
cout << "Size of char: " << sizeof(char) << " bytes" << endl;
cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

// Check size of variables
int x = 10;
double y = 3.14;
cout << "Size of x: " << sizeof(x) << " bytes" << endl;
cout << "Size of y: " << sizeof(y) << " bytes" << endl;
```

**Typical Output:**
```
Size of int: 4 bytes
Size of double: 8 bytes
Size of char: 1 bytes
Size of bool: 1 bytes
```

**What's a byte?**
- 1 byte = 8 bits
- 1 byte can store a number from 0-255
- int uses 4 bytes = 32 bits = can store HUGE numbers

**Why does this matter?**
```cpp
// If you're making a game with 1000 characters:
short health = 100;     // 2 bytes × 1000 = 2,000 bytes
int health = 100;       // 4 bytes × 1000 = 4,000 bytes
// Using short saves 2,000 bytes of memory!
```






---

## 5. The auto Keyword

**What is auto?** Let C++ figure out the type for you!

**Think of it like:** When someone says "I'll have the usual" - the waiter already knows what they want.

### 5.1 Basic auto Usage

```cpp
// Instead of specifying the type, use auto
auto x = 5;           // C++ thinks: "5 is an int" → x is int
auto y = 3.14;        // C++ thinks: "3.14 is a double" → y is double
auto name = "John";   // C++ thinks: "text" → const char*
auto letter = 'A';    // C++ thinks: "'A' is a char" → letter is char
auto flag = true;     // C++ thinks: "true is a bool" → flag is bool

// This is exactly the same as:
int x = 5;
double y = 3.14;
const char* name = "John";
char letter = 'A';
bool flag = true;
```



### 5.2 auto with Expressions

```cpp
auto sum = 10 + 20;              // int + int = int
auto division = 10.0 / 3;        // double / int = double
auto mixed = 5 + 2.5;            // int + double = double

// auto follows type promotion rules!
```

---

## 6. Literals and Number Systems

### 6.1 Integer Literals

```cpp
int decimal = 42;        // Normal decimal
int octal = 052;         // Starts with 0 = octal (= 42 in decimal)
int hex = 0x2A;          // Starts with 0x = hexadecimal (= 42 in decimal)
int binary = 0b101010;   // Starts with 0b = binary (= 42 in decimal)

// Long literals
long bigNum = 1000000L;       // L suffix for long
long long huge = 1000000LL;   // LL suffix for long long

// Unsigned literals
unsigned int positive = 100U;  // U suffix for unsigned
```

### 6.2 Floating-Point Literals

```cpp
double d1 = 3.14;         // Normal decimal
double d2 = 3.14159;      
float f = 3.14f;          // f suffix for float (otherwise it's double)
float f2 = 3.14F;         // F also works

// Scientific notation
double scientific = 1.5e3;    // 1.5 × 10³ = 1500
double small = 1.5e-3;        // 1.5 × 10⁻³ = 0.0015
```



### 6.3 String Literals

```cpp
string text = "Hello, World!";
string path = "C:\\Users\\Desktop";    // Need \\ for single \
string quote = "He said \"Hi\"";       // \" for quotes inside string

// Multi-line (C++11)
string multi = "Line 1\n"
               "Line 2\n"
               "Line 3";
```




