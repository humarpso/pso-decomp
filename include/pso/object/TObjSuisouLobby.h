#ifndef PSO_OBJECT_TOBJSUISOULOBBY_H
#define PSO_OBJECT_TOBJSUISOULOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjSuisouLobby : public TUnk_804AFBF8 {
    virtual ~TObjSuisouLobby();
    virtual void render();
    virtual void run_task();
    u32 m_c8;
    u8 _padCC[0x8];
    u32 m_d4;
    u32 m_d8;
    void update_particle();
    void *create();
    static void destroy_instance();
    static void load_resources();
};

typedef char TObjSuisouLobby_size[sizeof(TObjSuisouLobby) == 0xDC ? 1 : -1];

extern "C" {
void *TObjSuisouLobby__ct(void *arg0, void *arg1, void *arg2);
void TObjSuisouLobby__sub_80369B5C(void);
void TObjSuisouLobby__sub_80369D68(void);
void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1);
void render__15TObjSuisouLobbyFv(TObjSuisouLobby *arg0);
}

#endif
