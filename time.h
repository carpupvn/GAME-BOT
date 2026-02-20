#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <chrono>
#include <thread>

namespace time_helpers {
    using namespace std::chrono;
    template <class Rep, class Period>
    inline void wait(const duration<Rep, Period>& d) noexcept {
        std::this_thread::sleep_for(d);
    }
    template <class Rep, class Period>
    inline void wait(const Rep& count, duration<Rep, Period>) noexcept {
        std::this_thread::sleep_for(duration<Rep, Period>(count));
    }
}

using time_helpers::wait;
using namespace std::chrono_literals;

#endif