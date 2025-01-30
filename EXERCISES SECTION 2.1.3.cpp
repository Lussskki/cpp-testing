#include <iostream>

int main() {
    // Character literals
    char ch = 'a';          // Regular character literal (lowercase 'a')
    char cha = 'A';         // Regular character literal (uppercase 'A')

    // String literals
    const char* str = "a";  // Regular string literal (lowercase "a")
    const wchar_t* wstr = L"A"; // Wide string literal (uppercase "A")

    // Output
    std::cout << "ch: " << ch << std::endl;       // Output: ch: a
    std::cout << "cha: " << cha << std::endl;     // Output: cha: A
    std::cout << "str: " << str << std::endl;     // Output: str: a
    std::wcout << L"wstr: " << wstr << std::endl; // Output: wstr: A

    return 0;
}