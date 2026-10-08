#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ids_80145A94 { s32 v[2]; };

struct Buf_80145A94 { s32 hdr; s8 name[0xA0]; s8 x[0x270 - 0xA4]; };

extern "C" {
s32 TLobby__sub_8014618C();
M2C_UNK render_tick__Fv();
M2C_UNK get_global_63e0__6TLobbyFv();
M2C_UNK load_player_data__6TLobbyFv();
void *xmalloc__FUl(u32);
M2C_UNK xfree__FPv(void *);
M2C_UNK TAdPlayerLoadGC__sub_803F2F1C();
M2C_UNK TAdPlayerLoadGC__sub_803F31BC();
M2C_UNK TAdPlayerLoadGC__sub_803F31D8();
M2C_UNK TLobby__sub_803F3BF8(int, s32, u32);
M2C_UNK TAdPlayerLoadGC__sub_803F3CF4();
M2C_UNK TLobby__sub_803F3D60();
s32 fn_803F3DD4(s32, void *);
s32 fn_803F3EA0(s32 *, s32 *);
s32 request_load__15TAdPlayerLoadGCFi(s32);
s32 TAdPlayerLoadGC__sub_803F45E0(s32 *, s32 *);
u32 TAdPlayerLoadGC__sub_803F4B80();
M2C_UNK copy_current_entry_name__6TLobbyFPvi(void *, int);
M2C_UNK TLobby__sub_803F53A0(int, void *, int);
M2C_UNK TLobby__sub_8042EE4C(u32 *);
M2C_UNK memset(void *, int, int);
extern s32 lbl_8043F3E8[];
extern s16 lbl_805D4EBE;
extern s32 lbl_805D56C8;
extern u16 lbl_805D56CC;
extern u16 lbl_805D56CE;
s32 TLobby__sub_80145A94(void);
M2C_UNK TLobby__sub_8042EE4C(u32 *);
s32 TLobby__sub_80145DB4(s32 arg0);
}

extern "C" {

s32 TLobby__sub_80145A94(void) {
    Buf_80145A94 buf;
    Ids_80145A94 ids;
    s32 res;
    s32 extra;
    u32 status;
    s32 found;
    void *mem;
    s32 id;
    s32 running;
    s32 state;
    s32 sub;
    s32 end;
    s32 i;
    s32 start;
    found = 0;
    lbl_805D56CC = 0;
    ids.v[0] = lbl_8043F3E8[0];
    ids.v[1] = lbl_8043F3E8[1];
    TLobby__sub_8042EE4C(&status);
    if (status == 5) {
        status = 4;
    }
    if (lbl_805D56CE != 0) {
        TLobby__sub_803F3D60();
        lbl_805D56CE = 0;
    }
    TLobby__sub_803F3BF8(0, lbl_805D56C8, status);
    lbl_805D56CE = 1;
    get_global_63e0__6TLobbyFv();
    TAdPlayerLoadGC__sub_803F31D8();
    start = 0;
    end = 2;
    switch (lbl_805D4EBE) {
    case 0:
        start = 0;
        end = 2;
        break;
    case 1:
        start = 0;
        end = 1;
        break;
    case 2:
        start = 1;
        end = 2;
        break;
    }
    for (i = start; i < end; i++) {
        id = ids.v[i];
        running = 1;
        state = 1;
        sub = 1;
        while (running) {
            TAdPlayerLoadGC__sub_803F2F1C();
            TAdPlayerLoadGC__sub_803F3CF4();
            switch (state) {
            case 0:
                running = 0;
                break;
            case 1:
                switch (sub) {
                case 1:
                    if (request_load__15TAdPlayerLoadGCFi(id) < 0) {
                        state = 0;
                        sub = 0;
                        break;
                    }
                    sub = 2;
                case 2:
                    switch (TAdPlayerLoadGC__sub_803F45E0(&res, &extra)) {
                    case 200:
                        break;
                    case 0:
                        if (res == 0) {
                            state = 2;
                            sub = 1;
                        } else {
                            state = 0;
                            sub = 0;
                        }
                        break;
                    default:
                        state = 0;
                        sub = 0;
                        break;
                    }
                    break;
                }
                break;
            case 2:
                switch (sub) {
                case 1:
                    mem = xmalloc__FUl(TAdPlayerLoadGC__sub_803F4B80());
                    if (mem == NULL) {
                        state = 0;
                        sub = 0;
                        break;
                    }
                    if (fn_803F3DD4(id, mem) < 0) {
                        xfree__FPv(mem);
                        state = 0;
                        sub = 0;
                        break;
                    }
                    sub = 2;
                case 2:
                    switch (fn_803F3EA0(&res, &extra)) {
                    case 200:
                        break;
                    case 0:
                        xfree__FPv(mem);
                        state = 0;
                        sub = 0;
                        found = 1;
                        lbl_805D56CC |= 1;
                        break;
                    default:
                        xfree__FPv(mem);
                        state = 0;
                        sub = 0;
                        break;
                    }
                    break;
                }
                break;
            }
            render_tick__Fv();
        }
        if (found != 0) {
            break;
        }
    }
    TAdPlayerLoadGC__sub_803F31BC();
    load_player_data__6TLobbyFv();
    if (found != 0) {
        if (TLobby__sub_8014618C() != 0) {
            return 1;
        }
        memset(&buf, 0, 0x270);
        copy_current_entry_name__6TLobbyFPvi(buf.name, 0x80);
        TLobby__sub_803F53A0(0, buf.x, 0x40);
        if (buf.name[0] == 0 || buf.x[0] == 0) {
            return 0;
        }
    }
    return found;
}
s32 TLobby__sub_80145DB4(s32 arg0) {
    s32 sp8;
    TLobby__sub_8042EE4C((u32 *)(&sp8));
    switch (sp8) {
    case 0:
    case 1:
        return 0;
    case 2:
        if (arg0 == 1) {
            return 1;
        }
        break;
    case 4:
    case 5:
        if (arg0 != 1) {
            return 1;
        }
        break;
    case 3:
        break;
    }
    return 0;
}

}
