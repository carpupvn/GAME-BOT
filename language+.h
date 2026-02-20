#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <iostream>
#include <string>
#include <locale>
#ifdef _WIN32
#include <Windows.h>
#endif

class LanguageOutput {
public:
    LanguageOutput() {
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
    LanguageOutput& operator<<(const T& data) {
        std::cout << data << std::flush;
        return *this;
    }
    LanguageOutput& operator<<(std::ostream& (*fp)(std::ostream&)) {
        fp(std::cout);
        return *this;
    }
};

class LanguageInput {
public:
    template <typename T>
    LanguageInput& operator>>(T& data) {
        std::cout.flush();
        std::cin >> data;
        return *this;
    }
    friend std::istream& getline(LanguageInput& is, std::string& str) {
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

static LanguageOutput print;
static LanguageInput scan;

#endif