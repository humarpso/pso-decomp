#include "pso/misc/TEnding.h"

#include "types.h"
struct Vec_8008C5E8 { s32 x, y, z; };

extern "C" {
void TKeyBoardControl__sub_8000F90C(int);
void TKeyBoardControl__sub_8000F91C(int);
void TCameraCtrl__sub_80069C94(void *, void *);
void TCameraCtrl__sub_8006A5EC(s8 arg0);
void TCameraCtrl__ct(void *, void *);
void __ct__7TEndingFv(void *);
void TLobby__sub_800F9B84(void);
void TLobby__sub_800FD6F8(void *, int);
void TObjLight__sub_80133B10(void *);
void TKeyBoardControl__sub_801A66B8(void);
void TLobby__sub_801E2F44(int, int, int);
int render_tick__Fv(void);
void create_quad_sprites__13TParticleCtrlFv(void);
void TObjBgmColCtrl__sub_802274B8(void *);
void *__nw__7TObjectFUl(int);
void TCameraCtrl__sub_803D6688(f32 farg0, f32 farg1);
extern Vec_8008C5E8 lbl_80439570;
extern Vec_8008C5E8 lbl_8043957C;
extern u8 lbl_80439588[];
extern u8 lbl_8048E7C0[];
extern u8 lbl_804A6F34[];
extern void *tl_camera;
extern const f32 lbl_805D9570;
extern const f32 lbl_805D9574;
int TEnding__sub_8008C5E8();
}

extern "C" {
extern s32 lbl_805D4F0C;

void set_flag_and_advance__7TEndingFv() {
    lbl_805D4F0C = 1;
    TEnding__sub_8008C5E8();
}

int TEnding__sub_8008C5E8() {
    void *p;
    TCameraCtrl__sub_803D6688(lbl_805D9570, lbl_805D9574);
    TLobby__sub_801E2F44(0, 0, 0);
    TKeyBoardControl__sub_801A66B8();
    TObjLight__sub_80133B10(lbl_804A6F34);
    p = __nw__7TObjectFUl(0x1D4);
    if (p != 0) {
        TCameraCtrl__ct(p, tl_camera);
    }
    Vec_8008C5E8 a = lbl_80439570;
    Vec_8008C5E8 b = lbl_8043957C;
    TCameraCtrl__sub_8006A5EC(9);
    TCameraCtrl__sub_80069C94(&a, &b);
    TLobby__sub_800F9B84();
    TLobby__sub_800FD6F8(lbl_8048E7C0, 0x68);
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(2);
    TObjBgmColCtrl__sub_802274B8(lbl_80439588);
    create_quad_sprites__13TParticleCtrlFv();
    p = __nw__7TObjectFUl(0x710);
    if (p != 0) {
        __ct__7TEndingFv(p);
    }
    return render_tick__Fv();
}

void TEnding__sub_8008C6E8() {}
void TEnding__sub_8008C6EC() {}
}

void TEnding::render() {}
