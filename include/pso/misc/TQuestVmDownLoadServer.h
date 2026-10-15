#ifndef PSO_MISC_TQUESTVMDOWNLOADSERVER_H
#define PSO_MISC_TQUESTVMDOWNLOADSERVER_H

#include "pso/TObject.h"
#include "pso/ui/TMessageWindowController.h"
#include "types.h"

class TQuestVmDownLoadServer : public TObject, public TMessageWindowController {
public:
    s32 m_22c;
    s32 m_230;
    s32 m_234;
    s32 m_238;
    u8 _pad23C[0x20];
    s32 m_25c;
    void *m_260;
    u8 _pad264[0xC];
    char m_270[0xD];
    char m_27d[0xD];
    void *m_28c;
    void *m_290;
    s32 m_294;
    s32 m_298;
    TObject *m_29c;
    s32 state;

    TQuestVmDownLoadServer(TObject *parent);
    virtual ~TQuestVmDownLoadServer();
    virtual void run_task();
};
typedef char TQuestVmDownLoadServer_size_check[sizeof(TQuestVmDownLoadServer) == 0x2A4 ? 1 : -1];

#endif
