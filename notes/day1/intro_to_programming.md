# Introduction to Programming

## What is Programming?

Programming is writing instructions for a computer to follow. But computers only understand 0s and 1s (binary).

---

## The Complete Compilation Process

### Overview:
```
Source Code (.cpp) → Preprocessor → Compiler → Assembler → Linker → Executable
```

Let's break down each step:

---

## Step 1: Source Code

You write human-readable code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "Value: " << x << endl;
    return 0;
}
```

**File:** `hello.cpp`
- Plain text file
- Contains C++ syntax
- Human-readable

---

## Step 2: Preprocessor

The preprocessor handles directives (lines starting with `#`)

**What it does:**
```cpp
#include <iostream>  // Copies entire iostream file here
#define PI 3.14      // Replaces all PI with 3.14
```

**Before Preprocessor:**
```cpp
#include <iostream>
int main() {
    cout << "Hello";
}
```

**After Preprocessor:**
```cpp
// Entire iostream library code pasted here (thousands of lines)
// ...all the cout, cin definitions...
int main() {
    cout << "Hello";
}
```

**Output:** Expanded source code (still text, but much larger)

---

## Step 3: Compiler - Lexical Analysis (Lexer/Tokenizer)

The **lexer** reads the code character by character and creates **tokens**.

**Original Code:**
```cpp
int x = 5;
```

**Tokenization:**
```
Token 1: "int"     → Type: KEYWORD
Token 2: "x"       → Type: IDENTIFIER
Token 3: "="       → Type: OPERATOR
Token 4: "5"       → Type: LITERAL
Token 5: ";"       → Type: PUNCTUATION
```

**What the lexer does:**
- Removes whitespace and comments
- Identifies keywords (int, return, if, etc.)
- Identifies operators (+, -, =, etc.)
- Identifies literals (numbers, strings)
- Creates a stream of tokens

---

## Step 4: Compiler - Syntax Analysis (Parser)

The **parser** checks if tokens follow C++ grammar rules and builds a tree structure.

**Code:**
```cpp
int x = 5 + 3;
```

**Parse Tree (Abstract Syntax Tree):**
```
        Declaration
            |
    ┌───────┴───────┐
   int              x
                    |
                Assignment
                    |
            ┌───────┴───────┐
            x            Addition
                           |
                      ┌────┴────┐
                      5         3
```

**What the parser does:**
- Checks syntax rules
- Builds tree structure
- Reports syntax errors
- Validates structure

**Example Error:**
```cpp
int x = ;  // Missing value - parser catches this!
```

---

## Step 5: Compiler - Semantic Analysis

Checks if the code **makes sense**.

**Type Checking:**
```cpp
int x = 5;        // ✓ OK: integer assigned to int
int y = "hello";  // ✗ ERROR: string to int
```

**Variable Declaration:**
```cpp
cout << z;        // ✗ ERROR: z not declared
int z = 5;
cout << z;        // ✓ OK: z is declared
```

**What semantic analyzer does:**
- Type checking
- Variable declaration checks
- Function signature validation
- Scope checking

---

## Step 6: Compiler - Intermediate Code Generation

Converts to intermediate representation (platform-independent).

**Original:**
```cpp
int x = 5 + 3;
```

**Intermediate Code (simplified):**
```
t1 = 5
t2 = 3
t3 = t1 + t2
x = t3
```

This is easier to optimize and convert to machine code.

---

## Step 7: Compiler - Optimization

Makes code faster and more efficient.

**Before Optimization:**
```cpp
int x = 5 + 3;
int y = x * 2;
```

**Intermediate:**
```
t1 = 5 + 3      // = 8
x = t1
t2 = x * 2      // = 16
y = t2
```

**After Optimization:**
```
x = 8           // Compiler calculated 5+3
y = 16          // Compiler calculated 8*2
```

**Types of Optimization:**
- Constant folding (calculate constants at compile time)
- Dead code elimination (remove unused code)
- Loop unrolling (make loops faster)
- Inline functions (replace function calls with code)

---

## Step 8: Compiler - Code Generation

Converts intermediate code to **assembly language**.

**Intermediate Code:**
```
x = 8
y = 16
```

**Assembly Code (x86):**
```assembly
mov eax, 8      ; Store 8 in register eax
mov [x], eax    ; Store eax in memory location x
mov eax, 16     ; Store 16 in register eax
mov [y], eax    ; Store eax in memory location y
```

Assembly is still human-readable (barely) but very close to machine code.

---

## Step 9: Assembler

Converts assembly to **machine code** (binary).

**Assembly:**
```assembly
mov eax, 8
```

**Machine Code (binary):**
```
10110000 00001000
```

**Object File (.o or .obj):**
- Contains machine code
- Not yet executable
- Needs linking

---

## Step 10: Linker

Combines your code with libraries and creates the final executable.

**What needs linking:**
```cpp
#include <iostream>  // Need cout implementation
cout << "Hello";     // Where is cout defined?
```

**Linker's Job:**
- Finds cout implementation in C++ standard library
- Combines your object file with library code
- Resolves all references
- Creates executable file

**Output:** Final executable (a.out or .exe)

---

## Complete Process Visualized

```
┌─────────────────┐
│  hello.cpp      │  Source Code (text)
│  int main() {   │
│    cout<<"Hi";  │
│  }              │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Preprocessor   │  Handles #include, #define
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Lexer          │  Creates tokens
│  [int][main][(] │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Parser         │  Builds syntax tree
│      main       │
│       |         │
│     block       │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Semantic       │  Type checking
│  Analysis       │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Intermediate   │  Platform-independent code
│  Code Gen       │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Optimizer      │  Make it faster
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Assembly Gen   │  mov, add, jmp...
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Assembler      │  Convert to binary
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Linker         │  Link with libraries
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  a.out / .exe   │  EXECUTABLE!
│  01001010101    │
└─────────────────┘
```

---

## Practical Example

**Command:**
```bash
g++ hello.cpp -o hello
```

**What g++ does (all in one command):**
1. Preprocessor → expands #include
2. Compiler → tokenize, parse, analyze, optimize
3. Assembler → generate machine code
4. Linker → link libraries
5. Output → executable file "hello"

**See intermediate steps:**
```bash
# Just preprocessing
g++ -E hello.cpp -o hello.i

# Compile to assembly
g++ -S hello.cpp -o hello.s

# Assemble to object file
g++ -c hello.cpp -o hello.o

# Link to executable
g++ hello.o -o hello
```

---

## Understanding Binary

**Source Code:**
```cpp
int x = 5;
```

**Binary (machine code):**
```
01001000 01000010 00000101
```

**What CPU sees:**
- Different bit patterns = different instructions
- CPU decodes and executes
- Extremely fast (billions per second)

---

---

## Types of Programming Languages

### Compiled Languages
**Examples:** C++, C, Rust, Go

**How it works:**
```
Write Code → Compile Once → Run Many Times
```

**Pros:**
- Very fast execution
- Catches errors early
- Optimized performance

**Cons:**
- Extra compilation step
- Platform-specific binaries

---

### Interpreted Languages
**Examples:** Python, JavaScript, Ruby

**How it works:**
```
Write Code → Interpreter reads & executes line by line
```

**Pros:**
- No compilation needed
- Easy to test quickly
- Platform-independent

**Cons:**
- Slower execution
- Errors found at runtime

---

### Hybrid Languages
**Examples:** Java, C#

**How it works:**
```
Write Code → Compile to Intermediate → Virtual Machine executes
```

**Balance between speed and portability**

---

## Comparison Table

| Language | Type | Speed | When to Use |
|----------|------|-------|-------------|
| C++ | Compiled | Very Fast | Games, systems, performance-critical |
| Python | Interpreted | Slower | Quick scripts, data analysis, AI |
| Java | Hybrid | Medium | Cross-platform apps, enterprise |
| JavaScript | Interpreted | Medium | Web development, browsers |

---

## Key Takeaways

✓ Compilation is complex: lexer → parser → optimizer → assembler → linker  
✓ Each stage has a specific purpose  
✓ Modern compilers do all this in seconds  
✓ Understanding this helps debug errors  
✓ Binary code is what CPU actually executes  
✓ g++ handles the entire process for you  

**Next:** Learn to write your first C++ program!
