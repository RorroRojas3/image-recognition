/*
 * electromagnetAndLoadCell_capi.c
 *
 * Academic Student License -- for use by students to meet course
 * requirements and perform academic research at degree granting
 * institutions only.  Not for government, commercial, or other
 * organizational use.
 *
 * Code generation for model "electromagnetAndLoadCell".
 *
 * Model version              : 1.9
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Thu Apr 05 13:12:03 2018
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "electromagnetAndLoadCell_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "electromagnetAndLoadCell.h"
#include "electromagnetAndLoadCell_capi.h"
#include "electromagnetAndLoadCell_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("DC Input"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Q4 AD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 2, TARGET_STRING("DC Input"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 3, TARGET_STRING("Q4 AD"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 4, TARGET_STRING("Q4 AD"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 5, TARGET_STRING("Q4 AD"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 6, TARGET_STRING("Q4 AD"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 7, TARGET_STRING("Q4 AD"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 8, TARGET_STRING("Q4 AD"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 9, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 10, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 11, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 12, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 13, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 14, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 15, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 16, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 17, TARGET_STRING("Q4 DA "),
    TARGET_STRING("P9"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &electromagnetAndLoadCell_B.DCInput, /* 0: Signal */
  &electromagnetAndLoadCell_B.Q4AD,    /* 1: Signal */
  &electromagnetAndLoadCell_P.DCInput_Value,/* 2: Block Parameter */
  &electromagnetAndLoadCell_P.Q4AD_P1, /* 3: Block Parameter */
  &electromagnetAndLoadCell_P.Q4AD_P2, /* 4: Block Parameter */
  &electromagnetAndLoadCell_P.Q4AD_P3, /* 5: Block Parameter */
  &electromagnetAndLoadCell_P.Q4AD_P5, /* 6: Block Parameter */
  &electromagnetAndLoadCell_P.Q4AD_P6, /* 7: Block Parameter */
  &electromagnetAndLoadCell_P.Q4AD_P7, /* 8: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P1, /* 9: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P2, /* 10: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P3, /* 11: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P4, /* 12: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P5, /* 13: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P6, /* 14: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P7, /* 15: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P8, /* 16: Block Parameter */
  &electromagnetAndLoadCell_P.Q4DA_P9, /* 17: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1                                    /* 1 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 2,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 16,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3394483636U,
    2935098356U,
    2492325923U,
    80643105U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  electromagnetAndLoadCell_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void electromagnetAndLoadCell_InitializeDataMapInfo
  (RT_MODEL_electromagnetAndLoadCell_T *const electromagnetAndLoadCell_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(electromagnetAndLoadCell_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(electromagnetAndLoadCell_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(electromagnetAndLoadCell_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(electromagnetAndLoadCell_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(electromagnetAndLoadCell_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  electromagnetAndLoadCell_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(electromagnetAndLoadCell_M);
  electromagnetAndLoadCell_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_electromagnetAndLoadCell_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(electromagnetAndLoadCell_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(electromagnetAndLoadCell_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(electromagnetAndLoadCell_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void electromagnetAndLoadCell_host_InitializeDataMapInfo
    (electromagnetAndLoadCell_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: electromagnetAndLoadCell_capi.c */
