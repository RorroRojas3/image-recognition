/*
 * PIDcontrol.h
 *
 * Academic Student License -- for use by students to meet course
 * requirements and perform academic research at degree granting
 * institutions only.  Not for government, commercial, or other
 * organizational use.
 *
 * Code generation for model "PIDcontrol".
 *
 * Model version              : 1.109
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Apr 11 17:29:05 2018
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PIDcontrol_h_
#define RTW_HEADER_PIDcontrol_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef PIDcontrol_COMMON_INCLUDES_
# define PIDcontrol_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* PIDcontrol_COMMON_INCLUDES_ */

#include "PIDcontrol_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_PIDcontrol             RT_MODEL_PIDcontrol_T

/* Definition for use in the target main file */
#define PIDcontrol_rtModel             RT_MODEL_PIDcontrol_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block states (auto storage) for system '<Root>/If1 Subsystem' */
typedef struct {
  int8_T If1Subsystem_SubsysRanBC;     /* '<Root>/If1 Subsystem' */
} DW_If1Subsystem_PIDcontrol_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Setpoint;                     /* '<Root>/gain' */
  real_T Channel0ofEncoderInputs;      /* '<S6>/Channel 0 of  Encoder Inputs ' */
  real_T angular_positionrelative_countC;/* '<S6>/angular_position =  [relative_count//COUNTS_PER_REV] *360 degrees' */
  real_T ErrorSigal;                   /* '<Root>/Sum1' */
  real_T DerivativePID;                /* '<Root>/DerivativePID' */
  real_T AbsDError;                    /* '<Root>/AbsDError' */
  real_T AbsError1;                    /* '<Root>/AbsError1' */
  real_T AbsError2;                    /* '<Root>/AbsError2' */
  real_T Merge1;                       /* '<Root>/Merge1' */
  real_T KpSmall;                      /* '<Root>/KpSmall' */
  real_T KiSmall;                      /* '<Root>/KiSmall' */
  real_T Kp;                           /* '<Root>/Kp' */
  real_T Kd;                           /* '<Root>/Kd' */
  real_T IntegratorPID;                /* '<Root>/IntegratorPID' */
  real_T Ki;                           /* '<Root>/Ki' */
  real_T Sum4;                         /* '<Root>/Sum4' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T Gain[3];                      /* '<Root>/Gain' */
  real_T Merge2;                       /* '<Root>/Merge2' */
  real_T Saturation;                   /* '<S6>/Saturation' */
} B_PIDcontrol_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T TimeStampA;                   /* '<Root>/DerivativePID' */
  real_T LastUAtTimeA;                 /* '<Root>/DerivativePID' */
  real_T TimeStampB;                   /* '<Root>/DerivativePID' */
  real_T LastUAtTimeB;                 /* '<Root>/DerivativePID' */
  real_T Channel0Controlsignaltomotorthr[16];/* '<S6>/Channel 0 -Control signal to  motor through amplifier ' */
  int_T Channel0ofEncoderInputs_IWORK[3];/* '<S6>/Channel 0 of  Encoder Inputs ' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S1>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_i;                 /* '<S7>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_it;                /* '<S8>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_n;                 /* '<S9>/S-Function' */

  int_T Channel0Controlsignaltomotort_l;/* '<S6>/Channel 0 -Control signal to  motor through amplifier ' */
  int8_T If1_ActiveSubsystem;          /* '<Root>/If1' */
  int8_T If2_ActiveSubsystem;          /* '<Root>/If2' */
  DW_If1Subsystem_PIDcontrol_T Else2Subsystem;/* '<Root>/Else2 Subsystem' */
  DW_If1Subsystem_PIDcontrol_T If2Subsystem;/* '<Root>/If2 Subsystem' */
  DW_If1Subsystem_PIDcontrol_T Else1Subsystem;/* '<Root>/Else1 Subsystem' */
  DW_If1Subsystem_PIDcontrol_T If1Subsystem;/* '<Root>/If1 Subsystem' */
} DW_PIDcontrol_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T IntegratorPID_CSTATE;         /* '<Root>/IntegratorPID' */
} X_PIDcontrol_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T IntegratorPID_CSTATE;         /* '<Root>/IntegratorPID' */
} XDot_PIDcontrol_T;

/* State disabled  */
typedef struct {
  boolean_T IntegratorPID_CSTATE;      /* '<Root>/IntegratorPID' */
} XDis_PIDcontrol_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T setpoint_Out;                 /* '<Root>/setpoint_Out' */
  real_T errorSignal_Out;              /* '<Root>/errorSignal_Out' */
  real_T motorPos_Out;                 /* '<Root>/motorPos_Out' */
} ExtY_PIDcontrol_T;

/* Backward compatible GRT Identifiers */
#define rtB                            PIDcontrol_B
#define BlockIO                        B_PIDcontrol_T
#define rtX                            PIDcontrol_X
#define ContinuousStates               X_PIDcontrol_T
#define rtXdot                         PIDcontrol_XDot
#define StateDerivatives               XDot_PIDcontrol_T
#define tXdis                          PIDcontrol_XDis
#define StateDisabled                  XDis_PIDcontrol_T
#define rtY                            PIDcontrol_Y
#define ExternalOutputs                ExtY_PIDcontrol_T
#define rtP                            PIDcontrol_P
#define Parameters                     P_PIDcontrol_T
#define rtDWork                        PIDcontrol_DW
#define D_Work                         DW_PIDcontrol_T

/* Parameters (auto storage) */
struct P_PIDcontrol_T_ {
  real_T Degree_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Degree'
                                        */
  real_T gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<Root>/gain'
                                        */
  real_T Channel0ofEncoderInputs_P1_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P1_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P1;   /* Expression: boardtype
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P2_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P2_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P2;   /* Expression: channel
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P3_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P3_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P3;   /* Expression: initialCount
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P4_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P4_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P4;   /* Expression: prescale
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P5_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P5_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P5;   /* Expression: quadrature
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P6_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P6_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P6;   /* Expression: mode
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P7_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P7_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P7;   /* Expression: synchronousIndex
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P8_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P8_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P8;   /* Expression: indexPolarity
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P9_Size[2];/* Computed Parameter: Channel0ofEncoderInputs_P9_Size
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P9;   /* Expression: preserveCounts
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P10_Siz[2];/* Computed Parameter: Channel0ofEncoderInputs_P10_Siz
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P10;  /* Expression: sampleTime
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P11_Siz[2];/* Computed Parameter: Channel0ofEncoderInputs_P11_Siz
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P11;  /* Expression: pciBus
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T Channel0ofEncoderInputs_P12_Siz[2];/* Computed Parameter: Channel0ofEncoderInputs_P12_Siz
                                             * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                             */
  real_T Channel0ofEncoderInputs_P12;  /* Expression: pciSlot
                                        * Referenced by: '<S6>/Channel 0 of  Encoder Inputs '
                                        */
  real_T angular_positionrelative_countC;/* Expression: -360/1600
                                          * Referenced by: '<S6>/angular_position =  [relative_count//COUNTS_PER_REV] *360 degrees'
                                          */
  real_T DegreeErrorThresh_Value;      /* Expression: 0.75
                                        * Referenced by: '<Root>/DegreeErrorThresh'
                                        */
  real_T SmallDegree1_Value;           /* Expression: 25
                                        * Referenced by: '<Root>/SmallDegree1'
                                        */
  real_T SmallDegree2_Value;           /* Expression: 1
                                        * Referenced by: '<Root>/SmallDegree2'
                                        */
  real_T NullConstant1_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/NullConstant1'
                                        */
  real_T RateErrorThresh_Value;        /* Expression: 0.25
                                        * Referenced by: '<Root>/RateErrorThresh'
                                        */
  real_T KpSmall_Gain;                 /* Expression: 0.1
                                        * Referenced by: '<Root>/KpSmall'
                                        */
  real_T KiSmall_Gain;                 /* Expression: 0.125
                                        * Referenced by: '<Root>/KiSmall'
                                        */
  real_T Kp_Gain;                      /* Expression: 0.05
                                        * Referenced by: '<Root>/Kp'
                                        */
  real_T Kd_Gain;                      /* Expression: 0.0125
                                        * Referenced by: '<Root>/Kd'
                                        */
  real_T IntegratorPID_IC;             /* Expression: 0
                                        * Referenced by: '<Root>/IntegratorPID'
                                        */
  real_T Ki_Gain;                      /* Expression: 0.025
                                        * Referenced by: '<Root>/Ki'
                                        */
  real_T NullConstant2_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/NullConstant2'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 5
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -5
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Channel0Controlsignaltomotorthr[2];/* Computed Parameter: Channel0Controlsignaltomotorthr
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotort_m;/* Expression: boardtype
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotort_h[2];/* Computed Parameter: Channel0Controlsignaltomotort_h
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotort_k;/* Expression: channel
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotort_e[2];/* Computed Parameter: Channel0Controlsignaltomotort_e
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotort_c;/* Expression: range
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotor_e1[2];/* Computed Parameter: Channel0Controlsignaltomotor_e1
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotort_d;/* Expression: simul
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotor_cz[2];/* Computed Parameter: Channel0Controlsignaltomotor_cz
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotort_n;/* Expression: reset
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotort_l[2];/* Computed Parameter: Channel0Controlsignaltomotort_l
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotort_g;/* Expression: initValue
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotort_b[2];/* Computed Parameter: Channel0Controlsignaltomotort_b
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotort_f;/* Expression: sampleTime
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotort_a[2];/* Computed Parameter: Channel0Controlsignaltomotort_a
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotor_gv;/* Expression: pciBus
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
  real_T Channel0Controlsignaltomotor_lv[2];/* Computed Parameter: Channel0Controlsignaltomotor_lv
                                             * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                             */
  real_T Channel0Controlsignaltomotor_gp;/* Expression: pciSlot
                                          * Referenced by: '<S6>/Channel 0 -Control signal to  motor through amplifier '
                                          */
};

/* Real-time Model Data Structure */
struct tag_RTM_PIDcontrol_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[2];
    SimStruct *childSFunctionPtrs[2];
    struct _ssBlkInfo2 blkInfo2[2];
    struct _ssSFcnModelMethods2 methods2[2];
    struct _ssSFcnModelMethods3 methods3[2];
    struct _ssSFcnModelMethods4 methods4[2];
    struct _ssStatesInfo2 statesInfo2[2];
    ssPeriodicStatesInfo periodicStatesInfo[2];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[12];
      mxArray *params[12];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[9];
      mxArray *params[9];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn1;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeY[1];
  real_T odeF[3][1];
  ODE3_IntgData intgData;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_PIDcontrol_T PIDcontrol_P;

/* Block signals (auto storage) */
extern B_PIDcontrol_T PIDcontrol_B;

/* Continuous states (auto storage) */
extern X_PIDcontrol_T PIDcontrol_X;

/* Block states (auto storage) */
extern DW_PIDcontrol_T PIDcontrol_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_PIDcontrol_T PIDcontrol_Y;

/* Model entry point functions */
extern void PIDcontrol_initialize(void);
extern void PIDcontrol_output(void);
extern void PIDcontrol_update(void);
extern void PIDcontrol_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern PIDcontrol_rtModel *PIDcontrol(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  PIDcontrol_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_PIDcontrol_T *const PIDcontrol_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PIDcontrol'
 * '<S1>'   : 'PIDcontrol/Data Display'
 * '<S2>'   : 'PIDcontrol/Else1 Subsystem'
 * '<S3>'   : 'PIDcontrol/Else2 Subsystem'
 * '<S4>'   : 'PIDcontrol/If1 Subsystem'
 * '<S5>'   : 'PIDcontrol/If2 Subsystem'
 * '<S6>'   : 'PIDcontrol/Real motor'
 * '<S7>'   : 'PIDcontrol/error signal'
 * '<S8>'   : 'PIDcontrol/motor position'
 * '<S9>'   : 'PIDcontrol/setpoint'
 */
#endif                                 /* RTW_HEADER_PIDcontrol_h_ */