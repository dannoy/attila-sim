/**************************************************************************
 *
 * Copyright (c) 2002 - 2011 by Computer Architecture Department,
 * Universitat Politecnica de Catalunya.
 * All rights reserved.
 *
 * The contents of this file may not be disclosed to third parties,
 * copied or duplicated in any form, in whole or in part, without the
 * prior permission of the authors, Computer Architecture Department
 * and Universitat Politecnica de Catalunya.
 *
 */

#ifndef BATCHESASFRAMES_H
    #define BATCHESASFRAMES_H

#include "GLITool.h"

class DoSwap : public EventHandler
{
    void action(GLInstrument& gli);
};

class BatchesAsFrames : public GLITool
{
private:

    DoSwap* doSwap;
    GLInstrument* gliPtr;

public:

    bool init(GLInstrument& gli);

    ~BatchesAsFrames();
};

#endif // BATCHESASFRAMES_H
