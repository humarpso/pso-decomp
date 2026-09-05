#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, int, int);
s32 obj_testFlags30(void *, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TBoss3Volopt__sub_8003EB34(void *);
void run_task__12TBoss3VoloptFv(u8 *arg0);
}

extern "C" {

void TBoss3Volopt__sub_8003F22C(void* p);
void TBoss3Volopt__sub_8003F33C(void* p);
void TBoss3Volopt__sub_8003F384(void* p);
int TBoss3Volopt__sub_8003F398(void);
void bswap_actions__12TBoss3VoloptFPv(void* p);
void bswap_position__12TBoss3VoloptFPv(void* p);
void *create__12TBoss3VoloptFPv(void *arg0);
void finalize_and_send_60__12TBoss3VoloptFPv(void* p);
void free_parts__12TBoss3VoloptFv(void);
s32 get_field_3e0__12TBoss3VoloptFPv(void* p);
void render__12TBoss3VoloptFv(void);
int reset_photon_effect__12TBoss3VoloptFPv(void* p);
void reset_vol_opt_state(void* a0);
void send_6x16__12TBoss3VoloptFPv(void* p);
void send_state__12TBoss3VoloptFPv(void* p);
void send_update_60__12TBoss3VoloptFPv(void* p);
void set_type__12TBoss3VoloptFPv(void* p);
void swap_6x15_fields__12TBoss3VoloptFPv(void* p);
void swap_6x16_fields__12TBoss3VoloptFPv(void* p);
void swap_6x85_fields__12TBoss3VoloptFPv(void* p);
M2C_UNK TBoss3VoloptCore__sub_80040788();
void *TBoss3Volopt__ct(void *, void *);
int TBoss3Volopt__sub_8003EA2C(void*);
M2C_UNK TBoss3Volopt__sub_800479D0();
int TLobby__send_and_handle_60(void*);
void TLobby__sub_8001FE7C(void*, int);
int TObjBgmColCtrl__sub_802274B8(void*);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);
M2C_UNK destroy__14TObjVoloptCageFv();
M2C_UNK destroy__15TBoss3VoloptP01Fv();
M2C_UNK destroy__20TBoss3VoloptHiraisinFv();
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
M2C_UNK release__19TBoss3VoloptMonitorFv();
int reset_photon_effect__10TObjPlayerFPv(void*);

    extern unsigned char lbl_80436328[];
    extern int lbl_805D4C14;
    extern int lbl_805D4C1C;
    extern int lbl_805D4C24;
    extern int lbl_805D4C2C;
void reset_vol_opt_state(void* a0) {
    *(int*)((char*)a0 + 0x3a8) = 0;
    lbl_805D4C14 = -1;
    TBoss3Volopt__sub_8003EA2C((void*)0);
    *(int*)((char*)a0 + 0x3a4) = 4;
    *(short*)((char*)a0 + 0x3f0) = 0;
    *(short*)((char*)a0 + 0x3f2) = 0;
    *(short*)((char*)a0 + 0x3f4) = 0;
    *(short*)((char*)a0 + 0x3f8) = 0;
    *(short*)((char*)a0 + 0x3fa) = 0;
    lbl_805D4C1C = 0;
    *(int*)((char*)a0 + 0x400) = 1;
    *(short*)((char*)a0 + 0x3fc) = 2;
    lbl_805D4C24 = 0;
    TObjBgmColCtrl__sub_802274B8(lbl_80436328);
    lbl_805D4C2C = 1;
}

void render__12TBoss3VoloptFv(void) {  }

void run_task__12TBoss3VoloptFv(u8 *arg0) {
    if (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x4000)) != 0) {
        if (TObjPlayer__sub_800194AC((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
            TObjPlayer__sub_800192DC((void *) (arg0 + 0x284));
            obj_clearFlags30((void *) (arg0), (int) (0x4000));
        }
    } else {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) != (s16) M2C_FIELD(arg0, s16 *, 0x326)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                TBoss3Volopt__sub_8003EB34((void *) (arg0));
            }
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        TBoss3Volopt__sub_8003EB34((void *) (arg0));
    }
}

void *create__12TBoss3VoloptFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x408);
    if (o != NULL) {
        o = TBoss3Volopt__ct(o, arg0);
    }
    return o;
}

extern u32 lbl_805D4C10;

void free_parts__12TBoss3VoloptFv(void) {
    destroy__14TObjVoloptCageFv();
    if ((u32) lbl_805D4C10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4C10, 1);
        lbl_805D4C10 = 0U;
    }
    destroy__15TBoss3VoloptP01Fv();
    TBoss3VoloptCore__sub_80040788();
    TBoss3Volopt__sub_800479D0();
    destroy__20TBoss3VoloptHiraisinFv();
    release__19TBoss3VoloptMonitorFv();
}

int reset_photon_effect__12TBoss3VoloptFPv(void* p) { return reset_photon_effect__10TObjPlayerFPv(p); }
s32 get_field_3e0__12TBoss3VoloptFPv(void* p) { return *(s32*)((char*)p + 0x3e0); }
void swap_6x85_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); { int i; for (i = 0; i < 7; i++) { bswap_16__FPUs((char*)p + 0x6 + i * 2); } } }
void bswap_actions__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xe); }
void bswap_position__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void send_state__12TBoss3VoloptFPv(void* p) { bswap_position__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x16_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xa); }
void swap_6x15_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void finalize_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x15_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void set_type__12TBoss3VoloptFPv(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }
void send_6x16__12TBoss3VoloptFPv(void* p) { swap_6x16_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }
void send_update_60__12TBoss3VoloptFPv(void* p) { bswap_actions__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

    extern int lbl_805D4C40;
int TBoss3Volopt__sub_8003F398(void) {  return lbl_805D4C40; }

}
