#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off

struct AdLoadState_805A82C0 {
    s32 x0;
    s32 active;
    s32 x8;
    s32 xc;
    s32 x10;
    s32 result;
    s32 arg;
    s32 a;
    s32 b;
};

typedef struct Ent_803F47BC {
    char name[0x20];
    s16 id;
    s16 a;
    s16 b;
    s16 c;
} Ent_803F47BC;

typedef struct Id_803F47BC {
    s16 id;
    s16 a;
    s16 b;
    s16 c;
    char name[0x20];
} Id_803F47BC;

typedef struct Rec_803F47BC {
    char name[0x10E];
    s16 kind;
    u8 pad[0x210 - 0x110];
} Rec_803F47BC;

typedef struct Big_803F47BC {
    s16 f0;
    s16 cur;
    s16 x4;
    s16 x6;
    Ent_803F47BC ent[6];
    Rec_803F47BC rec[6];
    u8 padD58[0xE5C - 0xD58];
    char strE5C[0x19D4 - 0xE5C];
} Big_803F47BC;

typedef struct Save_803F3F64 {
    u8 pad0[0x5840];
    u8 data[0x23B8];
    u32 crc;
    s32 size;
    u8 tail[0x400];
} Save_803F3F64;

extern "C" {
void TLobby__sub_803F4B2C(s32 arg0);
s32 TLobby__sub_803F4AD8(s32 arg0);
s32 TLobby__sub_803F4AB4(void);
s32 TLobby__sub_803F4B10(s32 arg0);
s32 TLobby__sub_803F4AEC(void);
s32 TLobby__sub_803F4B68(s32 mode);
s32 TLobby__sub_803F4AB4(void);
extern AdLoadState_805A82C0 lbl_805A82C0;
s32 TAdPlayerLoadGC__sub_803F4554(s32 arg0);
s32 TLobby__sub_803F4AB4(void);
extern AdLoadState_805A82C0 lbl_805A82C0;
s32 TAdPlayerLoadGC__sub_803F45E0(s32 *arg0, s32 *arg1);
s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1);
s32 TAdPlayerLoadGC__sub_803F3A14(s32 arg0, s32 *arg1);
s32 TAdPlayerLoadGC__sub_803F3AF0(s32 arg0, const char *arg1);

extern AdLoadState_805A82C0 lbl_805A82C0;
void TAdPlayerLoadGC__sub_803F467C(void);
s32 CARDGetSerialNo(s32 chan, u64 *serialNo);
s32 CARDGetUniqueCode(s32 chan, u64 *code);
s32 TAdPlayerLoadGC__sub_803F4B8C(int chan, u8 *out);
void *memset(void *, int, u32);
void *memcpy(void *, const void *, u32);
char *strcpy(char *dest, const char *src);
s32 TLobby__sub_803F4AEC(void);
extern char lbl_804FCEA4[];
extern char lbl_804FCEB4[];
extern char lbl_804FCEC4[];
extern char lbl_804FCED4[];
extern char lbl_804FCEE4[];
extern char lbl_804FCEF4[];
extern char lbl_804FCF04[];
extern char lbl_804FCF18[];
extern u32 lbl_805D7980;
extern Big_803F47BC *lbl_805D79C0;
extern void *lbl_805D79E0;
void TAdSinglePlyChrSelectGC__sub_803F47BC(void);
void *OSAllocFromHeap(s32 heap, u32 size);
void OSFreeToHeap(s32 heap, void *p);
extern s32 __OSCurrHeap;
void *memset(void *, int, u32);
void *memcpy(void *, const void *, u32);
s32 get_or_set_channel_flag__15TAdPlayerLoadGCFii(s32 arg0, s32 arg1);
s32 TAdPlayerLoadGC__sub_803F3328(s32 arg0);
s32 TAdPlayerLoadGC__sub_803F339C(s32 arg0, s32 *arg1);
s32 TAdPlayerLoadGC__sub_803F3478(s32 arg0, Save_803F3F64 *arg1, s32 arg2, s32 arg3);
s32 TAdPlayerLoadGC__sub_803F3568(s32 arg0, s32 *arg1);
s32 TAdPlayerLoadGC__sub_803F3690(s32 arg0, const char *arg1);
void TAdPlayerLoadGC__sub_803F389C(s32 chan);
s32 TAdPlayerLoadGC__sub_803F38BC(s32 arg0, s32 *arg1);
s32 TAdPlayerLoadGC__sub_803F3998(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_803F47BC(void);
s32 TLobby__sub_803F4AEC(void);
s32 TAdPlayerLoadGC__sub_803F4B24(void);
s32 TAdPlayerLoadGC__sub_803F4B80(void);
s32 TAdPlayerLoadGC__sub_803F4B8C(int chan, u8 *out);
u32 fn_803F4D4C(Save_803F3F64 *arg0, s32 arg1);
s32 fn_803F7254(u8 *arg0, u8 *arg1, u32 arg2, void *arg3);

extern u8 lbl_805A5F00[];
extern AdLoadState_805A82C0 lbl_805A82C0;
extern u8 lbl_805A82E4[];
extern u8 lbl_805A86E4[];
extern u32 lbl_805D7980;
extern Save_803F3F64 *lbl_805D79A0;
extern Big_803F47BC *lbl_805D79C0;
extern void *lbl_805D79E0;
void TAdPlayerLoadGC__sub_803F3F64(void);
}

extern "C" {

s32 TAdPlayerLoadGC__sub_803F4B24(void);
s32 TAdPlayerLoadGC__sub_803F4B80(void);
s32 TLobby__sub_803F4AD8(s32 arg0);
s32 TLobby__sub_803F4B10(s32 arg0);

extern s32 lbl_805D79A4;

#pragma scheduling off
#pragma peephole off
void TAdPlayerLoadGC__sub_803F3F64(void) {
    AdLoadState_805A82C0 *s;
    u32 crc;
    u32 sum;
    u8 key[0x10];
    s = &lbl_805A82C0;
    switch (s->x8) {
    case 3:
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F3998(TAdPlayerLoadGC__sub_803F4B24());
        if (lbl_805A82C0.a < 0) {
            lbl_805A82C0.result = -200;
            s->x8 = 27;
            break;
        }
        s->x8 = 4;
    case 4:
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F38BC(TAdPlayerLoadGC__sub_803F4B24(), &lbl_805A82C0.b);
        if (lbl_805A82C0.a < 0) {
            lbl_805A82C0.result = -200;
            s->x8 = 27;
            break;
        }
        if (lbl_805A82C0.a == 200) {
            break;
        }
        s->x8 = 7;
    case 7:
        get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 1);
        lbl_805A82C0.x10 = TAdPlayerLoadGC__sub_803F3690(TAdPlayerLoadGC__sub_803F4B24(), "sega_network_information");
        if (lbl_805A82C0.x10 < 0) {
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
            lbl_805A82C0.a = lbl_805A82C0.x10;
            TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
            lbl_805A82C0.result = -204;
            s->x8 = 27;
            break;
        }
        s->x8 = 8;
    case 8:
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F3568(TAdPlayerLoadGC__sub_803F4B24(), &lbl_805A82C0.b);
        if (lbl_805A82C0.a < 0) {
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
            TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
            lbl_805A82C0.result = -204;
            s->x8 = 27;
            break;
        }
        if (lbl_805A82C0.a == 200) {
            break;
        }
        get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
        s->x8 = 9;
    case 9:
        get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 1);
        if ((void *)(&lbl_805A82C0)[0].x0 == NULL) {
            if (lbl_805D79A0 != NULL) {
                OSFreeToHeap(__OSCurrHeap, lbl_805D79A0);
            }
            lbl_805D79A0 = (Save_803F3F64 *)OSAllocFromHeap(__OSCurrHeap, TAdPlayerLoadGC__sub_803F4B80());
            if (lbl_805D79A0 == NULL) {
                TAdPlayerLoadGC__sub_803F3328(lbl_805A82C0.x10);
                get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
                TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
                lbl_805A82C0.result = -4;
                s->x8 = 27;
                break;
            }
        } else {
            lbl_805D79A0 = (Save_803F3F64 *)lbl_805A82C0.x0;
        }
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F3478(lbl_805A82C0.x10, lbl_805D79A0, TAdPlayerLoadGC__sub_803F4B80(), 0);
        if (lbl_805A82C0.a < 0) {
            if ((void *)(&lbl_805A82C0)[0].x0 == NULL) {
                if (lbl_805D79A0 != NULL) {
                    OSFreeToHeap(__OSCurrHeap, lbl_805D79A0);
                }
            } else {
                lbl_805A82C0.x0 = 0;
            }
            lbl_805D79A0 = NULL;
            TAdPlayerLoadGC__sub_803F3328(lbl_805A82C0.x10);
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
            TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
            lbl_805A82C0.result = -205;
            s->x8 = 27;
            break;
        }
        s->x8 = 10;
    case 10:
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F339C(TAdPlayerLoadGC__sub_803F4B24(), &lbl_805A82C0.b);
        if (lbl_805A82C0.a == 0) {
            if (lbl_805D79A0->size <= 0 || (u32)lbl_805D79A0->size > 0x23B8) {
                TAdPlayerLoadGC__sub_803F3328(lbl_805A82C0.x10);
                get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
                TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
                lbl_805A82C0.result = -30;
                s->x8 = 27;
            } else {
                lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F4B8C(TAdPlayerLoadGC__sub_803F4B24(), key);
                if (lbl_805A82C0.a != 0) {
                    TAdPlayerLoadGC__sub_803F3328(lbl_805A82C0.x10);
                    get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
                    TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
                    lbl_805A82C0.result = -31;
                    s->x8 = 27;
                } else {
                    crc = lbl_805D79A0->crc;
                    lbl_805D79A0->crc = 0;
                    sum = fn_803F4D4C(lbl_805D79A0, 0x8000);
                    if (sum != crc) {
                        TAdSinglePlyChrSelectGC__sub_803F47BC();
                        TAdPlayerLoadGC__sub_803F3328(lbl_805A82C0.x10);
                        get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
                        TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
                        lbl_805A82C0.result = -32;
                        s->x8 = 27;
                    } else {
                        memcpy(lbl_805A5F00, lbl_805D79A0->data, 0x23B8);
                        memset((*(s16 * *)&lbl_805D79C0), 0, 0x19D4);
                        lbl_805A82C0.a = fn_803F7254(key, lbl_805A5F00, lbl_805D79A0->size, (*(s16 * *)&lbl_805D79C0));
                        if (lbl_805A82C0.a != 0) {
                            TAdSinglePlyChrSelectGC__sub_803F47BC();
                            TAdPlayerLoadGC__sub_803F3328(lbl_805A82C0.x10);
                            get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
                            TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
                            lbl_805A82C0.result = -33;
                            s->x8 = 27;
                        } else {
                            if (lbl_805D7980 != 4) {
                                (*(s16 * *)&lbl_805D79C0)[1] = (*(s16 * *)&lbl_805D79C0)[2];
                            } else {
                                (*(s16 * *)&lbl_805D79C0)[1] = (*(s16 * *)&lbl_805D79C0)[3];
                            }
                            memcpy(lbl_805A82E4, lbl_805D79A0->tail, 0x400);
                            if (TLobby__sub_803F4AEC() == 1) {
                                memcpy(lbl_805D79E0, (*(s16 * *)&lbl_805D79C0), 0x19D4);
                                memcpy(lbl_805A86E4, lbl_805A82E4, 0x400);
                            }
                            lbl_805A82C0.result = 0;
                            s->x8 = 25;
                        }
                    }
                }
            }
        } else {
            if (lbl_805A82C0.a == 200) {
                break;
            }
            lbl_805A82C0.result = -205;
            s->x8 = 27;
        }
        if ((void *)(&lbl_805A82C0)[0].x0 == NULL) {
            if (lbl_805D79A0 != NULL) {
                OSFreeToHeap(__OSCurrHeap, lbl_805D79A0);
            }
        } else {
            lbl_805A82C0.x0 = 0;
        }
        lbl_805D79A0 = NULL;
        TAdPlayerLoadGC__sub_803F3328(lbl_805A82C0.x10);
        get_or_set_channel_flag__15TAdPlayerLoadGCFii(TAdPlayerLoadGC__sub_803F4B24(), 0);
        TAdPlayerLoadGC__sub_803F389C(TAdPlayerLoadGC__sub_803F4B24());
        break;
    }
}

#pragma push
#pragma scheduling off
s32 TAdPlayerLoadGC__sub_803F4554(s32 arg0) {
    AdLoadState_805A82C0 *s;
    switch (TLobby__sub_803F4AB4()) {
    case 0:
        return -1;
    case 1:
    case 2:
    case 3:
        break;
    default:
        return -5;
    }
    s = &lbl_805A82C0;
    if (s->active != 0) {
        return -4;
    }
    s->active = 1;
    s->x8 = 1;
    s->arg = arg0;
    s->result = 200;
    return 0;
}
#pragma pop

#pragma push
#pragma scheduling off
s32 TAdPlayerLoadGC__sub_803F45E0(s32 *arg0, s32 *arg1) {
    AdLoadState_805A82C0 *s;
    s32 r;
    s32 res;
    if (TLobby__sub_803F4AB4() == 0) {
        return -1;
    }
    s = &lbl_805A82C0;
    if (s->active == 1) {
        *arg0 = s->a;
        *arg1 = s->b;
        res = s->result;
        r = res;
        if (res != 200) {
            s->active = 0;
            s->x8 = 0;
        }
    } else {
        *arg0 = 0;
        *arg1 = 0;
        r = -4;
    }
    return r;
}
#pragma pop

#pragma push
#pragma scheduling off
void TAdPlayerLoadGC__sub_803F467C(void) {
    AdLoadState_805A82C0 *s;
    AdLoadState_805A82C0 *t;
    s = &lbl_805A82C0;
    switch (s->x8) {
    case 1:
        get_or_set_channel_flag__15TAdPlayerLoadGCFii(s->arg, 1);
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F3AF0(s->arg, "sega_network_information");
        if (lbl_805A82C0.a < 0) {
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(s->arg, 0);
            lbl_805A82C0.result = -209;
            s->x8 = 27;
            break;
        }
        s->x8 = 2;
    case 2:
        t = &lbl_805A82C0;
        lbl_805A82C0.a = TAdPlayerLoadGC__sub_803F3A14(t->arg, &t->b);
        switch (lbl_805A82C0.a) {
        case 0:
        case -102:
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(t->arg, 0);
            lbl_805A82C0.result = 0;
            s->x8 = 25;
            break;
        case 200:
            break;
        default:
            get_or_set_channel_flag__15TAdPlayerLoadGCFii(t->arg, 0);
            lbl_805A82C0.result = -209;
            s->x8 = 27;
            break;
        }
        break;
    }
}
#pragma pop

#pragma scheduling off
#pragma optimization_level 2
void TAdSinglePlyChrSelectGC__sub_803F47BC(void) {
    s16 i;
    memset(lbl_805D79C0, 0, 0x19D4);
    lbl_805D79C0->cur = -1;
    for (i = 0; i < 6; i++) {
        lbl_805D79C0->ent[i].id = i;
        lbl_805D79C0->ent[i].a = -1;
        lbl_805D79C0->ent[i].b = -1;
        lbl_805D79C0->ent[i].c = -1;
        switch (i) {
        case 0:
            strcpy(lbl_805D79C0->ent[i].name, lbl_804FCEA4);
            strcpy(lbl_805D79C0->rec[i].name, lbl_804FCEA4);
            break;
        case 1:
            strcpy(lbl_805D79C0->ent[i].name, lbl_804FCEB4);
            strcpy(lbl_805D79C0->rec[i].name, lbl_804FCEB4);
            break;
        case 2:
            strcpy(lbl_805D79C0->ent[i].name, lbl_804FCEC4);
            strcpy(lbl_805D79C0->rec[i].name, lbl_804FCEC4);
            break;
        case 3:
            strcpy(lbl_805D79C0->ent[i].name, lbl_804FCED4);
            strcpy(lbl_805D79C0->rec[i].name, lbl_804FCED4);
            break;
        case 4:
            strcpy(lbl_805D79C0->ent[i].name, lbl_804FCEE4);
            strcpy(lbl_805D79C0->rec[i].name, lbl_804FCEE4);
            break;
        case 5:
            strcpy(lbl_805D79C0->ent[i].name, lbl_804FCEF4);
            strcpy(lbl_805D79C0->rec[i].name, lbl_804FCEF4);
            break;
        }
    }
    lbl_805D79C0->ent[0].id = 0;
    lbl_805D79C0->ent[0].a = 0;
    strcpy(lbl_805D79C0->ent[0].name, lbl_804FCF04);
    strcpy(lbl_805D79C0->rec[0].name, lbl_804FCF04);
    strcpy(lbl_805D79C0->strE5C, lbl_804FCF18);
    lbl_805D79C0->rec[0].kind = 1;
    lbl_805D79C0->rec[1].kind = 1;
    lbl_805D79C0->rec[2].kind = 1;
    lbl_805D79C0->rec[3].kind = 1;
    lbl_805D79C0->rec[4].kind = 4;
    lbl_805D79C0->rec[5].kind = 4;
    lbl_805D79C0->x4 = 1;
    lbl_805D79C0->x6 = 4;
    if (lbl_805D7980 != 4) {
        lbl_805D79C0->cur = lbl_805D79C0->x4;
    } else {
        lbl_805D79C0->cur = lbl_805D79C0->x6;
    }
    if (TLobby__sub_803F4AEC() == 1) {
        memcpy(lbl_805D79E0, lbl_805D79C0, 0x19D4);
    }
}

s32 TLobby__sub_803F4AB4(void) { return TLobby__sub_803F4AD8(4); }

s32 TLobby__sub_803F4AD8(s32 arg0) {
    if (arg0 < 4) {
        lbl_805D79A4 = arg0;
    }
    return lbl_805D79A4;
}

extern s32 lbl_805D79A8;

s32 TLobby__sub_803F4AEC(void) { return TLobby__sub_803F4B10(2); }

s32 TLobby__sub_803F4B10(s32 arg0) {
    if (arg0 < 2) {
        lbl_805D79A8 = arg0;
    }
    return lbl_805D79A8;
}

extern s32 lbl_805D4708;

s32 TAdPlayerLoadGC__sub_803F4B24(void) {
    return lbl_805D4708;
}

void TLobby__sub_803F4B2C(s32 arg0) {
    if (TLobby__sub_803F4AB4() >= 1) {
        lbl_805D4708 = arg0;
        TAdSinglePlyChrSelectGC__sub_803F47BC();
    }
}

#pragma push
#pragma scheduling off
s32 TLobby__sub_803F4B68(s32 mode) {
    s32 n = 0x19D4;
    if (mode == 1) {
        n <<= 1;
    }
    return n;
}
#pragma pop

s32 TAdPlayerLoadGC__sub_803F4B80(void) {
    return 0x8000;
}
#pragma push
#pragma scheduling off
s32 TAdPlayerLoadGC__sub_803F4B8C(int chan, u8 *out) {
  u64 serial;
  u64 code;
  s32 rc;
  rc = CARDGetSerialNo(chan, &serial);
  if (rc != 0)
  {
    return rc;
  }
  rc = CARDGetUniqueCode(chan, &code);
  if (rc != 0)
  {
    return rc;
  }
  out[0] = serial & 0xFF;
  out[1] = (serial >> 8) & 0xFF;
  out[2] = (serial >> 16) & 0xFF;
  out[3] = (serial >> 24) & 0xFF;
  out[4] = (serial >> 32) & 0xFF;
  out[5] = (serial >> 40) & 0xFF;
  out[6] = (serial >> 48) & 0xFF;
  out[7] = (serial >> 56) & 0xFF;
  out[8] = code & 0xFF;
  out[9] = (code >> 8) & 0xFF;
  out[10] = (code >> 16) & 0xFF;
  out[11] = (code >> 24) & 0xFF;
  out[12] = (code >> 32) & 0xFF;
  out[13] = (code >> 40) & 0xFF;
  out[14] = (code >> 48) & 0xFF;
  out[15] = (code >> 56) & 0xFF;
  return rc;
}
#pragma pop

}
