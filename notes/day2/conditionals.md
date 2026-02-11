# Conditionals in C++

## Introduction

**What are conditionals?** They let our program divert the flow based on some conditions!
Similar to decision making

---

## 1. Comparison Operators

For decision making or for checking condition, we must make some kind of comparison.

### 1.1 The Six Comparison Operators

```cpp
==    Equal to
!=    Not equal to
>     Greater than
<     Less than
>=    Greater than or equal to
<=    Less than or equal to
```



### 1.2 Common Mistake: = vs ==

```cpp
// WRONG - Single = is assignment!
if (age = 18) {      // This ASSIGNS 18 to age!
    // This will always run
}

// CORRECT - Double == is comparison
if (age == 18) {     // This COMPARES age with 18
    // This runs only if age is 18
}
```

### 1.3 Comparing Different Types

```cpp
// Numbers
int x = 10;
double y = 10.0;
x == y              // true (values are equal)

// Characters (compares ASCII values)
char letter = 'A';
letter == 65        // true ('A' has ASCII value 65)
letter < 'Z'        // true ('A' comes before 'Z')


---

## 2. The if Statement

**Basic Structure:**
```cpp
if (condition) {
    // code runs if condition is true
}
```

### 2.1 Simple if Examples

```cpp
// Example 1: Age check
if (age >= 18) {
    cout << "You can vote!" << endl;
}
```



## 3. The if-else Statement

**Structure:**
```cpp
if (condition) {
    // runs if condition is TRUE
} else {
    // runs if condition is FALSE
}
```

### 3.1 if-else Examples

```cpp
// Example 1: Pass or Fail
int score = 75;
if (score >= 60) {
    cout << "You passed!" << endl;
} else {
    cout << "You failed!" << endl;
}



### 3.2 Real-World Example

```cpp
// Online shopping
double cartTotal = 45.50;
const double FREE_SHIPPING = 50.0;

if (cartTotal >= FREE_SHIPPING) {
    cout << "You get free shipping!" << endl;
} else {
    double needed = FREE_SHIPPING - cartTotal;
    cout << "Add $" << needed << " more for free shipping" << endl;
}
```

---

## 4. The else-if Chain

When you have multiple conditions to check.

**Structure:**
```cpp
if (condition1) {
    // runs if condition1 is true
} else if (condition2) {
    // runs if condition1 is false AND condition2 is true
} else if (condition3) {
    // runs if condition1 and condition2 are false AND condition3 is true
} else {
    // runs if all conditions are false
}
```

### 4.1 Grade Calculator

```cpp
int score = 85;

if (score >= 90) {
    cout << "Grade: A" << endl;
} else if (score >= 80) {
    cout << "Grade: B" << endl;
} else if (score >= 70) {
    cout << "Grade: C" << endl;
} else if (score >= 60) {
    cout << "Grade: D" << endl;
} else {
    cout << "Grade: F" << endl;
}
// Output: Grade: B
```


### 4.2 Important: Order Matters!

```cpp
// CORRECT order (specific to general)
if (score >= 90) {
    cout << "A" << endl;
} else if (score >= 80) {
    cout << "B" << endl;
}

// WRONG order - will never reach B!
if (score >= 80) {      // This catches both 80+ AND 90+
    cout << "B" << endl;
} else if (score >= 90) {  // Never reached!
    cout << "A" << endl;
}
```

**Rule:** Put the most specific conditions first!

---

## 5. Nested if Statements

An if statement inside another if statement.

### 5.1 Basic Nested if

```cpp
int age = 20;
bool hasLicense = true;

if (age >= 18) {
    if (hasLicense) {
        cout << "You can drive!" << endl;
    } else {
        cout << "You need a license first." << endl;
    }
} else {
    cout << "You're too young to drive." << endl;
}
```



### 5.2 Tip: Avoid Deep Nesting

```cpp
// BAD - Too many levels
if (condition1) {
    if (condition2) {
        if (condition3) {
            if (condition4) {
                // Too deep! Hard to read
            }
        }
    }
}

// BETTER - Use logical operators (covered next)
if (condition1 && condition2 && condition3 && condition4) {
    // Much clearer!
}
```

---

## 6. Logical Operators

Combine multiple conditions together.

### 6.1 The Three Logical Operators

```cpp
&&    AND - both conditions must be true
||    OR - at least one condition must be true
!     NOT - reverses true/false
```

### 6.2 AND Operator (&&)

**Both conditions must be true**

```cpp
int age = 20;
bool hasTicket = true;

// Can enter if age >= 18 AND has ticket
if (age >= 18 && hasTicket) {
    cout << "Welcome to the concert!" << endl;
}
```

**Truth Table for AND:**
```
true  && true  → true
true  && false → false
false && true  → false
false && false → false
```

### 6.3 OR Operator (||)

**At least one condition must be true**

```cpp
char grade = 'A';

// Pass if grade is A OR B
if (grade == 'A' || grade == 'B') {
    cout << "Excellent!" << endl;
}
```

**Truth Table for OR:**
```
true  || true  → true
true  || false → true
false || true  → true
false || false → false
```

### 6.4 NOT Operator (!)

**Reverses the condition**

```cpp
bool isRaining = false;

if (!isRaining) {
    cout << "Go outside!" << endl;  // Runs because !false = true
}
```

### 6.5 Combining Logical Operators

```cpp
// Example 1: College admission
int gpa = 3.5;
int satScore = 1200;
bool hasRecommendation = true;

if ((gpa >= 3.0 && satScore >= 1100) || hasRecommendation) {
    cout << "Accepted!" << endl;
}

```

### 6.6 Operator Precedence

**Order of evaluation:**
1. `!` (NOT) - evaluated first
2. `&&` (AND) - evaluated second
3. `||` (OR) - evaluated last

```cpp
// Example
bool a = true, b = false, c = true;

// Without parentheses
if (a || b && c) {
    // Evaluated as: a || (b && c)
    // true || (false && true)
    // true || false
    // true
}

// With parentheses (clearer!)
if ((a || b) && c) {
    // (true || false) && true
    // true && true
    // true
}
```

**Best Practice:** Use parentheses `()` to make your intention clear!

---

## 7. The switch Statement

**When to use:** Checking one variable against many possible values.

### 7.1 Basic switch Structure

```cpp
switch (variable) {
    case value1:
        // code for value1
        break;
    case value2:
        // code for value2
        break;
    case value3:
        // code for value3
        break;
    default:
        // code if no case matches
        break;
}
```

### 7.2 switch Examples

```cpp
// Example 1: Day of week
int day = 3;

switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
        break;
}
// Output: Wednesday
```

### 7.3 Character switch

```cpp
char grade = 'B';

switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "Satisfactory" << endl;
        break;
    case 'D':
        cout << "Needs improvement" << endl;
        break;
    case 'F':
        cout << "Failed" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
        break;
}
// Output: Good job!
```

### 7.4 The Importance of break

**Without break, it "falls through" to the next case!**

```cpp
int number = 2;

// Without break (WRONG!)
switch (number) {
    case 1:
        cout << "One" << endl;
    case 2:
        cout << "Two" << endl;
    case 3:
        cout << "Three" << endl;
    default:
        cout << "Other" << endl;
}
// Output: Two
//         Three
//         Other
// (All three print!)

// With break (CORRECT)
switch (number) {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    default:
        cout << "Other" << endl;
        break;
}
// Output: Two
// (Only "Two" prints)
```

### 7.5 Grouping Cases

Sometimes multiple cases should do the same thing.

```cpp
// Example 1: Weekday vs Weekend
char day = 'S';

switch (day) {
    case 'M':
    case 'T':
    case 'W':
    case 'R':
    case 'F':
        cout << "Weekday - Go to work" << endl;
        break;
    case 'S':
    case 'U':
        cout << "Weekend - Relax!" << endl;
        break;
    default:
        cout << "Invalid day code" << endl;
        break;
}
// Output: Weekend - Relax!

// Example 2: Vowel check
char letter = 'e';

switch (letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
        break;
}
// Output: Vowel
```

### 7.6 switch vs if-else

**Use switch when:**
- Checking ONE variable against many exact values
- Values are integers, characters, or enums
- Need clean, readable code for many options

**Use if-else when:**
- Checking ranges (e.g., `score >= 90`)
- Multiple different conditions
- Using logical operators (&&, ||)
- Comparing strings, floats, or complex conditions

```cpp
// Good for switch
int choice = 2;
switch (choice) {
    case 1: /* ... */ break;
    case 2: /* ... */ break;
    case 3: /* ... */ break;
}

// Better with if-else
int score = 85;
if (score >= 90) {
    // ...
} else if (score >= 80) {
    // ...
}
```

---

## 8. The Ternary Operator

**Shorthand for simple if-else**

### 8.1 Basic Structure

```cpp
condition ? valueIfTrue : valueIfFalse
```

### 8.2 Examples

```cpp
// Example 1: Even or Odd
int num = 7;
string result = (num % 2 == 0) ? "even" : "odd";
cout << result << endl;  // Output: odd

// Long form (same thing):
string result;
if (num % 2 == 0) {
    result = "even";
} else {
    result = "odd";
}

// Example 2: Max of two numbers
int a = 10, b = 20;
int max = (a > b) ? a : b;
cout << "Max: " << max << endl;  // Output: Max: 20



### 8.3 When to Use Ternary

**Good use (simple, one-line):**
```cpp
int age = 20;
string category = (age >= 18) ? "Adult" : "Minor";
```

**Bad use (too complex):**
```cpp
// Hard to read!
string result = (age >= 18) ? (hasLicense ? "Can drive" : "Need license") : "Too young";

// Better as regular if-else
if (age >= 18) {
    if (hasLicense) {
        result = "Can drive";
    } else {
        result = "Need license";
    }
} else {
    result = "Too young";
}
```


---

