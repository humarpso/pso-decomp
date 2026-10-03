#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Rec_8023E638 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8023E638;

typedef struct List_8023E638 {
    Rec_8023E638 *recs;
    s32 count;
} List_8023E638;

extern "C" {
void safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);
void TLobby__sub_800F7DAC(s32, s32);
s32 set_stream_and_load_file__6TLobbyFi(void *);
s32 sprintf(char *, const char *, ...);
void load_gvm_texture_archive(s32, s32);
extern char lbl_8044DCE0[];
extern char lbl_80516260[];
s32 TLobby__sub_8023E4B4(s32 arg0, s32 arg1);
void TLobby__sub_800F7DAC(s32, s32);
s32 update_lobby_scene__6TSceneFPv(void *);
s32 read_disc_file(void *, s32);
s32 sprintf(char *, const char *, ...);
s32 TLobby__sub_803CC53C();
void TLobby__sub_803CCE9C(s32);
s32 TLobby__sub_803CD3A8(void *, s32);
void load_gvm_texture_archive(s32, s32);
s32 xmalloc__FUl(M2C_UNK);
void xfree__FPv(s32);
extern char lbl_8044DCE0[];
extern char lbl_805161E0[];
s32 TLobby__sub_8023E554(s32 arg0, s32 arg1);
s32 TLobby__sub_801E468C(s32, void *);
void TObjPlayer__sub_803DD5E8(void *, s32, s32, s32);
M2C_UNK memset(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 lbl_805D63C0;
extern s32 lbl_805D63C4;
s32 bind_gvm_texture_list(s32 arg0, List_8023E638 *arg1);
}

extern "C" {

s32 fn_8023E734(u32 arg0);
s32 free_texture_if_valid(u32 arg0);
void init_buffers(void);
s32 notify_fish_if_valid__10TObjPlayerFUi(u32 arg0);
int TLobby__sub_803DA16C();
M2C_UNK TObjPlayer__sub_803DDC50();
M2C_UNK memset(M2C_UNK, M2C_UNK, M2C_UNK);
int set_global_param__8TObjFishFi();
s32 xmalloc__FUl(M2C_UNK);

s32 notify_fish_if_valid__10TObjPlayerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    set_global_param__8TObjFishFi();
    return 1;
}

s32 TLobby__sub_8023E4B4(s32 arg0, s32 arg1) {
    s32 h;
    s32 buf;
    sprintf(lbl_80516260, lbl_8044DCE0, arg0);
    h = set_stream_and_load_file__6TLobbyFi(lbl_80516260);
    if (h == 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(h);
        return 0;
    }
    buf = alloc__22TQuestVmDownLoadServerFPv(0x100000);
    TLobby__sub_800F7DAC(h, buf);
    load_gvm_texture_archive(buf, arg1);
    safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
    safe_free__23TAdSinglePlyChrSelectGCFUi(h);
    return 1;
}

s32 TLobby__sub_8023E554(s32 arg0, s32 arg1) {
    s32 a;
    s32 b;
    s32 c;
    sprintf(lbl_805161E0, lbl_8044DCE0, arg0);
    if (update_lobby_scene__6TSceneFPv(lbl_805161E0) != -1) {
        a = TLobby__sub_803CD3A8(lbl_805161E0, 0);
        b = TLobby__sub_803CC53C();
        TLobby__sub_803CCE9C(a);
        b = xmalloc__FUl((M2C_UNK)(b << 11));
        if (read_disc_file(lbl_805161E0, b) != -1) {
            c = xmalloc__FUl((M2C_UNK)(0x200000));
            TLobby__sub_800F7DAC(b, c);
            load_gvm_texture_archive(c, arg1);
            xfree__FPv(c);
        }
        xfree__FPv(b);
        return 1;
    }
    return 0;
}

s32 bind_gvm_texture_list(s32 arg0, List_8023E638 *arg1) {
    u8 sp8[8];
    Rec_8023E638 *d;
    s32 i;
    s32 n;
    if (arg0 == 0 || arg1 == NULL) {
        return 0;
    }
    memset((M2C_UNK)(lbl_805D63C0), (M2C_UNK)(0), (M2C_UNK)(0x1800));
    TObjPlayer__sub_803DD5E8(sp8, lbl_805D63C0, lbl_805D63C4, 0x200);
    if (TLobby__sub_801E468C(arg0, sp8) == -1) {
        return 0;
    }
    n = arg1->count;
    d = arg1->recs;
    for (i = 0; i < n; i++) {
        d[i].c = ((Rec_8023E638 *)lbl_805D63C0)[i].c;
        d[i].b = ((Rec_8023E638 *)lbl_805D63C0)[i].b;
    }
    return 1;
}

s32 free_texture_if_valid(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    TLobby__sub_803DA16C();
    return 1;
}

s32 fn_8023E734(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    TObjPlayer__sub_803DDC50();
    return 1;
}

extern s32 lbl_805D63C0;
extern s32 lbl_805D63C4;

void init_buffers(void) {
    s32 p = xmalloc__FUl(0x1800);
    lbl_805D63C0 = p;
    memset(p, 0, 0x1800);
    lbl_805D63C4 = xmalloc__FUl(0x3800);
}

}
