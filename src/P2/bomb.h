#pragma once
#include <so.h>
#include <iostream>

struct VTBOMB {
    struct VT* pvtSuper = g_vtso.pvtSuper;
    enum CID cid = CID::BOMB;
    int grfcid = 35;
    int cb = 0x670;
    /*undefined1* pfnInitBomb;
    undefined1* pfnSetLoDefaults;
    undefined1* pfnAddLo;
    undefined1* pfnRemoveLo;
    undefined1* pfnAddAloHierarchy;
    undefined1* pfnRemoveAloHierarchy;
    undefined1* pfnOnBombAdd;
    undefined1* pfnOnSoRemove;
    undefined1* pfnCloneAloHierarchy;
    undefined1* pfnCloneBomb;
    undefined1* pfnLoadBombFromBrx;
    undefined1* pfnAddLoRecursive;
    undefined1* pfnRemoveLoRecursive;
    undefined1* pfnHandleBombMessage;
    undefined1* pfnSendSoMessage;
    undefined1* pfnBindAlo;
    undefined1* pfnPostBombLoad;
    undefined1* pfnUpdateBomb;
    undefined1* pfnUpdateSoXfWorld;
    undefined1* pfnUpdateSoXfWorldHierarchy;
    undefined1* pfnFreezeSo;
    undefined1* pfnSetSoParent;
    undefined1* pfnApplySoProxy;
    undefined1* pfnSubscribeLoObject;
    undefined1* pfnUnsubscribeLoObject;
    undefined1* pfnSubscribeLoStruct;
    undefined1* pfnUnsubscribeLoStruct;
    undefined1* pfnGetBombParams;
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
    undefined1* pfnFAbsorbBombWkr;
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
    undefined1* pfnFInflictSoZap;*/
};

extern VTBOMB g_vtbomb;