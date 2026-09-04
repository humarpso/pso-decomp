#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__24TShopEquipmentSellWindowFPv(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);

void close__24TShopEquipmentSellWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38C) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x38C));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801047B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_item_data_value__24TShopEquipmentSellWindowFUi(u32 arg0);
s32 TItemData__sub_8010DF9C(M2C_UNK *);
M2C_UNK copy_to_item_data__5TItemFPvPv(u32, M2C_UNK *);

s32 get_item_data_value__24TShopEquipmentSellWindowFUi(u32 arg0) {
    M2C_UNK sp8[4];

    if (arg0 != 0U) {
        copy_to_item_data__5TItemFPvPv(arg0, sp8);
        return TItemData__sub_8010DF9C(sp8);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801047F0
#include "types.h"

extern "C" {

s32 get_item_price_if_valid__24TShopEquipmentSellWindowFUi(u32 arg0);
s32 TItemData__sub_8010DF9C();

s32 get_item_price_if_valid__24TShopEquipmentSellWindowFUi(u32 arg0) {
    if (arg0 != 0U) {
        return TItemData__sub_8010DF9C();
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802115F4
#include "types.h"

extern "C" {

s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void TShopWindowBase__sub_802115F0(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

int is_confirmed__24TShopEquipmentSellWindowFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }
s32 get_result__24TShopEquipmentSellWindowFPv(void* p) { return *(s32*)((char*)p + 0x6c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021C870
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021C870 { char pad[0x18]; };
struct VObj_8021C870 : Base_8021C870 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021C8A8 { char pad[0x18]; };
struct VObj_8021C8A8 : Base_8021C8A8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
struct Base_8021C8E0 { char pad[0x18]; };
struct VObj_8021C8E0 : Base_8021C8E0 {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4(int, int);
    virtual int m5();
    virtual int m6();
    virtual int m7();
    virtual int m8();
};

extern "C" {

void update__24TShopEquipmentSellWindowFPv(void *arg0);
void TShopEquipmentSellWindow__vt4(void *arg0);
void TShopEquipmentSellWindow__vt5(void *arg0);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
int set_field_20__12TQuestListVMFPvi(void *, int);

void TShopEquipmentSellWindow__vt5(void *arg0) {
    struct VObj_8021C870 *o = (struct VObj_8021C870 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentSellWindow__vt4(void *arg0) {
    struct VObj_8021C8A8 *o = (struct VObj_8021C8A8 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m4();
    }
}

void update__24TShopEquipmentSellWindowFPv(void *arg0) {
    VObj_8021C8E0 *o = (VObj_8021C8E0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xc, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021CAB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK TWindow__close(u32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
s32 TLobby__sub_80222CFC(M2C_UNK);
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, M2C_UNK, u16);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

s32 obj_getField1c(s32);

void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (is_confirmed__18TWindowInputNumberFPv(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            temp_r31 = (u16) obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x390) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x2B), 2, temp_r31);
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x390), TLobby__sub_80222CFC(6), 6, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x390), TLobby__sub_80222CFC(7), 6, 1);
            TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x390));
            TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0x390));
            set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x390));
            temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x390), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = get_result__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x394));
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x394));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 2);
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (is_confirmed__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x394));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021D38C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);

extern M2C_UNK __vt__24TShopEquipmentSellWindow[];

void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentSellWindow;
        if (M2C_FIELD(arg0, void **, 0x38C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38C)); M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x390) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x390)); M2C_FIELD(arg0, M2C_UNK *, 0x390) = 0; }
        if (M2C_FIELD(arg0, void **, 0x394) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x394)); M2C_FIELD(arg0, M2C_UNK *, 0x394) = 0; }
        if (M2C_FIELD(arg0, void **, 0x39C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x39C)); M2C_FIELD(arg0, M2C_UNK *, 0x39C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x398) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x398)); M2C_FIELD(arg0, M2C_UNK *, 0x398) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3A0) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3A0)); M2C_FIELD(arg0, M2C_UNK *, 0x3A0) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021D478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void __ct__15TShopWindowBaseFv(void *);

extern M2C_UNK __vt__24TShopEquipmentSellWindow[];
extern void *lbl_805D36B0;
void memset(void *, int, int);

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentSellWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36B0;
    M2C_FIELD(arg0, u32 *, 0x370) = 0;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, void **, 0x378) = arg4;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x37C) = 1;
    M2C_FIELD(arg0, u32 *, 0x380) = 0;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, void **, 0x388) = arg2;
    M2C_FIELD(arg0, u32 *, 0x38C) = 0;
    M2C_FIELD(arg0, u32 *, 0x390) = 0;
    M2C_FIELD(arg0, u32 *, 0x394) = 0;
    M2C_FIELD(arg0, u32 *, 0x39C) = 0;
    M2C_FIELD(arg0, u32 *, 0x398) = 0;
    M2C_FIELD(arg0, u32 *, 0x3A0) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x3A4) = 0;
    M2C_FIELD(arg0, u32 *, 0x3A8) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80267518
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_item__24TShopEquipmentSellWindowFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK update_from_player__20TWindowSubStatusDispFPvPvii(s32, s32, s32, s32);

void add_item__24TShopEquipmentSellWindowFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    if (arg1 != 0) {
        temp_r4 = (s16) M2C_FIELD(arg0, s16 *, 0x72);
        if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
            update_from_player__20TWindowSubStatusDispFPvPvii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
            M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026CE78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8026CE78 { char pad[0x18]; };
struct VObj_8026CE78 : Base_8026CE78 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual int m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual void m114();
    virtual void m115();
    virtual void m116();
    virtual void m117();
    virtual void m118();
    virtual void m119();
    virtual void m120();
    virtual void m121();
    virtual void m122();
    virtual void m123();
    virtual void m124();
    virtual void m125();
    virtual void m126();
    virtual void m127();
    virtual void m128();
    virtual void m129();
    virtual void m130();
    virtual void m131();
    virtual void m132();
    virtual void m133();
    virtual void m134();
    virtual void m135();
    virtual void m136();
    virtual void m137();
    virtual void m138();
    virtual void m139();
    virtual void m140();
    virtual void m141();
    virtual void m142();
    virtual void m143();
    virtual void m144();
    virtual void m145();
    virtual void m146();
    virtual void m147();
    virtual void m148();
    virtual void m149();
    virtual void m150();
    virtual void m151();
    virtual void m152();
    virtual void m153();
    virtual void m154();
    virtual void m155();
    virtual void m156();
    virtual void m157();
    virtual void m158();
    virtual void m159();
    virtual void m160();
    virtual void m161();
    virtual void m162();
    virtual void m163();
    virtual void m164();
    virtual void m165();
    virtual void m166();
    virtual void m167();
    virtual void m168();
    virtual void m169();
    virtual void m170();
    virtual void m171();
    virtual void m172();
    virtual void m173();
    virtual void m174();
    virtual void m175();
    virtual void m176();
    virtual void m177();
    virtual void m178();
    virtual void m179();
    virtual void m180();
    virtual void m181();
    virtual void m182();
    virtual void m183();
    virtual void m184();
    virtual void m185();
    virtual void m186();
    virtual void m187();
    virtual void m188();
    virtual void m189();
    virtual void m190();
    virtual void m191();
    virtual void m192();
    virtual void m193();
    virtual void m194();
    virtual void m195();
    virtual void m196();
    virtual void m197();
    virtual void m198();
    virtual void m199();
    virtual void m200();
    virtual void m201();
    virtual void m202();
    virtual void m203();
    virtual void m204();
    virtual void m205();
    virtual void m206();
    virtual void m207();
    virtual void m208();
    virtual void m209();
    virtual void m210();
    virtual void m211();
    virtual void m212();
    virtual void m213();
    virtual void m214();
    virtual void m215();
    virtual void m216();
    virtual void m217();
    virtual void m218();
    virtual void m219();
    virtual void m220();
    virtual void m221();
    virtual void m222();
    virtual void m223();
    virtual void m224();
    virtual void m225();
    virtual void m226();
    virtual void m227();
    virtual void m228();
    virtual void m229();
    virtual void m230();
    virtual void m231();
    virtual void m232();
    virtual void m233();
    virtual void m234();
    virtual void m235();
    virtual void m236();
    virtual void m237();
    virtual void m238();
    virtual void m239();
    virtual void m240();
    virtual void m241();
    virtual void m242();
    virtual void m243();
    virtual void m244();
    virtual void m245();
    virtual void m246();
    virtual void m247();
    virtual void m248();
    virtual void m249();
    virtual void m250();
    virtual void m251();
    virtual void m252();
    virtual void m253();
    virtual void m254();
    virtual void m255();
    virtual void m256();
    virtual void m257();
    virtual void m258();
    virtual void m259();
    virtual void m260();
    virtual void m261();
    virtual void m262();
    virtual void m263();
    virtual void m264();
    virtual void m265();
    virtual void m266();
    virtual void m267();
    virtual void m268();
    virtual void m269();
    virtual void m270();
    virtual void m271();
    virtual void m272();
    virtual void m273();
    virtual void m274();
    virtual void m275();
    virtual void m276();
    virtual void m277();
    virtual void m278();
    virtual void m279();
    virtual void m280();
    virtual void m281();
    virtual void m282();
    virtual void m283();
    virtual void m284();
    virtual void m285();
    virtual void m286();
    virtual void m287();
    virtual void m288();
    virtual void m289();
    virtual void m290();
    virtual void m291();
    virtual void m292();
    virtual void m293();
    virtual void m294();
    virtual void m295();
    virtual void m296();
    virtual void m297();
    virtual void m298();
    virtual void m299();
    virtual void m300();
    virtual void m301();
    virtual void m302();
    virtual void m303();
    virtual void m304();
    virtual void m305();
    virtual void m306();
    virtual void m307();
    virtual void m308();
    virtual void m309();
    virtual void m310();
    virtual void m311();
    virtual void m312();
    virtual void m313();
    virtual void m314();
    virtual void m315();
    virtual void m316();
    virtual void m317();
    virtual void m318();
    virtual void m319();
    virtual void m320();
    virtual void m321();
    virtual void m322();
    virtual void m323();
    virtual void m324();
    virtual void m325();
    virtual void m326();
    virtual void m327();
    virtual void m328();
    virtual void m329();
    virtual void m330();
    virtual void m331();
    virtual void m332();
    virtual void m333();
    virtual void m334();
    virtual void m335();
    virtual void m336();
    virtual void m337();
    virtual void m338();
    virtual void m339();
    virtual void m340();
    virtual void m341();
    virtual void m342();
    virtual void m343();
    virtual void m344();
    virtual void m345();
    virtual void m346();
    virtual void m347();
    virtual void m348();
    virtual void m349();
    virtual void m350();
    virtual void m351();
    virtual void m352();
    virtual void m353();
    virtual void m354();
    virtual void m355();
};

extern "C" {

void set_entry_count__24TShopEquipmentSellWindowFPvPv(void *arg1, void *arg2);
void *get_array_entry__20TWindowSubStatusDispFPvi(M2C_UNK, M2C_UNK);

void set_entry_count__24TShopEquipmentSellWindowFPvPv(void *arg1, void *arg2) {
    s32 temp_r3;
    void *temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((M2C_UNK)arg1, 1);
    if (arg2 == NULL) {
        M2C_FIELD(temp_r31, s32 *, 0x20) = 0;
        return;
    }
    temp_r3 = ((VObj_8026CE78 *)arg2)->m34();
    if (temp_r3 <= 0) {
        M2C_FIELD(temp_r31, s32 *, 0x20) = 1;
        return;
    }
    M2C_FIELD(temp_r31, s32 *, 0x20) = temp_r3;
}

}
#endif
#endif
