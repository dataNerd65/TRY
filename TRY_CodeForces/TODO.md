# A ToDo research list for ICPC Assiut University Community Sheet 1

---

## 🧩 **Summary: Improving the Comparison Code**

You started with this logic:

```cpp
if (s == '<' && a < b) ...
else if (s == '>' && a > b) ...
else if (s == '=' && a == b) ...
```

It worked great — but had **repetition**.

We then explored **3 clean versions**:

---

### 🥇 **1. Functional Version (using `<functional>`)**

* Uses **ready-made comparators** from the C++ STL.
* Eliminates all repetitive branching.

```cpp
#include <iostream>
#include <functional>

void processInput(int a, int b, char s) {
    std::function<bool(int, int)> cmp;

    switch (s) {
        case '<': cmp = std::less<int>(); break;
        case '>': cmp = std::greater<int>(); break;
        case '=': cmp = std::equal_to<int>(); break;
        default: std::cout << "Invalid operator\n"; return;
    }

    std::cout << (cmp(a, b) ? "Right" : "Wrong") << "\n";
}
```

**Key Idea:**
`std::less`, `std::greater`, and `std::equal_to` act like reusable functions.

---

### 🥈 **2. Lambda Map Version**

* Stores operations inside a map of **anonymous functions**.
* Clean, short, and flexible.

```cpp
#include <iostream>
#include <map>
#include <functional>

int main() {
    int a, b; char s;
    std::cin >> a >> s >> b;

    std::map<char, std::function<bool(int, int)>> ops = {
        {'<', [](int x, int y){ return x < y; }},
        {'>', [](int x, int y){ return x > y; }},
        {'=', [](int x, int y){ return x == y; }}
    };

    if (ops.count(s))
        std::cout << (ops[s](a, b) ? "Right" : "Wrong") << "\n";
    else
        std::cout << "Invalid operator\n";
}
```

**Key Idea:**
Associates each operator with its behavior dynamically.

---

### 🧠 **3. Template Version (Generic Type)**

* Works for any comparable type (`int`, `double`, `char`, etc.)
* Uses template + functional style.

```cpp
#include <iostream>
#include <functional>

template <typename T>
void processInput(T a, T b, char s) {
    std::function<bool(T, T)> cmp;

    switch (s) {
        case '<': cmp = std::less<T>(); break;
        case '>': cmp = std::greater<T>(); break;
        case '=': cmp = std::equal_to<T>(); break;
        default: std::cout << "Invalid operator\n"; return;
    }

    std::cout << (cmp(a, b) ? "Right" : "Wrong") << "\n";
}
```

---

### ⚙️ **4. Constexpr Version (Compile-time Evaluation)**

* Uses **`constexpr`** and **if constexpr** (C++17+).
* All logic can be resolved at **compile time** if inputs are constant.

```cpp
#include <iostream>

constexpr const char* compareValues(int a, int b, char s) {
    if (s == '<') return (a < b) ? "Right" : "Wrong";
    else if (s == '>') return (a > b) ? "Right" : "Wrong";
    else if (s == '=') return (a == b) ? "Right" : "Wrong";
    else return "Invalid operator";
}

int main() {
    int a, b; char s;
    std::cin >> a >> s >> b;
    std::cout << compareValues(a, b, s) << "\n";
}
```

If you ever call:

```cpp
constexpr auto res = compareValues(3, 5, '<');
```

the compiler computes it *at compile time* — zero runtime cost.

---

## 🧾 **Summary Table**

| Version       | Feature             | Runtime/Compile | Benefit                      |
| ------------- | ------------------- | --------------- | ---------------------------- |
| Basic if-else | Simple, clear       | Runtime         | Best for beginners           |
| Functional    | Uses `<functional>` | Runtime         | Removes repetition           |
| Lambda Map    | Uses lambdas        | Runtime         | Extensible                   |
| Template      | Works for any type  | Runtime         | Type-flexible                |
| Constexpr     | Compile-time eval   | Compile time    | Fastest when constants known |

---

# This concept must be mastered well.
Problems are in ICPC Assiut University Community
for
O. Calculator
W. Mathematical Expression
V. Comparison
## A must do