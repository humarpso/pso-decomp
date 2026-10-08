#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemTexLoad.h"

extern "C" void unload_texture__12TItemTexLoadFPv(void*);
extern "C" void free__11TOBoss4RockFUi(void*);

struct TexLoad_8011D180 { u8 pad0[0x20]; s32 state; s32 f24; s32 handle; };
extern "C" {
s32 TLobby__sub_8001EEF4();
void load_texture_archive__12TItemTexLoadFPv(TexLoad_8011D180 *);
void load_texture__12TItemTexLoadFPvi(TexLoad_8011D180 *, s32);
s32 TLobby__sub_803CC4C0(s32);
s32 TLobby__sub_803CCE9C(s32);
}

#define SELF ((TexLoad_8011D180 *)this)
void TItemTexLoad::run_task() {
    if (SELF->state == 1) {
        switch (TLobby__sub_803CC4C0(SELF->handle)) {
        case 3:
            TLobby__sub_803CCE9C(SELF->handle);
            if (TLobby__sub_8001EEF4() != 0) {
                load_texture_archive__12TItemTexLoadFPv(SELF);
            } else {
                SELF->state = 3;
            }
            break;
        case 1:
        case 4: {
            s32 v = SELF->f24;
            unload_texture__12TItemTexLoadFPv(SELF);
            load_texture__12TItemTexLoadFPvi(SELF, v);
            break;
        }
        }
    } else if (SELF->state == 3) {
        if (TLobby__sub_8001EEF4() != 0) {
            load_texture_archive__12TItemTexLoadFPv(SELF);
        }
    }
}
#undef SELF

TItemTexLoad::~TItemTexLoad() {
    unload_texture__12TItemTexLoadFPv(this);
    free__11TOBoss4RockFUi(m_1c);
    m_1c = nullptr;
}
#else
#if PSO_CLASS_PACKAGE == 0x8011CF6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_texture__12TItemTexLoadFPv(u8 *arg0);
M2C_UNK TLobby__sub_803CCE9C(s32);
M2C_UNK free_texture_if_valid(void *);

void unload_texture__12TItemTexLoadFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
        free_texture_if_valid(arg0 + 0x2C);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        TLobby__sub_803CCE9C(M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011D164
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TItemTexLoad__sub_8011D164(u8 *arg0);

u8 *TItemTexLoad__sub_8011D164(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
        return arg0 + 0x2C;
    }
    return NULL;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011D334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TItemTexLoadFPv(void *arg0);
void free_textures__12TItemTexLoadFv(void);
void *TItemTexLoad__ct(void *, void *);
void *__nw__7TObjectFUl(int);
int free__11TOBoss4RockFUi(void*);

void *create__12TItemTexLoadFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TItemTexLoad__ct(o, arg0);
    }
    return o;
}

    extern int lbl_805D5500;
    extern int lbl_805D5504;
void free_textures__12TItemTexLoadFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D5504)); lbl_805D5504 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D5500)); lbl_805D5500 = 0; }

}
#endif
#endif
