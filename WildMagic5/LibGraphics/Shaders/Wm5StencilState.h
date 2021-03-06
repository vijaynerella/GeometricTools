// Geometric Tools, LLC
// Copyright (c) 1998-2012
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.1 (2010/10/01)

#ifndef WM5STENCILSTATE_H
#define WM5STENCILSTATE_H

#include "Wm5GraphicsLIB.h"
#include "Wm5Object.h"

namespace Wm5
{

class WM5_GRAPHICS_ITEM StencilState : public Object
{
    WM5_DECLARE_RTTI;
    WM5_DECLARE_NAMES;
    WM5_DECLARE_STREAM(StencilState);

public:
    // Construction and destruction.
    StencilState ();
    virtual ~StencilState ();

    enum WM5_GRAPHICS_ITEM CompareMode
    {
        CM_NEVER,
        CM_LESS,
        CM_EQUAL,
        CM_LEQUAL,
        CM_GREATER,
        CM_NOTEQUAL,
        CM_GEQUAL,
        CM_ALWAYS,
        CM_QUANTITY
    };

    enum WM5_GRAPHICS_ITEM OperationType
    {
        OT_KEEP,
        OT_ZERO,
        OT_REPLACE,
        OT_INCREMENT,
        OT_DECREMENT,
        OT_INVERT,
        OT_QUANTITY
    };

    bool Enabled;            // default: false
    CompareMode Compare;     // default: CM_NEVER
    unsigned int Reference;  // default: 0
    unsigned int Mask;       // default: UINT_MAX (0xFFFFFFFF)
    unsigned int WriteMask;  // default: UINT_MAX (0xFFFFFFFF)
    OperationType OnFail;    // default: OT_KEEP
    OperationType OnZFail;   // default: OT_KEEP
    OperationType OnZPass;   // default: OT_KEEP
};

WM5_REGISTER_STREAM(StencilState);
typedef Pointer0<StencilState> StencilStatePtr;

}

#endif
