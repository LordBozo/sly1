#pragma once
#include <so.h>

struct BRK {
    struct SO BRK;
    int cbrp;
    //struct BRP abrp[16];
    enum OID oidExplBreak;
    struct EXPL* pexplBreak;
    enum EXRK exrk;
    float rExplodeScale;
    float rvAbsorbWhack;
    struct LM lmBreakPosToV;
    float svBreak;
    float swBreak;
    enum OID oidHiPri;
    int grfbrk;
    int coidTouch;
    enum OID aoidTouch[4];
    int ccidTouch;
    enum CID acidTouch[4];
    int fBreakOnUpdate;
    int fRemain;
    int fBroken;
    int ichkBroken;
    int cHitsToBreak;
    int cHits;
    int fIgnoreBrkp;
    int ccoin;
    struct VECTOR dposCoin;
    struct SFX* psfxBreak;
};

struct BREAK
{
	BRK BREAK;
};

struct VTBRK {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::BRK;
    int grfcid = 3;
    int cb = 0x6E0;
    /*undefined1* pfnInitBrk;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneBrk;
    undefined1* pfnLoadBrkFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostBrkLoad;
    undefined1* pfnUpdateBrk;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderSoSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbBrkWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreSoIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustSoNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;
    undefined1* pfnBreakBrk;*/
};

extern VTBRK g_vtbrk;

struct VTBREAK {
    struct VT* pvtSuper = g_vtbrk.pvtSuper;
    enum CID cid = CID::BREAK;
    int grfcid = 19;
    int cb = 0x6E0;
    /*undefined1* pfnInitBreak;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneBrk;
    undefined1* pfnLoadBrkFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostBrkLoad;
    undefined1* pfnUpdateBrk;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderSoSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbBrkWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreSoIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustSoNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;
    undefined1* pfnBreakBrk;*/
};

extern VTBREAK g_vtbreak;

struct VTFRAGILE {
    struct VT* pvtSuper = g_vtbrk.pvtSuper;
    enum CID cid = CID::FRAGILE;
    int grfcid = 3;
    int cb = 0x6F0;
    /*undefined1* pfnInitFragile;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneBrk;
    undefined1* pfnLoadBrkFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostBrkLoad;
    undefined1* pfnUpdateBrk;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderSoSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbBrkWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreSoIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustFragileNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;
    undefined1* pfnBreakBrk;*/
};

extern VTFRAGILE g_vtfragile;

struct VTZAPBREAK {
    struct VT* pvtSuper = g_vtfragile.pvtSuper;
    enum CID cid = CID::ZAPBREAK;
    int grfcid = 3;
    int cb = 0x700;
    /*undefined1* pfnInitFragile;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneBrk;
    undefined1* pfnLoadBrkFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleAloMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostBrkLoad;
    undefined1* pfnUpdateZapbreak;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderSoSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbBrkWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreSoIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustZapbreakNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;
    undefined1* pfnBreakBrk;*/
};

extern VTZAPBREAK g_vtzapbreak;

struct VTBRKP {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::BRKP;
    int grfcid = 3;
    int cb = 0x5A0;
    /*undefined1* pfnInitSo;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnSoAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneSo;
    undefined1* pfnLoadSoFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleBrkpMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostAloLoad;
    undefined1* pfnUpdateBrkp;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetSoParams;
    undefined1* pfnUpdateLoLiveEdit;
    undefined1* pfnProjectSoTransform;
    undefined1* pfnPresetSoAccel;
    undefined1* pfnTranslateSoToPos;
    undefined1* pfnRotateSoToMat;
    undefined1* pfnMatchAloOtherObject;
    undefined1* pfnSetSoVelocityVec;
    undefined1* pfnSetSoAngularVelocityVec;
    undefined1* pfnPredictAloPosition;
    undefined1* pfnPredictAloRotation;
    undefined1* pfnRenderAloAll;
    undefined1* pfnRenderSoSelf;
    undefined1* pfnRenderAloGlobset;
    undefined1* pfnUpdateAloInfluences;
    undefined1* pfnAdjustAloPosition;
    undefined1* pfnAdjustAloRotation;
    undefined1* pfnUnadjustAloRotation;
    undefined1* pfnRecacheAloActList;
    undefined1* pfnUpdateAloConstraints;
    undefined1* pfnFAbsorbSoWkr;
    undefined1* pfnDisplaceSo;
    undefined1* pfnImpactSo;
    undefined1* pfnPivotSo;
    undefined1* pfnUpdateSoBounds;
    undefined1* pfnAddSoExternalAccelerations;
    undefined1* pfnCloneSoPhys;
    undefined1* pfnRenumberSo;
    undefined1* pfnPropagateSoForce;
    undefined1* pfnDistributeSoEffects;
    undefined1* pfnFIgnoreBrkpIntersection;
    undefined1* pfnAddSoXps;
    undefined1* pfnAddSoCustomXps;
    undefined1* pfnAdjustSoXpLocal;
    undefined1* pfnAdjustSoNewXp;
    undefined1* pfnAdjustSoXpVelocity;
    undefined1* pfnAdjustSoDz;
    undefined1* pfnAdjustSoXps;
    undefined1* pfnUpdateSoInternalXps;
    undefined1* pfnNotifySoImpact;
    undefined1* pfnUpdateSoPivots;
    undefined1* pfnUpdateSoImpacts;
    undefined1* pfnUpdateSoPosWorldPrev;
    undefined1* pfnGetSoCpdefi;
    undefined1* pfnAddSoWaterAcceleration;
    undefined1* pfnFInflictSoZap;*/
};

extern VTBRKP g_vtbrkp;