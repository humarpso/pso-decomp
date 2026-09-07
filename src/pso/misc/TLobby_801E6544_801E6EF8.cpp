#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801E6F1C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E6F40_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
extern int TLobby__data_80512220[];
extern s16 TLobby__data_805D5EC8;
extern s16 TLobby__data_805D5ECA;
extern s16 TLobby__data_805D5ECC;
void TLobby__sub_801E6F1C(void);
M2C_UNK fn_801D9FA0(int, int, int, int, void *);
extern int TLobby__data_80512220[];
extern s32 TLobby__data_805D5580;
extern s16 TLobby__data_805D5EC8;
extern s16 TLobby__data_805D5ECA;
extern s16 TLobby__data_805D5ECC;
void TLobby__sub_801E6F40(void);
}

extern "C" {

void TLobby__sub_801E6F78(int a0);
void create_chat_sensor_capture__6TLobbyFv(void);
int create_instance__19TOChatSensorCaptureFPv(void*);

    extern int tl_01;
void create_chat_sensor_capture__6TLobbyFv(void) { create_instance__19TOChatSensorCaptureFPv((void*)(tl_01)); }

    extern int TLobby__data_80512220[];
    extern int TLobby__data_805D5EA4;

typedef char RecoveredGlobal_801E6F1C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6F1C_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E6F1C(void) {
    TLobby__data_805D5ECC = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E6F1C_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0);
    TLobby__data_805D5EC8 = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E6F1C_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4);
    TLobby__data_805D5ECA = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E6F1C_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 8);
}

typedef char RecoveredGlobal_801E6F40_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6F40_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E6F40(void) {
    fn_801D9FA0((int) (TLobby__data_805D5580), (int) ((*(u16 *)&TLobby__data_805D5ECC)), (int) ((*(u16 *)&TLobby__data_805D5EC8)), (int) ((*(u16 *)&TLobby__data_805D5ECA)), (void *) (&(*(RecoveredGlobal_801E6F40_TLobby__data_80512220 *)&TLobby__data_80512220).value));
}

void TLobby__sub_801E6F78(int a0) { int old = TLobby__data_805D5EA4; TLobby__data_805D5EA4 = old + 1; TLobby__data_80512220[old] = a0; }

extern int TLobby__data_80512220[];
extern int TLobby__data_805D5EA4;
void TLobby__sub_801E7038(int a0)
{
  unsigned long new_var3;
  int new_var;
  int *new_var2;
  new_var = TLobby__data_805D5EA4;
  new_var2 = &a0;
  new_var3 = *new_var2;
  TLobby__data_805D5EA4 = TLobby__data_805D5EA4 + 0x1;
  TLobby__data_80512220[new_var] = new_var3;
}

}
