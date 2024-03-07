#include <iostream>

int Count(const char* str) {
    int count = 0;
    const char* ptr = str;
    while (*ptr != '\0') {
        if (*ptr == '+' || *ptr == '-' || *ptr == '=')
            count++;
        ptr++;
    }
    return count;
}

char* Change(const char* str) {
    int len = 0;
    const char* ptr = str;
    while (*ptr != '\0') {
        len++;
        ptr++;
    }

    char* tmp = new char[len * 2 + 1];
    char* t = tmp;
    ptr = str;
    while (*ptr != '\0') {
        if (*ptr == '+' || *ptr == '-' || *ptr == '=') {
            *t++ = '*';
            *t++ = '*';
        }
        else {
            *t++ = *ptr;
        }
        ptr++;
    }
    *t = '\0';
    return tmp;
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH + 1];
    std::cout << "Enter string:" << std::endl;
    std::cin.getline(str, MAX_LENGTH);
    std::cout << "String contained " << Count(str) << " groups of '+ - ='" << std::endl;
    char* dest = Change(str);
    std::cout << "Modified string (param) : " << str << std::endl;
    std::cout << "Modified string (result): " << dest << std::endl;
    delete[] dest;
    return 0;
}
