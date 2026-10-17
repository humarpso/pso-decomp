#ifndef PSO_MISC_TOSIGNCAVE02_H
#define PSO_MISC_TOSIGNCAVE02_H
#include "pso/misc/CaveSignModel.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TOSignCave02 : public TUnk_804AFBF8 {
public:
    virtual ~TOSignCave02();
public:
    void render();
public:
    static void *create(void *arg0);
    static void free_static_model();
    static void load_shared_resource();
};
typedef char TOSignCave02_size[sizeof(TOSignCave02) == 0xC8 ? 1 : -1];

extern "C" {
u8 *TOSignCave02__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__12TOSignCave02Fv(void *arg0, s16 arg1);
}

#endif
