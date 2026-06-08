#ifndef PSO_TARRAY_H
#define PSO_TARRAY_H

#include "types.h"
#include "pso/macros.h"
#include <string.h>

template<typename T, size_t n>
class TArray {
public:
    T m_data[n];

public:
    T *data() { return m_data; };
    size_t size() { return n; };
    size_t byte_size() { return n * sizeof(T); };
    T &at(size_t i) { return m_data[i]; }
    T &operator[](size_t i) { return at(i); };
    T *start() { return m_data; };
    T *end() { return &m_data[size()-1]; };

    template<typename T2>
    T2 *as() { return reinterpret_cast<T2 *>(m_data); };

    u8 *as_bytes() { return reinterpret_cast<u8 *>(m_data); };

    void fill(u8 val) { memset(m_data, val, byte_size()); };

    template<typename T2>
    void fill_with(const T2 val) {
        T2 *data = as<T2>();
        size_t sz = byte_size() / sizeof(T2);
        for (int i = 0; i < sz; ++i) {
            data[i] = val;
        }
    };
};

template<typename T, size_t n>
inline TArray<T, n> &to_TArray(T *array) {
    return reinterpret_cast<TArray<T, n> &>(*array);
}

#endif
