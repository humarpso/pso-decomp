#include "MSL_C/mbstring.h"
#include "MSL_C/string.h"

#pragma dont_inline on
static int is_utf8_complete(const char* s, size_t n) {
    if (n == 0)
        return -1;

    if (*s == 0x00)
        return 0;

    if ((*s & 0x80) == 0x00)
        return 1;
    else if ((*s & 0xE0) == 0xC0) {
        if (n >= 2) {
            if ((*(s + 1) & 0x80) == 0x80)
                return 2;
            return -1;
        }
        return -2;
    } else if ((*s & 0xF0) == 0xE0) {
        if (n >= 3) {
            if (((*(s + 1) & 0x80) == 0x80) && ((*(s + 2) & 0x80) == 0x80))
                return 3;
            return -1;
        } else if (((n == 2) && ((*(s + 1) & 0x80) == 0x80)) || (n == 1))
            return -2;
        return -1;
    } else
        return -1;
}

static int utf8_to_unicode(wchar_t* pwc, const char* s, size_t n) {
    int number_of_bytes;
    int check_byte_count;
    const char* source;
    wchar_t result_chr = 0;

    if (!s)
        return 0;

    if (n <= 0)
        return -1;

    number_of_bytes = is_utf8_complete(s, n);
    if (number_of_bytes < 0)
        return -1;

    source = s;
    switch (number_of_bytes) {
        case 3:
            result_chr |= (*source++ & 0x0F);
            result_chr <<= 6;
        case 2:
            result_chr |= (*source++ & 0x3F);
            result_chr <<= 6;
        case 1:
            result_chr |= (*source++ & 0x7F);
    }

    if (result_chr == 0x0000)
        check_byte_count = 0;
    else if (result_chr < 0x0080)
        check_byte_count = 1;
    else if (result_chr < 0x0800)
        check_byte_count = 2;
    else
        check_byte_count = 3;

    if (check_byte_count != number_of_bytes)
        return -1;

    if (pwc != 0)
        *pwc = result_chr;

    return number_of_bytes;
}

int mbtowc(wchar_t* pwc, const char* s, size_t n) {
    return utf8_to_unicode(pwc, s, n);
}

size_t unicode_to_UTF8(char* r3, wchar_t r4) {
    const char lut[] = { 0, 0, 0xC0, 0xE0 };
    int r5;
    char* r6;

    if (!r3)
        return 0;

    if (r4 < 0x80)
        r5 = 1;
    else if (r4 < 0x800)
        r5 = 2;
    else
        r5 = 3;

    r6 = r3 + r5;
    switch (r5) {
        case 3:
            *--r6 = (r4 & 0x3F) | 0x80;
            r4 >>= 6;
        case 2:
            *--r6 = (r4 & 0x3F) | 0x80;
            r4 >>= 6;
        case 1:
            *--r6 = r4 | lut[r5];
    }
    return r5;
}
#pragma dont_inline off

size_t wctomb(char* s, wchar_t wchar) {
    return unicode_to_UTF8(s, wchar);
}

size_t wcstombs(char* s, const wchar_t* pwcs, size_t n) {
    char decoded[4];
    wchar_t w;
    size_t num;
    int i = 0;
    const wchar_t* p;

    if (!s || !pwcs)
        return 0;

    p = pwcs;
    while (i <= n) {
        w = *p;

        if (!w) {
            s[i] = 0;
            break;
        }
        ++p;
        num = wctomb(decoded, w);

        if (i + num > n)
            break;

        strncpy(s + i, decoded, num);
        i += num;
    }
    return i;
}
