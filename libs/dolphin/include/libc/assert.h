#ifndef _ASSERT_H_
#define _ASSERT_H_

#if __STDC_VERSION__ >= 201112L
#define static_assert(cond, msg) _Static_assert(cond, #msg)
#else
#define static_assert(cond, msg) typedef char static_assertion_##msg[(cond)?1:-1]
#endif

#endif
