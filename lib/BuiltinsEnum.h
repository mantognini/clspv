// Copyright 2019 The Clspv Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CLSPV_LIB_BUILTINSENUM_H_
#define CLSPV_LIB_BUILTINSENUM_H_

namespace clspv {
namespace Builtins {

enum BuiltinType {
  kBuiltinNone = 0,

  kType_Clspv_Start,
  kClspvResource,
  kClspvLocal,
  kSpirvOp,
  kSpirvAtomicXor,
  kSpirvCopyMemory,
  kClspvSamplerVarLiteral,
  kClspvCompositeConstruct,
  kType_Clspv_End,

  kType_Async_Start,
  kAsyncWorkGroupCopy,
  kAsyncWorkGroupStridedCopy,
  kWaitGroupEvents,
  kPrefetch,
  kType_Async_End,

  kType_Atomic_Start,
  kAtomicInit,
  kAtomicAdd,
  kAtomicSub,
  kAtomicInc,
  kAtomicDec,
  kAtomicXchg,
  kAtomicCmpxchg,
  kAtomicMin,
  kAtomicMax,
  kAtomicAnd,
  kAtomicOr,
  kAtomicXor,
  kAtomicWorkItemFence,
  kAtomicStore,
  kAtomicStoreExplicit,
  kAtomicLoad,
  kAtomicLoadExplicit,
  kAtomicExchange,
  kAtomicExchangeExplicit,
  kAtomicCompareExchangeStrong,
  kAtomicCompareExchangeStrongExplicit,
  kAtomicCompareExchangeWeak,
  kAtomicCompareExchangeWeakExplicit,
  kAtomicFetchKey,
  kAtomicFetchKeyExplicit,
  kAtomicFlagTestAndSet,
  kAtomicFlagTestAndSetExplicit,
  kAtomicFlagClear,
  kAtomicFlagClearExplicit,
  kType_Atomic_End,

  kType_Common_Start,
  kDegrees,
  kMix,
  kRadians,
  kSign,
  kSmoothstep,
  kStep,
  kType_Common_End,

  kType_Convert_Start,
  kConvert,
  kSpirvPack,
  kSpirvUnpack,
  kType_Convert_End,

  kType_Event_Start,
  kRetainEvent,
  kReleaseEvent,
  kCreateUserEvent,
  kIsValidEvent,
  kSetUserEventStatus,
  kType_Event_End,

  kType_MemoryFence_Start,
  kMemFence,
  kReadMemFence,
  kWriteMemFence,
  kType_MemoryFence_End,

  kType_Geometric_Start,
  kCross,
  kDot,
  kDistance,
  kLength,
  kNormalize,
  kFastDistance,
  kFastLength,
  kFastNormalize,
  kType_Geometric_End,

  kType_Image_Start,
  kReadImagef,
  kReadImagei,
  kReadImageui,
  kReadImageh,
  kWriteImagef,
  kWriteImagei,
  kWriteImageui,
  kWriteImageh,
  kGetImageWidth,
  kGetImageHeight,
  kGetImageDepth,
  kGetImageChannelDataType,
  kGetImageChannelOrder,
  kGetImageDim,
  kGetImageArraySize,
  kGetImageNumSamples,
  kType_Image_End,

  kType_Integer_Start,
  kAbs,
  kAbsDiff,
  kAddSat,
  kClamp,
  kClz,
  kCtz,
  kHadd,
  kMad24,
  kMadHi,
  kMadSat,
  kMax,
  kMin,
  kMul24,
  kMulHi,
  kPopcount,
  kRhadd,
  kRotate,
  kSubSat,
  kUpsample,
  kType_Integer_End,

  kType_Math_Start,
  kAcos,
  kAcosh,
  kAcospi,
  kAsin,
  kAsinh,
  kAsinpi,
  kAtan,
  kAtan2,
  kAtanh,
  kAtanpi,
  kAtan2pi,
  kCbrt,
  kCeil,
  kCopysign,
  kCos,
  kHalfCos,
  kNativeCos,
  kCosh,
  kCospi,
  kHalfDivide,
  kNativeDivide,
  kErf,
  kErfc,
  kExp,
  kHalfExp,
  kNativeExp,
  kExp2,
  kHalfExp2,
  kNativeExp2,
  kExp10,
  kHalfExp10,
  kNativeExp10,
  kExpm1,
  kFabs,
  kFdim,
  kFloor,
  kFma,
  kFmax,
  kFmin,
  kFmod,
  kClspvFract,
  kFract,
  kFrexp,
  kHypot,
  kIlogb,
  kLdexp,
  kLgamma,
  kLgammaR,
  kLog,
  kHalfLog,
  kNativeLog,
  kLog2,
  kHalfLog2,
  kNativeLog2,
  kLog10,
  kHalfLog10,
  kNativeLog10,
  kLog1p,
  kLogb,
  kMad,
  kMagmax,
  kMagmin,
  kModf,
  kNan,
  kNextafter,
  kPow,
  kPown,
  kPowr,
  kHalfPowr,
  kNativePowr,
  kHalfRecip,
  kNativeRecip,
  kRemainder,
  kRemquo,
  kRint,
  kRound,
  kRootn,
  kRsqrt,
  kHalfRsqrt,
  kNativeRsqrt,
  kSin,
  kHalfSin,
  kNativeSin,
  kSincos,
  kSinh,
  kSinpi,
  kSqrt,
  kHalfSqrt,
  kNativeSqrt,
  kTan,
  kHalfTan,
  kNativeTan,
  kTanh,
  kTanpi,
  kTgamma,
  kTrunc,
  kType_Math_End,

  kType_Relational_Start,
  kIsequal,
  kIsnotequal,
  kIsgreater,
  kIsgreaterequal,
  kIsless,
  kIslessequal,
  kIslessgreater,
  kIsfinite,
  kIsinf,
  kIsnan,
  kIsnormal,
  kIsordered,
  kIsunordered,
  kSignbit,
  kAny,
  kAll,
  kBitselect,
  kSelect,
  kType_Relational_End,

  kType_Sync_Start,
  kBarrier,
  kWorkGroupBarrier,
  kType_Sync_End,

  kType_Vector_Start,
  kShuffle,
  kShuffle2,
  kVecStep,
  kVload,
  kVloadHalf,
  kVloadaHalf,
  kVstore,
  kVstoreHalf,
  kVstoreaHalf,
  kType_Vector_End,

  kType_WorkItem_Start,
  kGetGlobalId,
  kGetGlobalSize,
  kGetGlobalOffset,
  kGetGlobalLinearId,
  kGetGroupId,
  kGetLocalId,
  kGetLocalLinearId,
  kGetLocalSize,
  kGetEnqueuedLocalSize,
  kGetNumGroups,
  kGetWorkDim,
  kType_WorkItem_End,

  kType_Pipe_Start,
  kReadPipe,
  kWritePipe,
  kReserveReadPipe,
  kCommitReadPipe,
  kIsValidReserveId,
  kWorkGroupReserveReadPipe,
  kWorkGroupReserveWritePipe,
  kWorkGroupCommitReadPipe,
  kWorkGroupCommitWritePipe,
  kGetPipeNumPackets,
  kGetPipeMaxPackets,
  kType_Pipe_End,

  kType_SubgroupsKHR_Start,
  kGetSubGroupSize,
  kGetMaxSubGroupSize,
  kGetNumSubGroups,
  kGetEnqueuedNumSubGroups,
  kGetSubGroupId,
  kGetSubGroupLocalId,
  kSubGroupBarrier,
  kSubGroupAll,
  kSubGroupAny,
  kSubGroupBroadcast,
  kSubGroupReduceAdd,
  kSubGroupReduceMin,
  kSubGroupReduceMax,
  kSubGroupScanExclusiveAdd,
  kSubGroupScanExclusiveMin,
  kSubGroupScanExclusiveMax,
  kSubGroupScanInclusiveAdd,
  kSubGroupScanInclusiveMin,
  kSubGroupScanInclusiveMax,
  kSubGroupReserveReadPipe,
  kSubGroupReserveWritePipe,
  kSubGroupCommitReadPipe,
  kSubGroupCommitWritePipe,
  kGetKernelSubGroupCountForNdrange,
  kGetKernelMaxSubGroupSizeForNdrange,
  kType_SubgroupsKHR_End,
}; // enum BuiltinType

} // namespace Builtins
} // namespace clspv

#endif // CLSPV_LIB_BUILTINSENUM_H_
