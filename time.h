// time.h
#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <chrono>
#include <thread>
#include <type_traits>

namespace time_helpers {

using namespace std::chrono;

// Hàm wait chính — nhận mọi duration của std::chrono
template <class Rep, class Period>
inline void wait(const std::chrono::duration<Rep, Period>& d) noexcept {
    std::this_thread::sleep_for(d);
}

// Overload nhận dạng count + type
template <class Rep, class Period>
inline void wait(const Rep& count, std::chrono::duration<Rep, Period>) noexcept {
    std::this_thread::sleep_for(std::chrono::duration<Rep, Period>(count));
}

} // namespace time_helpers

// Đưa wait ra global namespace
using time_helpers::wait;

// Cho phép dùng literal: 1s, 2ms, 3min...
using namespace std::chrono_literals;

// Tùy chọn: literal "m" (minutes) → giúp gọi 3m
// Nếu không muốn literal này, define TIME_H_NO_M_LITERAL trước khi include
#ifndef TIME_H_NO_M_LITERAL
constexpr std::chrono::minutes operator"" m(unsigned long long v) noexcept {
    return std::chrono::minutes(static_cast<long long>(v));
}
#endif

#endif // TIME_H_INCLUDED
