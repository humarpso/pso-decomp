#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_instance__19TOChatSensorCaptureFPv(void *arg0);
void *TOChatSensorCapture__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *TOChatSensorCapture__instance;

void create_instance__19TOChatSensorCaptureFPv(void *arg0) {
    void *o;
    if (TOChatSensorCapture__instance == NULL) {
        o = __nw__7TObjectFUl(0x3C);
        if (o != NULL) {
            TOChatSensorCapture__ct(o, arg0);
        }
    }
}

}
