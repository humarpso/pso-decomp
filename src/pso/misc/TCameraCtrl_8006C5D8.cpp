#include "types.h"
#include "pso/misc/TUnk_80488B68.h"
#include "pso/system/memory.h"
#include "pso/misc/TUnk_80488D70.h"

#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TScene.h"

struct E_8006C668 { s32 a; void *p; };

struct G_8006C668 { E_8006C668 e[8]; };

struct Entry_8006C6CC {
    s32 id;
    s32 f4;
};

struct Bank_8006C6CC {
    Entry_8006C6CC *entries;
    u32 count;
};

extern "C" {
extern G_8006C668 TCameraCtrl__camera_banks;
s32 load_relocatable_file(s32 arg0, s32 arg1);
extern Bank_8006C6CC camera_path_bank_table[];
void *TCameraCtrl__vt10(void);
void *__dt__13TUnk_80488D70Fv(void *arg0, s16 arg1);
void *__dt__13TUnk_80488A28Fv(void *arg0, s16 arg1);
void *get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

    extern int TCameraCtrl__saved_projection_angle;
    extern int scripted_camera_projection_angle;
    extern const float lbl_805D9028;
}
TUnk_80488B68::TUnk_80488B68() : TUnk_80488A28() {
    this->m_38 = 0;
    scripted_camera_projection_angle = 0;
    TCameraCtrl__saved_projection_angle = 0;
    *(unsigned char *)&this->unk_99 = 0;
    this->m_98 = 0;
    this->m_9a = 0;
    *(float*)((char*)this + 0x9c) = lbl_805D9028;
    this->m_a0 = lbl_805D9028;
    *(float*)((char*)this + 0x6c) = lbl_805D9028;
    this->m_70 = lbl_805D9028;
    *(float*)((char*)this + 0x74) = lbl_805D9028;
    this->m_78 = lbl_805D9028;
    *(float*)((char*)this + 0x7c) = lbl_805D9028;
    this->m_80 = lbl_805D9028;
    *(int*)((char*)this + 0x84) = 0;
    this->m_88 = 0;
    *(int*)((char*)this + 0x8c) = 0;
    this->m_90 = 0;
    *(int*)((char*)this + 0x94) = 0;
}


void TCameraCtrl::free_entries() {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (TCameraCtrl__camera_banks.e[i].p != 0) {
            xfree(TCameraCtrl__camera_banks.e[i].p);
            TCameraCtrl__camera_banks.e[i].p = 0;
        }
    }
}

void TCameraCtrl::load_camera_banks() {
    u32 j;
    Bank_8006C6CC *b;
    u32 n;
    u32 k;
    s32 i;
    s32 sz;
    for (i = 0; i < 8; i++) {
        TCameraCtrl__camera_banks.e[i].p = 0;
    }
    b = &camera_path_bank_table[TOKeyMachine01::get_global_state()];
    if (b->entries == 0) {
        return;
    }
    n = b->count;
    if (n >= 8) {
        return;
    }
    for (j = 0; j < n; j++) {
        sz = ((TScene *)(b->entries[j].id))->update_lobby_scene();
        if (sz <= -1) {
            return;
        }
        TCameraCtrl__camera_banks.e[j].p = xmalloc(sz);
    }
    for (k = 0; k < n; k++) {
        TCameraCtrl__camera_banks.e[k].a = load_relocatable_file(b->entries[k].id, (s32)TCameraCtrl__camera_banks.e[k].p);
    }
}

void *TCameraCtrl__vt10(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = ((TUnk_80488D70 *)o)->init_subobject();
    }
    return o;
}

extern u32 camera_ctrl_instance;
extern const f32 lbl_805D9038;

void TUnk_80488D70::vfunc_6() {
    void *temp_r31;
    void *player;

    if ((u32) camera_ctrl_instance != 0U) {
        temp_r31 = ((TCameraCtrl *)camera_ctrl_instance)->get_params();
        player = get_player_by_client_id(0);
        if (player != NULL) {
            *(f32 *)&this->unk_48 = (f32) *(f32 *)((s8 *)player + 0x38);
            this->m_4c = (f32) (lbl_805D9038 + *(f32 *)((s8 *)player + 0x3C));
            *(f32 *)((s8 *)this + 0x50) = (f32) *(f32 *)((s8 *)player + 0x40);
            this->m_3c = (f32) *(f32 *)((s8 *)temp_r31 + 0x1C);
            *(f32 *)&this->unk_40 = (f32) *(f32 *)((s8 *)temp_r31 + 0x20);
            this->m_44 = (f32) *(f32 *)((s8 *)temp_r31 + 0x24);
            this->m_58 = (f32) *(f32 *)((s8 *)temp_r31 + 0x10);
        }
    }
}

extern s32 lbl_80488D70[];

void *__dt__13TUnk_80488D70Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80488D70;
        __dt__13TUnk_80488A28Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

