#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80307F6C_80307DEC { char pad[0x18]; };
struct VObj_80307F6C_80307DEC : Base_80307F6C_80307DEC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};
struct Base_803080B0_80307DEC { char pad[0x18]; };
struct VObj_803080B0_80307DEC : Base_803080B0_80307DEC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

struct Name_80307D00 { char s[0x18]; };

struct Cfg_80307D00 {
    u8 pad0[0x24];
    u32 win;
    Name_80307D00 names[4];
};

extern "C" {
int disable_progressive_mode__13TAdVIConfigGCFv(void* p = 0);
void TAdVIConfigGC__vt5(void* p);
void set_field48_clear_global__13TAdVIConfigGCFPv(void *arg0);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TAdVIConfigGC__vt5(void* p);
void *VIGetDTVStatus(void *);
void enable_progressive_mode__13TAdVIConfigGCFv(void * = 0);
void set_field48_clear_global__13TAdVIConfigGCFPv(void *arg0);
void TAdVIConfigGC__vt4(void *arg0);
void set_flag_4__9TObjLukerFPv(void *);
s32 allow_rendering__7TObjectFv(u32);
void disallow_rendering__7TObjectFv(void *);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TLobby__sub_801B0974();
M2C_UNK fn_80307BE8(void *);
void TAdVIConfigGC__sub_80307DF4(u8 *arg0);
void set_close_flag__19TWindowSubTradeMainFPv(u32);
void set_visible__19TWindowSubTradeMainFPv(u32);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindow__close(u32);
void dispatch_without_flags__20TWindowSubStatusDispFiii(u32, char *, s32);
u32 draw_with_layer__13TAdVIConfigGCFiii(s32, void *, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
char *strncpy(char *, const char *, u32);
extern u8 lbl_804E71B8[];
extern s32 lbl_805D53A0;
void TAdVIConfigGC__sub_80307D00(Cfg_80307D00 *arg0);
}

extern "C" {

void *TAdVIConfigGC__ct(void *arg0);
void TAdVIConfigGC__vt8(void);
void *__dt__13TAdVIConfigGCFv(void *arg0, s16 arg1);
void *destroy__13TAdVIConfigGCFPvs(void *arg0, s16 arg1);
s32 get_field_14__13TAdVIConfigGCFPv(void* p);
u8 *init__13TAdVIConfigGCFPvf(u8 *arg0, f32 farg0);
void render__13TAdVIConfigGCFv(void *arg0);
void run_task__13TAdVIConfigGCFv(void *arg0);
void set_field48_clear_global__13TAdVIConfigGCFPv(void *arg0);
int OSSetProgressiveMode(void*);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
void TAdYesNoBaseGC__ct(void *);
void TAdYesNoBaseGC__vt0(void *, int);
s32 TLobby__sub_801B0974();
s32 TWindow__close(u32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
void __dl__7TObjectFPv(void *);
s32 __dl__FPv(void *);
s32 allow_rendering__7TObjectFv(u32);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
int VIWaitForRetrace(void);
int VIConfigure(void*);
int VIFlush(void);
M2C_UNK memset(void *, int, int);
void set_field_2c__13TAdVIConfigGCFPvi(void *, int);

void TAdVIConfigGC__sub_80307D00(Cfg_80307D00 *arg0) {
    s32 i;
    u8 *p;
    if (arg0->win != 0) {
        TWindow__close(arg0->win);
        arg0->win = 0;
    }
    arg0->win = draw_with_layer__13TAdVIConfigGCFiii(TWindowSubComCard__sub_8026CBB8(0x5A), lbl_804E71B8, lbl_805D53A0);
    if (arg0->win != 0) {
        set_visible__19TWindowSubTradeMainFPv(arg0->win);
        set_close_flag__19TWindowSubTradeMainFPv(arg0->win);
        for (i = 0; i < 4; i++) {
            p = TPlayerBattleCtrl4P__sub_801BA74C(i);
            if (p != 0) {
                strncpy(arg0->names[i].s, (char *)(p + 0x85C), 0x17);
                arg0->names[i].s[0x17] = 0;
                dispatch_without_flags__20TWindowSubStatusDispFiii(arg0->win, arg0->names[i].s, i);
            } else {
                arg0->names[i].s[0] = 0;
                dispatch_without_flags__20TWindowSubStatusDispFiii(arg0->win, arg0->names[i].s, i);
            }
        }
    }
}

s32 get_field_14__13TAdVIConfigGCFPv(void* p) { return *(s32*)((char*)p + 0x14); }

void TAdVIConfigGC__sub_80307DF4(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r3_2;
    temp_r3 = TLobby__sub_801B0974();
    if ((s32) M2C_FIELD(arg0, s32 *, 4) != temp_r3) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r3;
        TAdVIConfigGC__sub_80307D00((Cfg_80307D00 *)((void *) (arg0)));
    }
    fn_80307BE8((void *) (arg0));
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x24));
    if (temp_r3_2 != NULL) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x18) != 0) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(temp_r3_2);
            allow_rendering__7TObjectFv((u32)(M2C_FIELD(arg0, u8 **, 0x24)));
            return;
        }
        set_flag_4__9TObjLukerFPv(temp_r3_2);
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u8 **, 0x24));
    }
}

void *destroy__13TAdVIConfigGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x24));
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

#include "types.h"
extern "C" {

u8 *init__13TAdVIConfigGCFPvf(u8 *arg0, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 8));
    M2C_FIELD(arg0, f32 *, 0) = (f32) (farg0 * farg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    memset((void *) (arg0 + 0x28), (int) (0), (int) (0x60));
    M2C_FIELD(arg0, s32 *, 4) = TLobby__sub_801B0974();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    TAdVIConfigGC__sub_80307D00((Cfg_80307D00 *)((void *) (arg0)));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}

void render__13TAdVIConfigGCFv(void *arg0) {
    struct VObj_80307F6C_80307DEC *o = (struct VObj_80307F6C_80307DEC *)arg0;
    o->m10();
}

extern s32 lbl_805D4090;

void set_field48_clear_global__13TAdVIConfigGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    lbl_805D4090 = 0;
}

    extern unsigned char lbl_804F4F98[];
    extern int lbl_805D7734;
void enable_progressive_mode__13TAdVIConfigGCFv(void * _w0) { OSSetProgressiveMode((void*)1); lbl_805D7734 = (int)lbl_804F4F98; VIConfigure(lbl_804F4F98); VIFlush(); VIWaitForRetrace(); VIWaitForRetrace(); }

int disable_progressive_mode__13TAdVIConfigGCFv(void* _w0) { return OSSetProgressiveMode((void*)(0)); }
void TAdVIConfigGC__vt8(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)29, (void*)0); }

void TAdVIConfigGC__vt5(void* p) { disable_progressive_mode__13TAdVIConfigGCFv((void*)((void*)(p))); set_field48_clear_global__13TAdVIConfigGCFPv((void *)(p)); }

void TAdVIConfigGC__vt4(void *arg0) {
    void *x;
    x = VIGetDTVStatus(arg0);
    if (x != NULL) {
        enable_progressive_mode__13TAdVIConfigGCFv((void *)(arg0));
    }
    set_field48_clear_global__13TAdVIConfigGCFPv(arg0);
}

void run_task__13TAdVIConfigGCFv(void *arg0) {
    struct VObj_803080B0_80307DEC *o = (struct VObj_803080B0_80307DEC *)arg0;
    o->m9();
}

extern M2C_UNK __vt__13TAdVIConfigGC[];

void *__dt__13TAdVIConfigGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdVIConfigGC;
        TAdYesNoBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TAdVIConfigGC[];
extern void *lbl_805D4094;

void *TAdVIConfigGC__ct(void *arg0) {
    TAdYesNoBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdVIConfigGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4094;
    set_field_2c__13TAdVIConfigGCFPvi(arg0, 0);
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    return arg0;
}

}
