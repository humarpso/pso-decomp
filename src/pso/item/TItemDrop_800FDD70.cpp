#include "types.h"
struct Ent_800FDD70 { u8 pad[0x30]; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 strcmp(void *, void *);
extern Ent_800FDD70 TItemDrop__gsl_entry_table[];
extern u32 TItemDrop__gsl_adxf_handle;
extern s32 TItemDrop__gsl_entry_count;
Ent_800FDD70 *find_gsl_entry(void *name);
M2C_UNK fn_800F93B4(void *, Ent_800FDD70 *, s32);
M2C_UNK change_file_extension__6TLobbyFPvPvPv(void *, void *, const void *);
M2C_UNK close_adxf_handle__6TLobbyFPv(u32);
s32 strlen(char *);
extern Ent_800FDD70 TItemDrop__gsl_entry_table[];
extern char TItemDrop__file_name_buf[];
extern char *lbl_805D2B38;
extern u32 TItemDrop__gsl_adxf_handle;
extern s32 TItemDrop__data_805D53CC;
extern s32 TItemDrop__data_805D53D0;
extern const char lbl_805DAA3C[4];
void TItemDrop__sub_800FDDF4(void);
M2C_UNK reset_read_state__6TLobbyFv();
M2C_UNK set_read_params__6TLobbyFiii(u32 *, s32, Ent_800FDD70 *);
M2C_UNK run_frame__6TLobbyFv();
M2C_UNK reset__8TGStreamFv();
M2C_UNK strncpy(char *, char *, s32);
s32 TLobby__sub_803CC4C0(u32);
M2C_UNK read_checked_align__6TLobbyFiii(u32, s32, Ent_800FDD70 *);
u32 adxf_open__6TLobbyFUii(char *, s32);
extern Ent_800FDD70 TItemDrop__gsl_entry_table[];
extern char TItemDrop__file_name_buf[];
extern char *lbl_805D2B38;
extern u32 TItemDrop__gsl_adxf_handle;
extern s32 TItemDrop__gsl_entry_count;
extern s32 TItemDrop__data_805D53CC;
extern s32 TItemDrop__data_805D53D0;
void TItemDrop__sub_800FDE7C(char *name);
}

extern "C" {

Ent_800FDD70 *find_gsl_entry(void *name) {
    Ent_800FDD70 *e;
    s32 i;
    if (TItemDrop__gsl_adxf_handle == 0) {
        return 0;
    }
    e = TItemDrop__gsl_entry_table;
    for (i = 0; i < TItemDrop__gsl_entry_count; i++, e++) {
        if (strcmp(e, name) == 0) {
            return e;
        }
    }
    return 0;
}
void TItemDrop__sub_800FDDF4(void) {
    char buf[32];
    s32 n;
    if (TItemDrop__data_805D53CC == 0) {
        close_adxf_handle__6TLobbyFPv(TItemDrop__gsl_adxf_handle);
        TItemDrop__gsl_adxf_handle = 0;
    } else {
        n = strlen(lbl_805D2B38);
        if (n > 0) {
            change_file_extension__6TLobbyFPvPvPv(buf, TItemDrop__file_name_buf, lbl_805DAA3C);
            fn_800F93B4(buf, TItemDrop__gsl_entry_table, n);
        }
        TItemDrop__data_805D53D0 = 0;
        TItemDrop__data_805D53CC = 0;
    }
}
void TItemDrop__sub_800FDE7C(char *name) {
    Ent_800FDD70 *e;
    s32 i;
    strncpy(TItemDrop__file_name_buf, name, 0x20);
    if (TItemDrop__data_805D53CC == 0) {
        TItemDrop__gsl_adxf_handle = adxf_open__6TLobbyFUii(name, 0);
        if (TItemDrop__gsl_adxf_handle != 0) {
            reset__8TGStreamFv();
            read_checked_align__6TLobbyFiii(TItemDrop__gsl_adxf_handle, 6, TItemDrop__gsl_entry_table);
            set_read_params__6TLobbyFiii(&TItemDrop__gsl_adxf_handle, 6, TItemDrop__gsl_entry_table);
            for (;;) {
                if (TLobby__sub_803CC4C0(TItemDrop__gsl_adxf_handle) == 3) {
                    break;
                }
                run_frame__6TLobbyFv();
            }
            reset_read_state__6TLobbyFv();
            TItemDrop__gsl_entry_count = 0;
            e = TItemDrop__gsl_entry_table;
            for (i = 0; i < 0xFF; i++, e++) {
                if ((s8)e->pad[0] == 0) {
                    TItemDrop__gsl_entry_count = i;
                    return;
                }
            }
        }
    } else {
        TItemDrop__gsl_entry_count = 0;
        TItemDrop__data_805D53D0 = 1;
        *lbl_805D2B38 = 0;
    }
}

}
