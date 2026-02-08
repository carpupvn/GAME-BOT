#ifndef TIENGVIET_H
#define TIENGVIET_H
#include <iostream>
#include <string>
#include <locale>
#ifdef _WIN32
#include <Windows.h>
#endif
class TiengVietOutput {
public:
    TiengVietOutput() {
        #ifdef _WIN32
        SetConsoleOutputCP(65001);
        SetConsoleCP(65001);
        #endif
        try {
            std::locale::global(std::locale(""));
        } catch (...) {
        }
    }
    template <typename T>
    TiengVietOutput& operator<<(const T& data) {
        std::cout << data << std::flush;
        return *this;
    }
    TiengVietOutput& operator<<(std::ostream& (*fp)(std::ostream&)) {
        fp(std::cout);
        return *this;
    }
};
class TiengVietInput {
public:
    template <typename T>
    TiengVietInput& operator>>(T& data) {
        std::cout.flush();
        std::cin >> data;
        return *this;
    }
    friend std::istream& getline(TiengVietInput& is, std::string& str) {
        std::cout.flush();
        return std::getline(std::cin, str);
    }

    void ignore(std::streamsize n = 1, int delim = EOF) {
        std::cin.ignore(n, delim);
    }
    void clear() {
        std::cin.clear();
    }
    operator std::istream&() {
        std::cout.flush();
        return std::cin;
    }
};
static TiengVietOutput print;
static TiengVietInput scan;
#endif