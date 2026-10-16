#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_8001EDF4_lbl_804FE148 {
    s8 value;
    u8 remaining[0x1F];
};

struct FishEntry8_8001ED9C { s32 a; s32 b; };

struct Fish_8001ED9C { u8 pad[0x430]; FishEntry8_8001ED9C *entries; };

struct FishEntry16_8001EDB0 { s32 a; s32 b; s32 c; s32 d; };

struct Fish_8001EDB0 { u8 pad[0x42C]; FishEntry16_8001EDB0 *entries; };

struct FishEntry16_8001EDC4 { s32 a; s32 b; s32 c; s32 d; };

struct Fish_8001EDC4 { u8 pad[0x42C]; FishEntry16_8001EDC4 *entries; };

struct List_8001EDD8 { u8 pad[0x18]; s32 items[0x100]; s32 count; };

struct Glob_8001EE48 { s8 value; u8 remaining[0x1F]; };

extern "C" {
s32 strcmp(void *, void *);
extern RecoveredGlobal_8001EDF4_lbl_804FE148 TLobby__tmp_buf_name;
extern s32 tmp_buf_in_use_flag;
void TLobby__sub_8001EDF4(u8 *arg0);
s32 get_bml_motion(Fish_8001ED9C *self, s32 i);
s32 TObjFish__sub_8001EDB0(Fish_8001EDB0 *self, s32 i);
s32 get_bml_model(Fish_8001EDC4 *self, s32 i);
void TLobby__sub_8001EDD8(List_8001EDD8 *self, s32 item);
char *strncpy(char *d, const char *s, u32 n);
extern RecoveredGlobal_8001EDF4_lbl_804FE148 TLobby__tmp_buf_name;
extern char lbl_80434AE8[];
extern s32 tmp_buf_in_use_flag;
extern s32 lobby_download_buffer;
s32 strcmp(void *, void *);
extern char lbl_80434AA0[];
extern char lbl_80434AC0[];
extern RecoveredGlobal_8001EDF4_lbl_804FE148 TLobby__tmp_buf_name;
extern s32 tmp_buf_in_use_flag;
}

extern "C" {

s32 TLobby__sub_8001EEF4(void);
int fn_8001ED90(void* p);

int fn_8001ED90(void* p) { return (*(u32*)((char*)p + 0x0) >> 10) & 0x1; }

s32 get_bml_motion(Fish_8001ED9C *self, s32 i) {
    return self->entries[i].b;
}

s32 TObjFish__sub_8001EDB0(Fish_8001EDB0 *self, s32 i) {
    return self->entries[i].d;
}

s32 get_bml_model(Fish_8001EDC4 *self, s32 i) {
    return self->entries[i].c;
}

extern s32 tmp_buf_in_use_flag;

typedef char RecoveredGlobal_8001EDF4_lbl_804FE148_size[sizeof(RecoveredGlobal_8001EDF4_lbl_804FE148) == 0x20 ? 1 : -1];

void TLobby__sub_8001EDD8(List_8001EDD8 *self, s32 item) {
    self->items[self->count++] = item;
}

void TLobby__sub_8001EDF4(u8 *arg0) {
    if (((s32) tmp_buf_in_use_flag == 0) && (strcmp(&TLobby__tmp_buf_name.value, arg0) == 0)) {
        tmp_buf_in_use_flag = 1;
        TLobby__tmp_buf_name.value = 0;
    }
}

s32 TLobby::tmp_buf_release() {
    s32 arg0 = (s32)this;
    if (arg0 != 0) {
        if (tmp_buf_in_use_flag == 1) {
            TLobby::debug_print((s32)lbl_80434AA0, arg0);
            return 0;
        }
        if (strcmp(&TLobby__tmp_buf_name, (void *)arg0) != 0) {
            TLobby::debug_print((s32)lbl_80434AC0, arg0, &TLobby__tmp_buf_name);
            return 0;
        }
    }
    tmp_buf_in_use_flag = 1;
    (*(Glob_8001EE48 *)&TLobby__tmp_buf_name).value = 0;
    return 1;
}

s32 TLobby__sub_8001EEF4(void) {
    return tmp_buf_in_use_flag;
}
s32 TLobby::tmp_buf_use_req(const char *name) {
    if (tmp_buf_in_use_flag != 0) {
        tmp_buf_in_use_flag = 0;
        strncpy(((char *)&TLobby__tmp_buf_name), name, 0x20);
        return lobby_download_buffer;
    }
    TLobby::debug_print((s32)lbl_80434AE8);
    return 0;
}

}
