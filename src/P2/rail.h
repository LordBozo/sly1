#pragma once
#include <shape.h>
#include <iostream>

struct VTRAIL {
    struct VT* pvtSuper = g_vtshape.pvtSuper;
    enum CID cid = CID::RAIL;
    int grfcid = 0;
    int cb = 0x68;
    /*undefined1* pfnInitShape;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddLoHierarchy;
    undefined1* pfnRemoveLoHierarchy;
    undefined1* pfnOnRailAdd;
    undefined1* pfnOnRailRemove;
    undefined1* pfnCloneLoHierarchy;
    undefined1* pfnCloneRail;
    undefined1* pfnLoadShapeFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleLoMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindLo;
    undefined1* pfnPostLoLoad;
    undefined1* pfnUpdateLo;
    undefined1* pfnUpdateLoXfWorld;
    undefined1* pfnUpdateLoXfWorldHierarchy;
    undefined1* pfnFreezeLo;
    undefined1* pfnSetShapeParent;
    undefined1* pfnApplyLoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetLoParams;
    undefined1* pfnUpdateLoLiveEdit;*/
};

extern VTRAIL g_vtrail;