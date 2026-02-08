#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <chrono>
#include <thread>
#include <type_traits>
namespace time_helpers {
using namespace std::chrono;
template <class Rep, class Period>
inline void wait(const std::chrono::duration<Rep, Period>& d) noexcept {
    std::this_thread::sleep_for(d);
    }
template <class Rep, class Period>
inline void wait(const Rep& count, std::chrono::duration<Rep, Period>) noexcept {
    std::this_thread::sleep_for(std::chrono::duration<Rep, Period>(count));
    }
}
using time_helpers::wait;
using namespace std::chrono_literals;
#ifndef TIME_H_NO_M_LITERAL
constexpr std::chrono::minutes operator"" m(unsigned long long v) noexcept {
    return std::chrono::minutes(static_cast<long long>(v));
}
#endif
#endif
