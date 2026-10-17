#ifndef PSO_MISC_TOSIGNCAVE01_H
#define PSO_MISC_TOSIGNCAVE01_H
#include "pso/misc/CaveSignModel.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TOSignCave01 : public TUnk_804AFBF8 {
public:
    virtual ~TOSignCave01();
public:
    void render();
public:
    static void *create(void *arg0);
    static void unload_static_data();
    static void load_shared_resource();
};
typedef char TOSignCave01_size[sizeof(TOSignCave01) == 0xC8 ? 1 : -1];
extern "C" {
u8 *TOSignCave01__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__12TOSignCave01Fv(void *arg0, s16 arg1);
}

#endif
