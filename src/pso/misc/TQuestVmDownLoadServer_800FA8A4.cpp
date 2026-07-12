#include "types.h"

extern "C" {

int TQuestVmDownLoadServer__sub_800FA8A4(void* p);
int TQuestVmDownLoadServer__sub_800FA8C4(void* p);
int TQuestVmDownLoadServer__sub_800FA8E4(void* p);
int TAdEnterSerialAccessGC__sub_8032182C(void*);
int update_all__8TFogCtrlFv(void*);

int TQuestVmDownLoadServer__sub_800FA8A4(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int TQuestVmDownLoadServer__sub_800FA8C4(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int TQuestVmDownLoadServer__sub_800FA8E4(void* p) { return update_all__8TFogCtrlFv(p); }

}
