#include "types.h"
struct Entry_800FD944 { u8 pad[0x24]; s32 size; };

extern "C" {
Entry_800FD944 *find_gsl_entry(void *name, s32 flag);
s32 get_file_size__6TLobbyFv(void *name);
s32 get_resource_file_size__6TLobbyFPv(void *name);
s32 is_split_screen();
s32 check_v2_mode__9TObjEneDDFv();
void TItemDrop__sub_800FDE7C(char *);
s32 get_global_state__14TOKeyMachine01Fv();
extern char lbl_8043DB04[];
extern char lbl_8043DB14[];
extern char lbl_8043DB28[];
extern char lbl_8043DB3C[];
extern char lbl_8043DB4C[];
extern char lbl_8043DB5C[];
extern char lbl_8043DB6C[];
extern char lbl_8043DB80[];
extern char lbl_8043DB94[];
extern char lbl_8043DBA8[];
extern char lbl_8043DBBC[];
extern char lbl_8043DBD0[];
extern char lbl_8043DBE4[];
extern char lbl_8043DBF8[];
extern char lbl_8043DC08[];
extern char lbl_8043DC18[];
extern char lbl_8043DC28[];
extern char lbl_8043DC3C[];
extern char lbl_8043DC50[];
extern char lbl_8043DC60[];
extern char lbl_8043DC70[];
extern char lbl_8043DC80[];
extern char lbl_8043DC94[];
extern char lbl_8043DCA8[];
extern char lbl_8043DCBC[];
extern char lbl_8043DCD0[];
extern char lbl_8043DCE4[];
extern char lbl_8043DCF8[];
extern char lbl_8043DD0C[];
extern char lbl_8043DD20[];
extern char lbl_8043DD34[];
extern char lbl_8043DD48[];
extern char lbl_8043DD5C[];
extern char lbl_8043DD70[];
extern char lbl_8043DD84[];
extern char lbl_8043DD98[];
extern char lbl_8043DDAC[];
extern char lbl_8043DDC0[];
extern char lbl_8043DDD4[];
extern char lbl_8043DDE8[];
extern char lbl_8043DE00[];
extern char lbl_8043DE18[];
extern char lbl_8043DE30[];
extern char lbl_8043DE48[];
extern char lbl_8043DE60[];
extern char lbl_8043DE78[];
extern char lbl_805DAA38[];
void load_area_gsl(void);
}

extern "C" {

s32 get_resource_file_size__6TLobbyFPv(void *name) {
    Entry_800FD944 *e = find_gsl_entry(name, 0);
    if (e != NULL) {
        return e->size;
    }
    return get_file_size__6TLobbyFv(name);
}
char *lbl_8049CA88[23] = {
    lbl_8043DB04, lbl_8043DB14, lbl_8043DB28, lbl_8043DB3C, lbl_8043DB4C, lbl_8043DB5C, lbl_8043DB6C, lbl_8043DB80, lbl_8043DB94, lbl_8043DBA8, lbl_8043DBBC, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DBD0, lbl_8043DBE4, lbl_8043DBF8, lbl_8043DC08, lbl_8043DC08, lbl_8043DC18, lbl_8043DC18
};
char *lbl_8049CAE4[23] = {
    lbl_8043DB04, lbl_8043DC28, lbl_8043DC3C, lbl_8043DC50, lbl_8043DC60, lbl_8043DC70, lbl_8043DC80, lbl_8043DC94, lbl_8043DCA8, lbl_8043DCBC, lbl_8043DCD0, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DCE4, lbl_8043DCF8, lbl_8043DBF8, lbl_8043DD0C, lbl_8043DD0C, lbl_8043DD20, lbl_8043DD20
};
char *lbl_8049CB40[13] = {
    lbl_8043DD34, lbl_8043DD48, lbl_8043DD5C, lbl_8043DD70, lbl_8043DD84, lbl_8043DD98, lbl_8043DDAC, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DDC0, lbl_8043DDD4
};
char *lbl_8049CB74[13] = {
    lbl_8043DDE8, lbl_8043DE00, lbl_8043DE18, lbl_8043DE30, lbl_8043DE48, lbl_8043DE60, lbl_8043DE78, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DDC0, lbl_8043DDD4
};
void load_area_gsl(void) {
    s32 n = get_global_state__14TOKeyMachine01Fv();
    if (n < 23) {
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            TItemDrop__sub_800FDE7C(lbl_8049CAE4[n]);
        } else {
            TItemDrop__sub_800FDE7C(lbl_8049CA88[n]);
        }
    } else {
        if (is_split_screen() != 0) {
            TItemDrop__sub_800FDE7C(lbl_8049CB74[n - 23]);
        } else {
            TItemDrop__sub_800FDE7C(lbl_8049CB40[n - 23]);
        }
    }
}

}
