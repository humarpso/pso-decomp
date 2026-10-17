#ifndef PSO_OBJECT_TOBJSTENDGLASSLOBBY_H
#define PSO_OBJECT_TOBJSTENDGLASSLOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjStendGlassLobby : public TUnk_804AFBF8 {
    virtual ~TObjStendGlassLobby();
    u32 m_c8;
    u8 _padCC[0x4];
    u32 m_d0;
    virtual void render();
    virtual void run_task();
    void update_state();
    static void *create(void *arg0);
    static void free_static_model();
    static void load_resources();
};

typedef char TObjStendGlassLobby_size[sizeof(TObjStendGlassLobby) == 0xD4 ? 1 : -1];
extern "C" {
u8 *TObjStendGlassLobby__ct(u8 *arg0, s32 arg1, s32 arg2);
void TObjStendGlassLobby__sub_803596C0(void);
void *__dt__19TObjStendGlassLobbyFv(void *arg0, s16 arg1);
}

#endif
