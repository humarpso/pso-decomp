#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A5F24_lbl_804DD098 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK strncpy(void *, void *, int);
M2C_UNK strcpy(void *, void *);
s32 strlen(void *);
void fn_802A5CC4(u8 *arg0, s32 arg1);
void free__11TOBoss4RockFUi(void *);
void TWindowSnapShot__sub_802A5D28(void *arg0);
int fn_802A5B74(s32, s32);
void fn_802A5B2C(s32 arg0);
int fn_802A5BFC(s32, s32);
M2C_UNK __dl__FPv(void *);
extern M2C_UNK lbl_804DD098[];
void *TWindowSnapShot__sub_802A5EDC(void *arg0, s16 arg1);
void TWindowSnapShot__sub_802A5D28(void *arg0);
void reset__15TWindowSnapShotFPv(u8 *arg0);
extern M2C_UNK lbl_804DD098[];
void update_both__15TWindowSnapShotFPv(void* p);
s32 alloc_buffer__15TWindowSnapShotFPv(void *arg0);
void fn_802A5C7C(void *arg0);
void fn_802A5CB8(void* p);
void fn_802A5CC4(u8 *arg0, s32 arg1);
s32 init__15TWindowSnapShotFPvi(void *arg0, s32 arg1);
s32 open_stream__15TWindowSnapShotFPvi(void *arg0, s32 arg1);
extern M2C_UNK lbl_804DD098[];
s32 start_capture__15TWindowSnapShotFPvi(void *arg0, s32 arg1);
extern M2C_UNK lbl_804DD098[];
int get_width__15TWindowSnapShotFv(void);
extern M2C_UNK lbl_804DD098[];
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v);
extern M2C_UNK lbl_804DD098[];
s32 get_buffer_size__15TWindowSnapShotFPv(void* p);
extern M2C_UNK lbl_804DD098[];
s32 TWindowSnapShot__sub_802A605C(u8 *arg0);
s32 TWindowSnapShot__sub_802A605C(u8 *arg0);
extern M2C_UNK lbl_804DD098[];
void fn_802A6070(void* p, s32 v);
s32 TWindowSnapShot__sub_802A605C(u8 *arg0);
extern M2C_UNK lbl_804DD098[];
void fn_802A6078(void* p, s32 v);
int fn_802A5BFC(s32 _w0, s32 _w1);
int rlc_get_directory_offset(void *arg0);
int fn_802A5B74(s32 _w0, s32 _w1);
int fn_802A5B50(s32 arg0);
s32 rlc_get_chunk_count(s32 arg0);
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v);
s32 fn_802A5C3C(u32 *arg0);
void reset__15TWindowSnapShotFPv(u8 *arg0);
extern M2C_UNK lbl_804DD098[];
u8 *TWindowSnapShot__sub_802A5F24(u8 *arg0);
}

extern "C" {

s32 alloc_buffer__15TWindowSnapShotFPv(void *arg0);
void fn_802A5C7C(void *arg0);
void fn_802A5CB8(void* p);
s32 open_stream__15TWindowSnapShotFPvi(void *arg0, s32 arg1);
void reset__15TWindowSnapShotFPv(u8 *arg0);
s32 TGStream__sub_800FDADC(s32, s32);
s32 get_resource_file_size__6TLobbyFPv(s32);
u32 alloc_buffer__11TOBoss4RockFPv();
M2C_UNK memset(void *, int, int);

void fn_802A5B2C(s32 arg0) {
    fn_802A5B74((s32)(arg0), (s32)(arg0 + 4));
}

int fn_802A5B50(s32 arg0) { return fn_802A5B74((s32)(arg0), (s32)((void *) arg0)); }

int fn_802A5B74(s32 _w0, s32 _w1) { return 0; }

int rlc_get_directory_offset(void *arg0) { return fn_802A5BFC((s32)(arg0), (s32)((s8 *)arg0 + 0x14)); }

s32 rlc_get_chunk_count(s32 arg0) {
    fn_802A5BFC((s32)(arg0), (s32)(arg0 + 0x10));
}

int fn_802A5BFC(s32 _w0, s32 _w1) { return 0; }

s32 fn_802A5C3C(u32 *arg0) {
    u32 temp_r0;
    temp_r0 = *arg0;
    if (temp_r0 == 0U) {
        set_mode__15TWindowSnapShotFPvi((void*)((void *) (arg0)), (s32)((int) (7)));
        return -1;
    }
    return rlc_get_chunk_count((s32)((int) (temp_r0)));
}

void fn_802A5C7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 8) + rlc_get_directory_offset((void *)((void*)((void*)(M2C_FIELD(arg0, s32 *, 0))))));
}
void fn_802A5CB8(void* p) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)p + 0x8); }

void fn_802A5CC4(u8 *arg0, s32 arg1) {
    if (strlen((void *) (arg1)) > 0x1F) {
        strncpy((void *) (arg0 + 0x1C), (void *) (arg1), (int) (0x1F));
        M2C_FIELD(arg0, s8 *, 0x3B) = 0;
        return;
    }
    strcpy((void *) (arg0 + 0x1C), (void *) (arg1));
}

void TWindowSnapShot__sub_802A5D28(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x8) != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x8));
        M2C_FIELD(arg0, u32 *, 0x8) = 0;
    }
}

s32 alloc_buffer__15TWindowSnapShotFPv(void *arg0) {
    get_buffer_size__15TWindowSnapShotFPv((void*)(arg0));
    M2C_FIELD(arg0, u32 *, 8) = alloc_buffer__11TOBoss4RockFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 8) == 0U) {
        set_mode__15TWindowSnapShotFPvi((void*)(arg0), (s32)(4));
        return 0;
    }
    return 1;
}
s32 open_stream__15TWindowSnapShotFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = TGStream__sub_800FDADC(arg1, M2C_FIELD(arg0, s32 *, 8));
    if (TWindowSnapShot__sub_802A605C((u8 *)(arg0)) == 0) {
        set_mode__15TWindowSnapShotFPvi((void*)(arg0), (s32)(2));
        TWindowSnapShot__sub_802A5D28((void *)((void*)((void*)(arg0))));
        return 0;
    }
    return 1;
}
s32 init__15TWindowSnapShotFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = get_resource_file_size__6TLobbyFPv(arg1);
    if (TWindowSnapShot__sub_802A605C((u8 *)(arg0)) == 0) {
        set_mode__15TWindowSnapShotFPvi((void*)(arg0), (s32)(1));
        return 0;
    }
    return 1;
}

#include "types.h"
extern "C" {

void reset__15TWindowSnapShotFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    memset((void *) (arg0 + 0x1C), (int) (0), (int) (0x20));
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
void *TWindowSnapShot__sub_802A5EDC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x3C) = lbl_804DD098;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802A5F24_lbl_804DD098_size[sizeof(RecoveredGlobal_802A5F24_lbl_804DD098) == 0x10 ? 1 : -1];
u8 *TWindowSnapShot__sub_802A5F24(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &(*(RecoveredGlobal_802A5F24_lbl_804DD098 *)&lbl_804DD098).value;
    reset__15TWindowSnapShotFPv((u8 *)((void *) (arg0)));
    return arg0;
}

void update_both__15TWindowSnapShotFPv(void* p) { TWindowSnapShot__sub_802A5D28((void *)(p)); reset__15TWindowSnapShotFPv((u8 *)(p)); }
s32 start_capture__15TWindowSnapShotFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        set_mode__15TWindowSnapShotFPvi((void*)((void *)((void*)((void*)(arg0)))), (s32)((s32)((s32)(3))));
        return 0;
    }
    if (init__15TWindowSnapShotFPvi((void *)(arg0), (s32)(arg1)) == 0) {
        return 0;
    }
    if (alloc_buffer__15TWindowSnapShotFPv(arg0) == 0) {
        return 0;
    }
    if (open_stream__15TWindowSnapShotFPvi(arg0, arg1) == 0) {
        return 0;
    }
    fn_802A5CB8((void*)(arg0));
    fn_802A5C7C(arg0);
    fn_802A5CC4((u8 *)(arg0), (s32)(arg1));
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    return 1;
}
int get_width__15TWindowSnapShotFv(void) { return 32; }
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x18) = v; }
s32 get_buffer_size__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0xc); }
s32 TWindowSnapShot__sub_802A605C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0xC) != 0);
}
void fn_802A6070(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_802A6078(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}

}
