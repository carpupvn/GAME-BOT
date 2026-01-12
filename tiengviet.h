#ifndef TIENGVIET_H
#define TIENGVIET_H

#include <iostream>
#include <string>
#include <locale>

#ifdef _WIN32
#include <Windows.h>
#endif

// Lớp hỗ trợ xuất dữ liệu - Tự động hiển thị tiếng Việt và Flush dữ liệu
class TiengVietOutput {
public:
    TiengVietOutput() {
        #ifdef _WIN32
        // Thiết lập bảng mã UTF-8 cho Console Windows
        SetConsoleOutputCP(65001);
        SetConsoleCP(65001);
        #endif
        
        // Cấu hình đa nền tảng với cơ chế chống crash (dùng try-catch)
        try {
            std::locale::global(std::locale(""));
        } catch (...) {
            // Nếu hệ thống không hỗ trợ locale cụ thể, chương trình vẫn chạy tiếp
        }
    }

    // Tích hợp tự động flush vào mọi lệnh print << để phục vụ đếm ngược \r
    template <typename T>
    TiengVietOutput& operator<<(const T& data) {
        std::cout << data << std::flush;
        return *this;
    }

    // Hỗ trợ các bộ điều khiển luồng như endl, flush, setw...
    TiengVietOutput& operator<<(std::ostream& (*fp)(std::ostream&)) {
        fp(std::cout);
        return *this;
    }
};

// Lớp hỗ trợ nhập dữ liệu - Đồng bộ với luồng xuất và xử lý lỗi getline/ignore
class TiengVietInput {
public:
    // Nạp chồng toán tử >>
    template <typename T>
    TiengVietInput& operator>>(T& data) {
        std::cout.flush(); // Đảm bảo hiện hết chữ trước khi chờ nhập
        std::cin >> data;
        return *this;
    }

    // Khắc phục lỗi gạch đỏ getline(scan, variable)
    friend std::istream& getline(TiengVietInput& is, std::string& str) {
        std::cout.flush();
        return std::getline(std::cin, str);
    }

    // Hỗ trợ hàm scan.ignore()
    void ignore(std::streamsize n = 1, int delim = EOF) {
        std::cin.ignore(n, delim);
    }

    // Hỗ trợ hàm scan.clear() để reset trạng thái nhập
    void clear() {
        std::cin.clear();
    }

    // Chuyển đổi ngầm định sang istream& cho các hàm thư viện khác
    operator std::istream&() {
        std::cout.flush();
        return std::cin;
    }
};

// Khởi tạo đối tượng tĩnh để dùng xuyên suốt chương trình
static TiengVietOutput print;
static TiengVietInput scan;

#endif