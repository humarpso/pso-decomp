#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8013630C_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_8013630C_main_task_size[sizeof(RecoveredGlobal_8013630C_main_task) == 0x34 ? 1 : -1];

struct Base_801361E8 { u8 pad[0x18]; };

struct Obj_801361E8 : Base_801361E8 { virtual ~Obj_801361E8(); };

struct Node_801361E8 {
    u8 pad0[6];
    u16 id;
    u8 pad8[4];
    Node_801361E8 *next;
    u8 pad10[8];
    void *vt;
    u8 b1c, b1d, b1e, b1f;
};

struct Mgr_801361E8 { u8 pad[0x14]; Node_801361E8 *head; };

struct NodeB_801368B0;
struct Base_801368B0 { u8 pad[0x18]; };

struct Obj_801368B0 : Base_801368B0 { virtual ~Obj_801368B0(); };

struct Ent_801368B0 { u8 hdr[0xC]; s32 id; char name[0x10]; u8 rest[0x43C - 0x20]; };

struct Base_80136A8C { u8 pad[0x18]; };

struct Ply_80136A8C : Base_80136A8C {
    virtual ~Ply_80136A8C();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void m6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual char *m10();
};

struct Hdr_80136A8C {
    u8 pad0[0xAC];
    s32 fAC;
    u8 padB0[0x488 - 0xB0];
    s32 f488;
    u8 pad48C[4];
};

struct Base_80136C94 { u8 pad[0x18]; };

struct Obj_80136C94 : Base_80136C94 { virtual ~Obj_80136C94(); };

struct Row_80136C94 { u8 pad[8]; u32 ip; u8 pad2[20]; };

struct Hdr_80136C94 { u8 data[0x10]; };

struct Pkt_80136C94 {
    u8 pad0[0x84];
    Row_80136C94 rows[4];
    s8 client_id;
    s8 leader_id;
    s8 b106;
    s8 b107;
    s8 count;
    s8 b109;
    s8 b10a;
    s8 b10b;
    s32 w10c;
    u8 b110;
};

extern "C" {
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_8013630C_main_task main_task;
extern u32 TLobby__data_805D55D8;
void handle_6x72_done_loading_into_game(void);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 get_player_by_client_id(void *);
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
s32 TWindow__close(int);
char *strncpy(char *, const char *, u32);
extern char lbl_8043EF4C[];
extern char TLobby__data_8050AAE8[][16];
extern const char TLobby__data_805DB0B0[4];
extern RecoveredGlobal_8013630C_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D5598;
extern u32 TLobby__data_805D55D8;
extern s16 TLobby__data_805D5CE8;
extern Mgr_801361E8 *lbl_805D5E48;
extern s32 lbl_805D61AC;
void TLobby__sub_801361E8(u32 arg0, s32 arg1, s32 arg2);
void TKeyBoardControl__sub_8000F978();
void *get_current_floor();
void TLobby__sub_801378AC(Ent_801368B0 *, s32, s32, s32);
void destroy_all_objects__6TLobbyFv();
void TLobby__sub_8013A170(const char *fmt, ...);
void set_player_count__6TLobbyFi(s32);
s32 get_player_by_client_id(void *);
void TLobby__sub_80207750(void *, s32);
char *strncpy(char *, const char *, u32);
extern u8 TLobby__sub_801371B0[];
extern char TLobby__data_8043EF38[];
extern char lbl_8043EF4C[];
extern char lbl_8043EFC4[];
extern char TLobby__data_8050AAE8[][16];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern u8 *TLobby__data_805D5580;
extern s32 TLobby__data_805D5584;
extern s32 TLobby__data_805D5588;
extern s32 TLobby__data_805D5598;
extern s32 lbl_805D55A0;
extern s32 TLobby__data_805D55AC;
extern s32 TLobby__data_805D55B0;
extern s32 TLobby__data_805D55B8;
extern Mgr_801361E8 *lbl_805D5E48;
void TLobby__sub_801368B0(Ent_801368B0 *ents, s32 n, s32 client_id, s32 leader, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void TLobby__sub_8013A170(const char *fmt, ...);
void TLobby__sub_8013A348(void *);
s32 TLobby__sub_801A3E8C();
s32 TObjPlayer__sub_801B4CE4(void *, void *);
s32 TObjPlayer__sub_801B4FD8(void *);
Ply_80136A8C *create_remote_player_object(void *);
u8 *TObjPlayer__sub_801BDEF8(s32, s32, void *);
void TLobby__sub_801DB554(void *);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
char *strncpy(char *, const char *, u32);
extern char lbl_8043EE48[];
extern char TLobby__data_8050AAE8[][16];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern u8 *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
void TLobby__sub_80136A8C(void);
void mark_area_change_pending();
void clear_header_struct__10TObjPlayerFPv(void *);
void TFontSmallTask__sub_800FD5F4(void *, s32);
void destroy_all_objects__6TLobbyFv();
void TLobby__sub_8013A170(const char *fmt, ...);
void set_player_count__6TLobbyFi(s32);
void fn_8013ACE4(s32);
void fn_8013ACEC(s32);
void TObjCityMainWarp__sub_80186634();
void set_flag_and_update__6TLobbyFv();
s32 get_player_by_client_id(void *);
void bswap_32__FPUl(u32 *);
void TAdStorySelectGC__sub_80207D44(s32);
void set_area__6TLobbyFPvi(void *, s32, s32);
void *memcpy(void *, const void *, u32);
extern char TLobby__data_8043EF38[];
extern char lbl_8043EFD4[];
extern u8 TLobby__data_805011D8[];
extern s32 lbl_8050ABA8[4];
extern Row_80136C94 lbl_8050ABB8[4];
extern u8 lbl_80515BA0[];
extern s32 TLobby__data_805D4E30;
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern s32 lbl_805D5550;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5598;
extern s32 lbl_805D55A0;
void TLobby__sub_80136C94(Pkt_80136C94 *pkt);
}

extern "C" {

void TLobby__sub_801361E8(u32 arg0, s32 arg1, s32 arg2) {
    Obj_801361E8 *p;
    Node_801361E8 *n;
    TLobby__data_805D53AC = arg1;
    TLobby__data_805D5598 = arg2;
    p = (Obj_801361E8 *)get_player_by_client_id((void *)arg0);
    if (p != NULL) {
        for (n = lbl_805D5E48->head; n != NULL; n = n->next) {
            if (n->id == arg0) {
                TLobby__sub_8013A170(lbl_8043EF4C, n->b1c, n->b1d, n->b1e, n->b1f);
                delete (Obj_801361E8 *)n;
                break;
            }
        }
        delete p;
    }
    strncpy(TLobby__data_8050AAE8[arg0], TLobby__data_805DB0B0, 0x10);
    if (TLobby__data_805D5594 == 0xE) {
        TLobby__data_805D5CE8 = 1;
    }
    if (TLobby__data_805D55D8 != 0) {
        TWindow__close(TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0;
    }
    if (lbl_805D61AC == 0) {
        clear_flag3_all_tasks__9TMainTaskFv(&main_task.value);
    }
}

void handle_6x72_done_loading_into_game(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((int) (TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&main_task.value));
}
#pragma push
#pragma opt_propagation off
void TLobby__sub_801368B0(Ent_801368B0 *ents, s32 n, s32 client_id, s32 leader, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 v4;
    Obj_801368B0 *p;
    s32 i;
    s32 j;
    Node_801361E8 *node;
    destroy_all_objects__6TLobbyFv();
    TLobby__sub_8013A170(lbl_8043EFC4, client_id);
    lbl_805D53A0 = client_id;
    v4 = arg4;
    TLobby__data_805D5584 = 1;
    TLobby__data_805D5598 = 1;
    TLobby__data_805D55B0 = arg4;
    TLobby__data_805D55AC = arg5;
    TLobby__data_805D55B8 = arg6;
    set_player_count__6TLobbyFi(0);
    TLobby__data_805D5588 = 0;
    TLobby__data_805D53AC = leader;
    for (node = lbl_805D5E48->head; node != NULL; node = node->next) {
        TLobby__sub_8013A170(lbl_8043EF4C, node->b1c, node->b1d, node->b1e, node->b1f);
        delete (Obj_801368B0 *)node;
    }
    for (j = 0; j < 12; j++) {
        TLobby__data_8050AAE8[j][0] = 0;
    }
    for (i = 0; i < n; i++) {
        strncpy(TLobby__data_8050AAE8[ents[i].id], ents[i].name, 0x10);
    }
    for (i = 0; i < 12; i++) {
        p = (Obj_801368B0 *)get_player_by_client_id((void *)i);
        if (p != NULL) {
            delete p;
            TLobby__sub_8013A170(TLobby__data_8043EF38, i);
        }
    }
    TLobby__sub_801378AC(ents, n, client_id, leader);
    TLobby__sub_80207750(get_current_floor(), v4);
    lbl_805D55A0 = arg7;
    TKeyBoardControl__sub_8000F978();
    *(u8 **)(TLobby__data_805D5580 + 0xBBF8) = TLobby__sub_801371B0;
}
#pragma pop

void TLobby__sub_80136A8C(void) {
    Ply_80136A8C *p;
    Hdr_80136A8C hdr;
    Ply_80136A8C *q;
    if (TLobby__sub_801A3E8C() != 0) {
        p = (Ply_80136A8C *)TObjPlayer__sub_801BDEF8(lbl_805D53A0, 0, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF));
        copy_header_struct__6TLobbyFPvPv((u8 *)p + 0xDAC, (u8 *)(*(void * *)&TLobby__data_805D5580) + 0x1900);
        p->m6();
        strncpy(TLobby__data_8050AAE8[lbl_805D53A0], p->m10(), 0x10);
        TLobby__sub_8013A170(lbl_8043EE48, lbl_805D53A0);
        TLobby__sub_801DB554((*(void * *)&TLobby__data_805D5580));
        TLobby__data_805D5594 = 0xF;
        p = (Ply_80136A8C *)TObjPlayer__sub_801BDEF8(1 - lbl_805D53A0, 4, get_char_index__23TAdSinglePlyChrSelectGCFUi(0));
        if (p != NULL) {
            TObjPlayer__sub_801B4FD8(&hdr);
            TObjPlayer__sub_801B4CE4(p, &hdr);
            TLobby__sub_8013A348(&hdr);
            hdr.fAC = 0;
            hdr.f488 = 0;
            delete p;
            q = create_remote_player_object(&hdr);
            if (q != NULL) {
                q->m6();
            }
        }
    } else if (lbl_805D53A0 == TLobby__data_805D53AC) {
        p = (Ply_80136A8C *)TObjPlayer__sub_801BDEF8(lbl_805D53A0, 0, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF));
        copy_header_struct__6TLobbyFPvPv((u8 *)p + 0xDAC, (u8 *)(*(void * *)&TLobby__data_805D5580) + 0x1900);
        p->m6();
        strncpy(TLobby__data_8050AAE8[lbl_805D53A0], p->m10(), 0x10);
        TLobby__sub_8013A170(lbl_8043EE48, lbl_805D53A0);
        TLobby__sub_801DB554((*(void * *)&TLobby__data_805D5580));
        TLobby__data_805D5594 = 0xF;
    }
}
void TLobby__sub_80136C94(Pkt_80136C94 *pkt) {
    Hdr_80136C94 hdr;
    Obj_80136C94 *p;
    s32 i;
    s32 j;
    clear_header_struct__10TObjPlayerFPv(&hdr);
    memcpy(lbl_8050ABB8, pkt->rows, 0x80);
    bswap_32__FPUl(&lbl_8050ABB8[0].ip);
    bswap_32__FPUl(&lbl_8050ABB8[1].ip);
    bswap_32__FPUl(&lbl_8050ABB8[2].ip);
    bswap_32__FPUl(&lbl_8050ABB8[3].ip);
    destroy_all_objects__6TLobbyFv();
    TLobby__sub_8013A170(lbl_8043EFD4, pkt->client_id);
    lbl_805D53A0 = pkt->client_id;
    TLobby__data_805D53AC = pkt->leader_id;
    TLobby__data_805D5598 = pkt->b106;
    set_player_count__6TLobbyFi(pkt->count);
    TLobby__data_805D4E30 = pkt->b10b;
    lbl_805D5550 = pkt->b107;
    lbl_805D55A0 = pkt->b109;
    fn_8013ACEC(pkt->w10c);
    TFontSmallTask__sub_800FD5F4(TLobby__data_805011D8, pkt->b10a);
    if ((s32)pkt->b110 == 2) {
        TAdStorySelectGC__sub_80207D44(1);
    } else {
        TAdStorySelectGC__sub_80207D44(0);
    }
    fn_8013ACE4(pkt->w10c);
    for (i = 0; i < 0xC; i++) {
        p = (Obj_80136C94 *)get_player_by_client_id((void *)i);
        if (p != NULL) {
            delete p;
            TLobby__sub_8013A170(TLobby__data_8043EF38, i);
        }
    }
    for (j = 0; j < 4; j++) {
        lbl_8050ABA8[j] = 0;
    }
    TObjCityMainWarp__sub_80186634();
    TLobby__data_805D5590 = 4;
    set_area__6TLobbyFPvi(lbl_80515BA0, 0, 0);
    set_flag_and_update__6TLobbyFv();
    mark_area_change_pending();
}

}
