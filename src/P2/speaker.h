#pragma once
#include <alo.h>
#include <game.h>
#include <joy.h>
#include <mat.h>
#include <vec.h>
#include <font.h>
#include <util.h>

typedef int GRFPVA;

struct DP
{
    uint32_t grfdp;
    DPK dpk;
    //SPEAKER* pspeakerLeft;
    //SPEAKER* pspeakerRight;
    struct ASEGA* pasegaLipsync;
    float tPauseMin;
};

struct VTSPEAKER {
    struct VT* pvtSuper = g_vtalo.pvtSuper;
    enum CID cid = CID::SPEAKER;
    int grfcid = 1;
    int cb = 0x340;
    /*undefined1* pfnInitSpeaker;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnAloAdd;
    undefined1* pfnOnAloRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneAlo;
    undefined1* pfnLoadAloFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendLoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostSpeakerLoad;
    undefined1* pfnUpdateAlo;
    undefined1* pfnUpdateAloXfWorld;
    undefined1* pfnUpdateAloXfWorldHierarchy;
    undefined1* pfnFreezeAlo;
    undefined1* pfnSetAloParent;
    undefined1* pfnApplyAloProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSpeakerParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectAloTransform;
    undefined1* pfnPresetAloAccel;
    undefined1* pfnTranslateAloToPos;
    undefined1* pfnRotateAloToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetAloVelocityVec;
    undefined1* pfnSetAloAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderAloSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbAloWkr;*/
};

extern VTSPEAKER g_vtspeaker;