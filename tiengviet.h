#ifndef TIENGVIET_H
#define TIENGVIET_H

#include <iostream>
#include <string>
#include <locale>
#include <stdexcept>
#include <cstdio> // for setvbuf

#ifdef _WIN32
#include <Windows.h>
#endif

class TiengVietOutput {
public:
    TiengVietOutput() {
        #ifdef _WIN32
        // Cấu hình riêng cho Windows
        SetConsoleOutputCP(65001);
        SetConsoleCP(65001);
        // Enable buffering to prevent VS from chopping up UTF-8 byte sequences
        setvbuf(stdout, nullptr, _IOFBF, 1000);
        #endif

        // Cấu hình đa nền tảng có kiểm tra lỗi
        try {
            std::locale::global(std::locale(""));
            std::cout.imbue(std::locale());
        } catch (...) {
            // Nếu hệ thống (như Windows của bạn) lỗi locale, 
            // chương trình sẽ bỏ qua và dùng mặc định để không bị sập (crash).
        }
    }

    template <typename T>
    TiengVietOutput& operator<<(const T& data) {
        std::cout << data;
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
        std::cin >> data;
        return *this;
    }

    // Xử lý lỗi gạch đỏ getline
    friend std::istream& getline(TiengVietInput& is, std::string& str) {
        return std::getline(std::cin, str);
    }

    void ignore(std::streamsize n = 1, int delim = EOF) {
        std::cin.ignore(n, delim);
    }

    void clear() {
        std::cin.clear();
    }
    
    operator std::istream&() {
        return std::cin;
    }
};

static TiengVietOutput print;
static TiengVietInput scan;

#endif