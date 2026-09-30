#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80185160 { u8 pad[0x8C]; s32 dest; };

extern "C" {
extern int lbl_8050DC20[];
void TLobby__sub_80184D00(void* _w0);
extern int lbl_8050DC20[];
extern s32 lbl_80444268[];
extern s32 lbl_805D55A0;
void TLobby__sub_80184D00(void* _w0);
void TLobby__sub_80184C80(void *p);
void TObjLaboMapWarp__sub_80185400(void *);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
extern const char lbl_804449C0[];
extern const char lbl_804449D0[];
extern const char lbl_804449E0[];
extern const char lbl_804449F0[];
extern const char lbl_80444A00[];
extern const char lbl_80444A10[];
extern const char *lbl_804B6028[];
void TObjLaboMapWarp__vt17(Obj_80185160 *self);
}

extern "C" {

int TLobby__sub_80184C2C(int a0);
int TLobby__sub_80184C40(int a0);
u8 TLobby__sub_80184C54(void);
int TLobby__sub_80184C6C(int a0);
void TLobby__sub_80184CE0(void* p);

    extern int lbl_8050DC50[];
int TLobby__sub_80184C2C(int a0) {  return lbl_8050DC50[a0]; }

    extern int lbl_8050DC38[];
int TLobby__sub_80184C40(int a0) {  return lbl_8050DC38[a0]; }

extern s32 lbl_805D5B30;

u8 TLobby__sub_80184C54(void) {
    return (u8) (lbl_805D5B30 != -1);
}

    extern int lbl_8050DC20[];
int TLobby__sub_80184C6C(int a0) {  return lbl_8050DC20[a0]; }

void TLobby__sub_80184C80(void *p) {
    s32 i;
    TLobby__sub_80184D00((void*)(p));
    for (i = 0; i < 6; i++) {
        if (lbl_805D55A0 == lbl_80444268[i]) {
            lbl_8050DC20[i] = 1;
            return;
        }
    }
}

void TLobby__sub_80184CE0(void* p) { TLobby__sub_80184D00((void*)(p)); }
void TLobby__sub_80184D00(void* _w0) {
    s32 i;
    for (i = 0; i < 6; i++) {
        ((s32 *)&lbl_8050DC20)[i] = 0;
    }
}
void TObjLaboMapWarp__vt17(Obj_80185160 *self) {
    TObjLaboMapWarp__sub_80185400(self);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x13001C, lbl_804449C0);
    TObjEneBm5GibonU__sub_803D853C(0x13001D, lbl_804449D0);
    TObjEneBm5GibonU__sub_803D853C(0x13001E, lbl_804449E0);
    TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_804449F0);
    TObjEneBm5GibonU__sub_803D853C(0x130021, lbl_80444A00);
    TObjEneBm5GibonU__sub_803D853C(0x130022, lbl_80444A10, lbl_804B6028[self->dest]);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
