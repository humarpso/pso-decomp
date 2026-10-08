#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Hdr_801E4874 {
    u8 magic[4];
    s32 size;
    u16 flags;
    u16 count;
};

struct Ent_801E4874 {
    u8 *name;
    u8 pad[8];
};

extern "C" {
extern s32 lbl_805D5E58;
s32 TLanguage__sub_801E4B40(void);
extern s32 lbl_805D5E58;
s32 TLanguage__sub_801E4AF0(void);
void tmp_buf_release__6TLobbyFi(void *);
u32 tmp_buf_use_req__6TLobbyFPv(void *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
u8 *TQuestVmDownLoadServer__sub_8007EBDC(s32, s32);
u32 alloc__22TQuestVmDownLoadServerFPv();
void pump_frames__6TLobbyFv();
s32 get_resource_file_size__6TLobbyFPv(s32);
void load_sct_file__8TGStreamFii(s32, u32);
void debug_print__6TLobbyFii(void *, ...);
u16 read_file_header__9TLanguageFiPv(s32 arg0, u8 *arg1);
void read_into_buffer__9TLanguageFii(s32 arg0, s32 arg1);
void load_gvm_texture_archive(u32, u8 *);
extern u8 lbl_8044981C[];
extern u8 lbl_8044983C[];
extern s32 lbl_805D5E58;
u8 *load_gvm_texture_file(s32 arg0);
}

extern "C" {

struct Base_801E4B68_801E4874 { char pad[0x50]; };
struct VObj_801E4B68_801E4874 : Base_801E4B68_801E4874 {
    virtual void m0();
};

void update_texture_wave_image(void *arg0);
u16 read_file_header__9TLanguageFiPv(s32 arg0, u8 *arg1);
void read_into_buffer__9TLanguageFii(s32 arg0, s32 arg1);
M2C_UNK bswap_16__FPUs(void *);
M2C_UNK bswap_32__FPUl(void *);
M2C_UNK distort_texture_wave_image(void *);
s32 get_camera_no__11TCameraCtrlFv();
s32 is_split_screen();
M2C_UNK move_data__6TLobbyFv(s32, s32, s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D5E58;

u8 *load_gvm_texture_file(s32 arg0) {
    s32 count;
    s32 i;
    u8 *res;
    Ent_801E4874 *ent;
    u8 *str;
    u32 buf;
    u32 big;
    s32 size;
    Hdr_801E4874 hdr;
    big = 0;
    pump_frames__6TLobbyFv();
    size = get_resource_file_size__6TLobbyFPv(arg0);
    if (size <= 0) {
        debug_print__6TLobbyFii(lbl_8044981C, arg0);
        return NULL;
    }
    if (((size + 0x7FF) / 2048) * 2048 > 0x40000) {
        big = alloc__22TQuestVmDownLoadServerFPv();
        buf = big;
    } else {
        buf = tmp_buf_use_req__6TLobbyFPv(lbl_8044983C);
    }
    load_sct_file__8TGStreamFii(arg0, buf);
    count = ((s32 (*)(s32, u8 *))read_file_header__9TLanguageFiPv)(buf, (u8 *)&hdr);
    if (count == 0) {
        if (big != 0) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(big);
        } else {
            tmp_buf_release__6TLobbyFi(lbl_8044983C);
        }
        return NULL;
    }
    res = TQuestVmDownLoadServer__sub_8007EBDC(1, count * 0x2C + 8);
    *(s32 *)(res + 4) = count;
    i = 0;
    *(Ent_801E4874 **)res = (Ent_801E4874 *)(res + 8);
    ent = (Ent_801E4874 *)(res + 8);
    str = (u8 *)(ent + count);
    for (; i < count; i++, ent++, str += 0x20) {
        ent->name = str;
        lbl_805D5E58 += 2;
        if (hdr.flags & 1) {
            read_into_buffer__9TLanguageFii((s32)str, 0x1C);
            str[0x1C] = 0;
        }
        if (hdr.flags & 2) {
            lbl_805D5E58 += 2;
        }
        if (hdr.flags & 4) {
            lbl_805D5E58 += 2;
        }
        if (hdr.flags & 8) {
            lbl_805D5E58 += 4;
        }
    }
    load_gvm_texture_archive(buf, res);
    if (big != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(big);
    } else {
        tmp_buf_release__6TLobbyFi(lbl_8044983C);
    }
    return res;
}

u16 read_file_header__9TLanguageFiPv(s32 arg0, u8 *arg1) {
    lbl_805D5E58 = arg0;
    read_into_buffer__9TLanguageFii((s32)((s32)(arg1)), (s32)((s32)(4)));
    M2C_FIELD(arg1, s32 *, 4) = TLanguage__sub_801E4AF0();
    M2C_FIELD(arg1, u16 *, 8) = TLanguage__sub_801E4B40();
    M2C_FIELD(arg1, u16 *, 0xA) = TLanguage__sub_801E4B40();
    bswap_32__FPUl(arg1 + 4);
    bswap_16__FPUs(arg1 + 8);
    bswap_16__FPUs(arg1 + 0xA);
    return M2C_FIELD(arg1, u16 *, 0xA);
}

extern s32 lbl_805D5E58;

void read_into_buffer__9TLanguageFii(s32 arg0, s32 arg1) {
    move_data__6TLobbyFv(arg0, lbl_805D5E58, arg1);
    lbl_805D5E58 += arg1;
}

s32 TLanguage__sub_801E4AF0(void) {
    s32 v = *(u8 *)lbl_805D5E58++;
    v |= *(u8 *)lbl_805D5E58++ << 8;
    v |= *(u8 *)lbl_805D5E58++ << 16;
    v |= *(u8 *)lbl_805D5E58++ << 24;
    return v;
}

s32 TLanguage__sub_801E4B40(void) {
    s32 lo = *(u8 *)lbl_805D5E58++;
    lo |= *(u8 *)lbl_805D5E58++ << 8;
    return lo;
}

void update_texture_wave_image(void *arg0) {
    if ((is_split_screen() == 0) || (get_camera_no__11TCameraCtrlFv() == 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x3C));
        ((VObj_801E4B68_801E4874 *)arg0)->m0();
        distort_texture_wave_image(arg0);
    }
}

}
