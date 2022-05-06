// GENERATED FILE - DO NOT EDIT.
// Generated by gen_features.py using data from *_features.json.
//
// Copyright 2022 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// angle_features_autogen.cpp: List of ANGLE features to help enable/disable them in tests.

#include "angle_features_autogen.h"

#include "common/PackedEnums.h"

namespace angle
{
namespace
{
constexpr PackedEnumMap<Feature, const char *> kFeatureNames = {{
    {Feature::AddAndTrueToLoopCondition, "addAndTrueToLoopCondition"},
    {Feature::AddMockTextureNoRenderTarget, "addMockTextureNoRenderTarget"},
    {Feature::AdjustSrcDstRegionForBlitFramebuffer, "adjustSrcDstRegionForBlitFramebuffer"},
    {Feature::AllocateNonZeroMemory, "allocateNonZeroMemory"},
    {Feature::AllowAstcFormats, "allowAstcFormats"},
    {Feature::AllowBufferReadWrite, "allowBufferReadWrite"},
    {Feature::AllowClearForRobustResourceInit, "allowClearForRobustResourceInit"},
    {Feature::AllowCompressedFormats, "allowCompressedFormats"},
    {Feature::AllowES3OnFL100, "allowES3OnFL100"},
    {Feature::AllowETCFormats, "allowETCFormats"},
    {Feature::AllowGenerateMipmapWithCompute, "allowGenerateMipmapWithCompute"},
    {Feature::AllowGenMultipleMipsPerPass, "allowGenMultipleMipsPerPass"},
    {Feature::AllowInlineConstVertexData, "allowInlineConstVertexData"},
    {Feature::AllowMultisampleStoreAndResolve, "allowMultisampleStoreAndResolve"},
    {Feature::AllowRuntimeSamplerCompareMode, "allowRuntimeSamplerCompareMode"},
    {Feature::AllowSamplerCompareGradient, "allowSamplerCompareGradient"},
    {Feature::AllowSamplerCompareLod, "allowSamplerCompareLod"},
    {Feature::AllowSeparateDepthStencilBuffers, "allowSeparateDepthStencilBuffers"},
    {Feature::AllowTranslateUniformBlockToStructuredBuffer,
     "allowTranslateUniformBlockToStructuredBuffer"},
    {Feature::AlwaysCallUseProgramAfterLink, "alwaysCallUseProgramAfterLink"},
    {Feature::AlwaysUnbindFramebufferTexture2D, "alwaysUnbindFramebufferTexture2D"},
    {Feature::AsyncCommandQueue, "asyncCommandQueue"},
    {Feature::Avoid1BitAlphaTextureFormats, "avoid1BitAlphaTextureFormats"},
    {Feature::BasicGLLineRasterization, "basicGLLineRasterization"},
    {Feature::BindEmptyForUnusedDescriptorSets, "bindEmptyForUnusedDescriptorSets"},
    {Feature::BindTransformFeedbackBufferBeforeBindBufferRange,
     "bindTransformFeedbackBufferBeforeBindBufferRange"},
    {Feature::BottomLeftOriginPresentRegionRectangles, "bottomLeftOriginPresentRegionRectangles"},
    {Feature::BresenhamLineRasterization, "bresenhamLineRasterization"},
    {Feature::CallClearTwice, "callClearTwice"},
    {Feature::ClampArrayAccess, "clampArrayAccess"},
    {Feature::ClampFragDepth, "clampFragDepth"},
    {Feature::ClampMscRate, "clampMscRate"},
    {Feature::ClampPointSize, "clampPointSize"},
    {Feature::ClearToZeroOrOneBroken, "clearToZeroOrOneBroken"},
    {Feature::ClipSrcRegionForBlitFramebuffer, "clipSrcRegionForBlitFramebuffer"},
    {Feature::CompressVertexData, "compressVertexData"},
    {Feature::CopyIOSurfaceToNonIOSurfaceForReadOptimization,
     "copyIOSurfaceToNonIOSurfaceForReadOptimization"},
    {Feature::CopyTextureToBufferForReadOptimization, "copyTextureToBufferForReadOptimization"},
    {Feature::CreatePipelineDuringLink, "createPipelineDuringLink"},
    {Feature::DecodeEncodeSRGBForGenerateMipmap, "decodeEncodeSRGBForGenerateMipmap"},
    {Feature::DeferFlushUntilEndRenderPass, "deferFlushUntilEndRenderPass"},
    {Feature::DepthClamping, "depthClamping"},
    {Feature::DepthStencilBlitExtraCopy, "depthStencilBlitExtraCopy"},
    {Feature::DirectMetalGeneration, "directMetalGeneration"},
    {Feature::DisableAnisotropicFiltering, "disableAnisotropicFiltering"},
    {Feature::DisableB5G6R5Support, "disableB5G6R5Support"},
    {Feature::DisableBlendFuncExtended, "disableBlendFuncExtended"},
    {Feature::DisableDrawBuffersIndexed, "disableDrawBuffersIndexed"},
    {Feature::DisableFifoPresentMode, "disableFifoPresentMode"},
    {Feature::DisableFlippingBlitWithCommand, "disableFlippingBlitWithCommand"},
    {Feature::DisableGPUSwitchingSupport, "disableGPUSwitchingSupport"},
    {Feature::DisableMultisampledRenderToTexture, "disableMultisampledRenderToTexture"},
    {Feature::DisableNativeParallelCompile, "disableNativeParallelCompile"},
    {Feature::DisableProgramBinary, "disableProgramBinary"},
    {Feature::DisableProgramCachingForTransformFeedback,
     "disableProgramCachingForTransformFeedback"},
    {Feature::DisableSemaphoreFd, "disableSemaphoreFd"},
    {Feature::DisableSyncControlSupport, "disableSyncControlSupport"},
    {Feature::DisableTimestampQueries, "disableTimestampQueries"},
    {Feature::DisableWorkerContexts, "disableWorkerContexts"},
    {Feature::DisallowSeamfulCubeMapEmulation, "disallowSeamfulCubeMapEmulation"},
    {Feature::DoesSRGBClearsOnLinearFramebufferAttachments,
     "doesSRGBClearsOnLinearFramebufferAttachments"},
    {Feature::DontInitializeUninitializedLocals, "dontInitializeUninitializedLocals"},
    {Feature::DontRelinkProgramsInParallel, "dontRelinkProgramsInParallel"},
    {Feature::DontUseLoopsToInitializeVariables, "dontUseLoopsToInitializeVariables"},
    {Feature::DoWhileGLSLCausesGPUHang, "doWhileGLSLCausesGPUHang"},
    {Feature::EmulateAbsIntFunction, "emulateAbsIntFunction"},
    {Feature::EmulateAdvancedBlendEquations, "emulateAdvancedBlendEquations"},
    {Feature::EmulateAtan2Float, "emulateAtan2Float"},
    {Feature::EmulateCopyTexImage2DFromRenderbuffers, "emulateCopyTexImage2DFromRenderbuffers"},
    {Feature::EmulateDithering, "emulateDithering"},
    {Feature::EmulatedPrerotation180, "emulatedPrerotation180"},
    {Feature::EmulatedPrerotation270, "emulatedPrerotation270"},
    {Feature::EmulatedPrerotation90, "emulatedPrerotation90"},
    {Feature::EmulateImmutableCompressedTexture3D, "emulateImmutableCompressedTexture3D"},
    {Feature::EmulateIsnanFloat, "emulateIsnanFloat"},
    {Feature::EmulateMaxVertexAttribStride, "emulateMaxVertexAttribStride"},
    {Feature::EmulatePackSkipRowsAndPackSkipPixels, "emulatePackSkipRowsAndPackSkipPixels"},
    {Feature::EmulatePrimitiveRestartFixedIndex, "emulatePrimitiveRestartFixedIndex"},
    {Feature::EmulateR32fImageAtomicExchange, "emulateR32fImageAtomicExchange"},
    {Feature::EmulateRGB10, "emulateRGB10"},
    {Feature::EmulateTinyStencilTextures, "emulateTinyStencilTextures"},
    {Feature::EmulateTransformFeedback, "emulateTransformFeedback"},
    {Feature::EnableCaptureLimits, "enableCaptureLimits"},
    {Feature::EnableCompressingPipelineCacheInThreadPool,
     "enableCompressingPipelineCacheInThreadPool"},
    {Feature::EnableMultisampledRenderToTexture, "enableMultisampledRenderToTexture"},
    {Feature::EnablePrecisionQualifiers, "enablePrecisionQualifiers"},
    {Feature::EnablePreRotateSurfaces, "enablePreRotateSurfaces"},
    {Feature::EnableProgramBinaryForCapture, "enableProgramBinaryForCapture"},
    {Feature::ExpandIntegerPowExpressions, "expandIntegerPowExpressions"},
    {Feature::ExplicitlyEnablePerSampleShading, "explicitlyEnablePerSampleShading"},
    {Feature::ExposeNonConformantExtensionsAndVersions, "exposeNonConformantExtensionsAndVersions"},
    {Feature::FinishDoesNotCauseQueriesToBeAvailable, "finishDoesNotCauseQueriesToBeAvailable"},
    {Feature::FlushAfterEndingTransformFeedback, "flushAfterEndingTransformFeedback"},
    {Feature::FlushBeforeDeleteTextureIfCopiedTo, "flushBeforeDeleteTextureIfCopiedTo"},
    {Feature::FlushOnFramebufferChange, "flushOnFramebufferChange"},
    {Feature::ForceAtomicValueResolution, "forceAtomicValueResolution"},
    {Feature::ForceBufferGPUStorage, "forceBufferGPUStorage"},
    {Feature::ForceD16TexFilter, "forceD16TexFilter"},
    {Feature::ForceD24S8AsUnsupported, "forceD24S8AsUnsupported"},
    {Feature::ForceDepthAttachmentInitOnClear, "forceDepthAttachmentInitOnClear"},
    {Feature::ForceDriverUniformOverSpecConst, "forceDriverUniformOverSpecConst"},
    {Feature::ForceFallbackFormat, "forceFallbackFormat"},
    {Feature::ForceFragmentShaderPrecisionHighpToMediump,
     "forceFragmentShaderPrecisionHighpToMediump"},
    {Feature::ForceInitShaderVariables, "forceInitShaderVariables"},
    {Feature::ForceMaxUniformBufferSize16KB, "forceMaxUniformBufferSize16KB"},
    {Feature::ForceNearestFiltering, "forceNearestFiltering"},
    {Feature::ForceNearestMipFiltering, "forceNearestMipFiltering"},
    {Feature::ForceNonCSBaseMipmapGeneration, "forceNonCSBaseMipmapGeneration"},
    {Feature::ForceRobustResourceInit, "forceRobustResourceInit"},
    {Feature::ForceSubmitImmutableTextureUpdates, "forceSubmitImmutableTextureUpdates"},
    {Feature::ForceTextureLodOffset1, "forceTextureLodOffset1"},
    {Feature::ForceTextureLodOffset2, "forceTextureLodOffset2"},
    {Feature::ForceTextureLodOffset3, "forceTextureLodOffset3"},
    {Feature::ForceTextureLodOffset4, "forceTextureLodOffset4"},
    {Feature::GenerateSPIRVThroughGlslang, "generateSPIRVThroughGlslang"},
    {Feature::GetDimensionsIgnoresBaseLevel, "getDimensionsIgnoresBaseLevel"},
    {Feature::HasBaseVertexInstancedDraw, "hasBaseVertexInstancedDraw"},
    {Feature::HasCheapRenderPass, "hasCheapRenderPass"},
    {Feature::HasDepthAutoResolve, "hasDepthAutoResolve"},
    {Feature::HasEvents, "hasEvents"},
    {Feature::HasExplicitMemBarrier, "hasExplicitMemBarrier"},
    {Feature::HasNonUniformDispatch, "hasNonUniformDispatch"},
    {Feature::HasShaderStencilOutput, "hasShaderStencilOutput"},
    {Feature::HasStencilAutoResolve, "hasStencilAutoResolve"},
    {Feature::HasTextureSwizzle, "hasTextureSwizzle"},
    {Feature::InitFragmentOutputVariables, "initFragmentOutputVariables"},
    {Feature::InitializeCurrentVertexAttributes, "initializeCurrentVertexAttributes"},
    {Feature::IntelDisableFastMath, "intelDisableFastMath"},
    {Feature::IntelExplicitBoolCastWorkaround, "intelExplicitBoolCastWorkaround"},
    {Feature::KeepBufferShadowCopy, "keepBufferShadowCopy"},
    {Feature::LimitMax3dArrayTextureSizeTo1024, "limitMax3dArrayTextureSizeTo1024"},
    {Feature::LimitMaxMSAASamplesTo4, "limitMaxMSAASamplesTo4"},
    {Feature::LimitMaxTextureSizeTo4096, "limitMaxTextureSizeTo4096"},
    {Feature::LogMemoryReportCallbacks, "logMemoryReportCallbacks"},
    {Feature::LogMemoryReportStats, "logMemoryReportStats"},
    {Feature::LoseContextOnOutOfMemory, "loseContextOnOutOfMemory"},
    {Feature::MrtPerfWorkaround, "mrtPerfWorkaround"},
    {Feature::MultisampleColorFormatShaderReadWorkaround,
     "multisampleColorFormatShaderReadWorkaround"},
    {Feature::OverrideSurfaceFormatRGB8ToRGBA8, "overrideSurfaceFormatRGB8ToRGBA8"},
    {Feature::PackLastRowSeparatelyForPaddingInclusion, "packLastRowSeparatelyForPaddingInclusion"},
    {Feature::PackOverlappingRowsSeparatelyPackBuffer, "packOverlappingRowsSeparatelyPackBuffer"},
    {Feature::PadBuffersToMaxVertexAttribStride, "padBuffersToMaxVertexAttribStride"},
    {Feature::PerFrameWindowSizeQuery, "perFrameWindowSizeQuery"},
    {Feature::PersistentlyMappedBuffers, "persistentlyMappedBuffers"},
    {Feature::PreAddTexelFetchOffsets, "preAddTexelFetchOffsets"},
    {Feature::PreferAggregateBarrierCalls, "preferAggregateBarrierCalls"},
    {Feature::PreferCPUForBufferSubData, "preferCPUForBufferSubData"},
    {Feature::PreferDeviceLocalMemoryHostVisible, "preferDeviceLocalMemoryHostVisible"},
    {Feature::PreferDrawClearOverVkCmdClearAttachments, "preferDrawClearOverVkCmdClearAttachments"},
    {Feature::PreferSkippingInvalidateForEmulatedFormats,
     "preferSkippingInvalidateForEmulatedFormats"},
    {Feature::PreferSubmitAtFBOBoundary, "preferSubmitAtFBOBoundary"},
    {Feature::PromotePackedFormatsTo8BitPerChannel, "promotePackedFormatsTo8BitPerChannel"},
    {Feature::ProvokingVertex, "provokingVertex"},
    {Feature::QueryCounterBitsGeneratesErrors, "queryCounterBitsGeneratesErrors"},
    {Feature::ReadPixelsUsingImplementationColorReadFormatForNorm16,
     "readPixelsUsingImplementationColorReadFormatForNorm16"},
    {Feature::ReapplyUBOBindingsAfterUsingBinaryProgram,
     "reapplyUBOBindingsAfterUsingBinaryProgram"},
    {Feature::RegenerateStructNames, "regenerateStructNames"},
    {Feature::RemoveDynamicIndexingOfSwizzledVector, "removeDynamicIndexingOfSwizzledVector"},
    {Feature::RemoveInvariantAndCentroidForESSL3, "removeInvariantAndCentroidForESSL3"},
    {Feature::ResetTexImage2DBaseLevel, "resetTexImage2DBaseLevel"},
    {Feature::RetainSPIRVDebugInfo, "retainSPIRVDebugInfo"},
    {Feature::RewriteFloatUnaryMinusOperator, "rewriteFloatUnaryMinusOperator"},
    {Feature::RewriteRepeatedAssignToSwizzled, "rewriteRepeatedAssignToSwizzled"},
    {Feature::RewriteRowMajorMatrices, "rewriteRowMajorMatrices"},
    {Feature::RewriteUnaryMinusOperator, "rewriteUnaryMinusOperator"},
    {Feature::RGBA4IsNotSupportedForColorRendering, "RGBA4IsNotSupportedForColorRendering"},
    {Feature::RGBDXT1TexturesSampleZeroAlpha, "RGBDXT1TexturesSampleZeroAlpha"},
    {Feature::RoundOutputAfterDithering, "roundOutputAfterDithering"},
    {Feature::SanitizeAMDGPURendererString, "sanitizeAMDGPURendererString"},
    {Feature::ScalarizeVecAndMatConstructorArgs, "scalarizeVecAndMatConstructorArgs"},
    {Feature::SelectViewInGeometryShader, "selectViewInGeometryShader"},
    {Feature::SetDataFasterThanImageUpload, "setDataFasterThanImageUpload"},
    {Feature::SetPrimitiveRestartFixedIndexForDrawArrays,
     "setPrimitiveRestartFixedIndexForDrawArrays"},
    {Feature::SetZeroLevelBeforeGenerateMipmap, "setZeroLevelBeforeGenerateMipmap"},
    {Feature::ShadowBuffers, "shadowBuffers"},
    {Feature::ShiftInstancedArrayDataWithOffset, "shiftInstancedArrayDataWithOffset"},
    {Feature::SkipVSConstantRegisterZero, "skipVSConstantRegisterZero"},
    {Feature::SupportsAndroidHardwareBuffer, "supportsAndroidHardwareBuffer"},
    {Feature::SupportsAndroidNativeFenceSync, "supportsAndroidNativeFenceSync"},
    {Feature::SupportsBlendOperationAdvanced, "supportsBlendOperationAdvanced"},
    {Feature::SupportsCustomBorderColor, "supportsCustomBorderColor"},
    {Feature::SupportsDepthClipControl, "supportsDepthClipControl"},
    {Feature::SupportsDepthStencilResolve, "supportsDepthStencilResolve"},
    {Feature::SupportsExternalFenceCapabilities, "supportsExternalFenceCapabilities"},
    {Feature::SupportsExternalFenceFd, "supportsExternalFenceFd"},
    {Feature::SupportsExternalMemoryDmaBufAndModifiers, "supportsExternalMemoryDmaBufAndModifiers"},
    {Feature::SupportsExternalMemoryFd, "supportsExternalMemoryFd"},
    {Feature::SupportsExternalMemoryFuchsia, "supportsExternalMemoryFuchsia"},
    {Feature::SupportsExternalMemoryHost, "supportsExternalMemoryHost"},
    {Feature::SupportsExternalSemaphoreCapabilities, "supportsExternalSemaphoreCapabilities"},
    {Feature::SupportsExternalSemaphoreFd, "supportsExternalSemaphoreFd"},
    {Feature::SupportsExternalSemaphoreFuchsia, "supportsExternalSemaphoreFuchsia"},
    {Feature::SupportsFilteringPrecision, "supportsFilteringPrecision"},
    {Feature::SupportsFragmentShadingRate, "supportsFragmentShadingRate"},
    {Feature::SupportsGeometryStreamsCapability, "supportsGeometryStreamsCapability"},
    {Feature::SupportsGGPFrameToken, "supportsGGPFrameToken"},
    {Feature::SupportsHostQueryReset, "supportsHostQueryReset"},
    {Feature::SupportsImageCubeArray, "supportsImageCubeArray"},
    {Feature::SupportsImageFormatList, "supportsImageFormatList"},
    {Feature::SupportsIncrementalPresent, "supportsIncrementalPresent"},
    {Feature::SupportsIndexTypeUint8, "supportsIndexTypeUint8"},
    {Feature::SupportsLockSurfaceExtension, "supportsLockSurfaceExtension"},
    {Feature::SupportsMultiDrawIndirect, "supportsMultiDrawIndirect"},
    {Feature::SupportsMultisampledRenderToSingleSampled,
     "supportsMultisampledRenderToSingleSampled"},
    {Feature::SupportsMultiview, "supportsMultiview"},
    {Feature::SupportsNegativeViewport, "supportsNegativeViewport"},
    {Feature::SupportsPipelineStatisticsQuery, "supportsPipelineStatisticsQuery"},
    {Feature::SupportsProtectedMemory, "supportsProtectedMemory"},
    {Feature::SupportsRenderpass2, "supportsRenderpass2"},
    {Feature::SupportsRenderPassLoadStoreOpNone, "supportsRenderPassLoadStoreOpNone"},
    {Feature::SupportsRenderPassStoreOpNone, "supportsRenderPassStoreOpNone"},
    {Feature::SupportsShaderFloat16, "supportsShaderFloat16"},
    {Feature::SupportsShaderFramebufferFetch, "supportsShaderFramebufferFetch"},
    {Feature::SupportsShaderFramebufferFetchNonCoherent,
     "supportsShaderFramebufferFetchNonCoherent"},
    {Feature::SupportsShaderStencilExport, "supportsShaderStencilExport"},
    {Feature::SupportsSharedPresentableImageExtension, "supportsSharedPresentableImageExtension"},
    {Feature::SupportsSurfaceCapabilities2Extension, "supportsSurfaceCapabilities2Extension"},
    {Feature::SupportsSurfacelessQueryExtension, "supportsSurfacelessQueryExtension"},
    {Feature::SupportsSurfaceProtectedCapabilitiesExtension,
     "supportsSurfaceProtectedCapabilitiesExtension"},
    {Feature::SupportsSurfaceProtectedSwapchains, "supportsSurfaceProtectedSwapchains"},
    {Feature::SupportsTransformFeedbackExtension, "supportsTransformFeedbackExtension"},
    {Feature::SupportsYUVSamplerConversion, "supportsYUVSamplerConversion"},
    {Feature::SwapbuffersOnFlushOrFinishWithSingleBuffer,
     "swapbuffersOnFlushOrFinishWithSingleBuffer"},
    {Feature::SyncVertexArraysToDefault, "syncVertexArraysToDefault"},
    {Feature::UnbindFBOBeforeSwitchingContext, "unbindFBOBeforeSwitchingContext"},
    {Feature::UnfoldShortCircuits, "unfoldShortCircuits"},
    {Feature::UnpackLastRowSeparatelyForPaddingInclusion,
     "unpackLastRowSeparatelyForPaddingInclusion"},
    {Feature::UnpackOverlappingRowsSeparatelyUnpackBuffer,
     "unpackOverlappingRowsSeparatelyUnpackBuffer"},
    {Feature::UnsizedSRGBReadPixelsDoesntTransform, "unsizedSRGBReadPixelsDoesntTransform"},
    {Feature::UploadTextureDataInChunks, "uploadTextureDataInChunks"},
    {Feature::UseInstancedPointSpriteEmulation, "useInstancedPointSpriteEmulation"},
    {Feature::UseMultipleDescriptorsForExternalFormats, "useMultipleDescriptorsForExternalFormats"},
    {Feature::UseSystemMemoryForConstantBuffers, "useSystemMemoryForConstantBuffers"},
    {Feature::UseUnusedBlocksWithStandardOrSharedLayout,
     "useUnusedBlocksWithStandardOrSharedLayout"},
    {Feature::VertexIDDoesNotIncludeBaseVertex, "vertexIDDoesNotIncludeBaseVertex"},
    {Feature::WaitIdleBeforeSwapchainRecreation, "waitIdleBeforeSwapchainRecreation"},
    {Feature::ZeroMaxLodWorkaround, "zeroMaxLodWorkaround"},
}};
}  // anonymous namespace

const char *GetFeatureName(Feature feature)
{
    return kFeatureNames[feature];
}

}  // namespace angle
