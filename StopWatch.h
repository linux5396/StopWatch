/*
 * @author anton
 * stop watch can be used to get the spent time in sec,ms,us.
 */
#ifndef COMM_STOPWATCH_H
#define COMM_STOPWATCH_H
#pragma once

#include <chrono>

class StopWatch {
public:
    typedef std::chrono::steady_clock clock;
    typedef std::chrono::microseconds microseconds;
    typedef std::chrono::milliseconds milliseconds;
    typedef std::chrono::seconds seconds;
    typedef std::chrono::minutes minutes;
    typedef std::chrono::hours hours;

    StopWatch();

    StopWatch(const StopWatch &);

    StopWatch &operator=(const StopWatch &rhs);

    /**
     *
     * @return us
     */
    uint64_t ElapsedUs() const;

    /**
     *
     * @return ms
     */
    uint64_t ElapsedMs() const;

    /**
     *
     * @return sec
     */
    uint64_t ElapsedSec() const;

    /**
     *
     * @return minutes
     */
    uint64_t ElapsedMinutes() const;

    /**
     *
     * @return hours
     */
    uint64_t ElapsedHours() const;

    std::chrono::steady_clock::time_point Restart();

private:
    clock::time_point mStart;
};


#endif //COMM_STOPWATCH_H
