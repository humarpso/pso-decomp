#ifndef PSO_MISC_TOSIGNCAVE03_H
#define PSO_MISC_TOSIGNCAVE03_H
#include "pso/misc/CaveSignModel.h"
#include "pso/misc/TUnk_804AFBF8.h"

class TOSignCave03 : public TUnk_804AFBF8 {
public:
    virtual ~TOSignCave03();
public:
    void render();
public:
    static void *create(void *arg0);
    static void close_dialog_window();
    static void load_shared_resource();
};
typedef char TOSignCave03_size[sizeof(TOSignCave03) == 0xC8 ? 1 : -1];
extern "C" {
u8 *TOSignCave03__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__12TOSignCave03Fv(void *arg0, s16 arg1);
}

#endif
