#ifndef PSO_TOBJITEMOKWINDOW_H
#define PSO_TOBJITEMOKWINDOW_H

#include "pso/TObject.h"
#include "types.h"

class TObjItemOKWindow : public TObject {
public:
    u8 _pad1C[0x40];
 void* m_5c;
 void* m_60;
 void* m_64;
public:
    TObjItemOKWindow(TObject *parent);
    virtual ~TObjItemOKWindow();
public:
    static void *create(void *arg0);
};

#endif
