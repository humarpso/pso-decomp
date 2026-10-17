#include "types.h"
#include "pso/TOChatSensorFolder.h"

extern "C" {

void *TOChatSensorFolder__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__18TOChatSensorFolder[];
extern void *chat_sensor_folder_name_ptr;
extern void * TOChatSensorFolder__instance;

void *TOChatSensorFolder__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TOChatSensorFolder;
    *(void * *)&((TOChatSensorFolder *)arg0)->m_name = chat_sensor_folder_name_ptr;
    TOChatSensorFolder__instance = arg0;
    return arg0;
}

}
