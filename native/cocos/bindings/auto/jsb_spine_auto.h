// clang-format off

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

/****************************************************************************
 Copyright (c) 2022 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#pragma once
#include "bindings/jswrapper/SeApi.h"
#include "bindings/manual/jsb_conversions.h"
#include "editor-support/spine-creator-support/spine-cocos2dx.h"



bool register_all_spine(se::Object* obj);


JSB_REGISTER_OBJECT_TYPE(spine::Timeline);
extern se::Object *__jsb_spine_Timeline_proto; // NOLINT
extern se::Class * __jsb_spine_Timeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Animation);
extern se::Object *__jsb_spine_Animation_proto; // NOLINT
extern se::Class * __jsb_spine_Animation_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::AnimationStateListenerObject);
extern se::Object *__jsb_spine_AnimationStateListenerObject_proto; // NOLINT
extern se::Class * __jsb_spine_AnimationStateListenerObject_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::TrackEntry);
extern se::Object *__jsb_spine_TrackEntry_proto; // NOLINT
extern se::Class * __jsb_spine_TrackEntry_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::EventQueueEntry);
extern se::Object *__jsb_spine_EventQueueEntry_proto; // NOLINT
extern se::Class * __jsb_spine_EventQueueEntry_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::EventQueue);
extern se::Object *__jsb_spine_EventQueue_proto; // NOLINT
extern se::Class * __jsb_spine_EventQueue_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::AnimationState);
extern se::Object *__jsb_spine_AnimationState_proto; // NOLINT
extern se::Class * __jsb_spine_AnimationState_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::AnimationStateData);
extern se::Object *__jsb_spine_AnimationStateData_proto; // NOLINT
extern se::Class * __jsb_spine_AnimationStateData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Attachment);
extern se::Object *__jsb_spine_Attachment_proto; // NOLINT
extern se::Class * __jsb_spine_Attachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::AttachmentTimeline);
extern se::Object *__jsb_spine_AttachmentTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_AttachmentTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::BoundingBoxAttachment);
extern se::Object *__jsb_spine_BoundingBoxAttachment_proto; // NOLINT
extern se::Class * __jsb_spine_BoundingBoxAttachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Bone);
extern se::Object *__jsb_spine_Bone_proto; // NOLINT
extern se::Class * __jsb_spine_Bone_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::BoneData);
extern se::Object *__jsb_spine_BoneData_proto; // NOLINT
extern se::Class * __jsb_spine_BoneData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::ClippingAttachment);
extern se::Object *__jsb_spine_ClippingAttachment_proto; // NOLINT
extern se::Class * __jsb_spine_ClippingAttachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Color);
extern se::Object *__jsb_spine_Color_proto; // NOLINT
extern se::Class * __jsb_spine_Color_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::ColorTimeline);
extern se::Object *__jsb_spine_ColorTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_ColorTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::CurveTimeline);
extern se::Object *__jsb_spine_CurveTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_CurveTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::DeformTimeline);
extern se::Object *__jsb_spine_DeformTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_DeformTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::DrawOrderTimeline);
extern se::Object *__jsb_spine_DrawOrderTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_DrawOrderTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Event);
extern se::Object *__jsb_spine_Event_proto; // NOLINT
extern se::Class * __jsb_spine_Event_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::EventData);
extern se::Object *__jsb_spine_EventData_proto; // NOLINT
extern se::Class * __jsb_spine_EventData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::EventTimeline);
extern se::Object *__jsb_spine_EventTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_EventTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::IkConstraint);
extern se::Object *__jsb_spine_IkConstraint_proto; // NOLINT
extern se::Class * __jsb_spine_IkConstraint_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::IkConstraintData);
extern se::Object *__jsb_spine_IkConstraintData_proto; // NOLINT
extern se::Class * __jsb_spine_IkConstraintData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::IkConstraintTimeline);
extern se::Object *__jsb_spine_IkConstraintTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_IkConstraintTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::MeshAttachment);
extern se::Object *__jsb_spine_MeshAttachment_proto; // NOLINT
extern se::Class * __jsb_spine_MeshAttachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::PathAttachment);
extern se::Object *__jsb_spine_PathAttachment_proto; // NOLINT
extern se::Class * __jsb_spine_PathAttachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::PathConstraint);
extern se::Object *__jsb_spine_PathConstraint_proto; // NOLINT
extern se::Class * __jsb_spine_PathConstraint_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::PathConstraintData);
extern se::Object *__jsb_spine_PathConstraintData_proto; // NOLINT
extern se::Class * __jsb_spine_PathConstraintData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::PathConstraintMixTimeline);
extern se::Object *__jsb_spine_PathConstraintMixTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_PathConstraintMixTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::PathConstraintPositionTimeline);
extern se::Object *__jsb_spine_PathConstraintPositionTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_PathConstraintPositionTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::PathConstraintSpacingTimeline);
extern se::Object *__jsb_spine_PathConstraintSpacingTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_PathConstraintSpacingTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::PointAttachment);
extern se::Object *__jsb_spine_PointAttachment_proto; // NOLINT
extern se::Class * __jsb_spine_PointAttachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::RegionAttachment);
extern se::Object *__jsb_spine_RegionAttachment_proto; // NOLINT
extern se::Class * __jsb_spine_RegionAttachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::RotateTimeline);
extern se::Object *__jsb_spine_RotateTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_RotateTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::ScaleTimeline);
extern se::Object *__jsb_spine_ScaleTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_ScaleTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::ShearTimeline);
extern se::Object *__jsb_spine_ShearTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_ShearTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Skeleton);
extern se::Object *__jsb_spine_Skeleton_proto; // NOLINT
extern se::Class * __jsb_spine_Skeleton_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Slot);
extern se::Object *__jsb_spine_Slot_proto; // NOLINT
extern se::Class * __jsb_spine_Slot_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Skin);
extern se::Object *__jsb_spine_Skin_proto; // NOLINT
extern se::Class * __jsb_spine_Skin_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SkeletonBounds);
extern se::Object *__jsb_spine_SkeletonBounds_proto; // NOLINT
extern se::Class * __jsb_spine_SkeletonBounds_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::Polygon);
extern se::Object *__jsb_spine_Polygon_proto; // NOLINT
extern se::Class * __jsb_spine_Polygon_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SkeletonData);
extern se::Object *__jsb_spine_SkeletonData_proto; // NOLINT
extern se::Class * __jsb_spine_SkeletonData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SlotData);
extern se::Object *__jsb_spine_SlotData_proto; // NOLINT
extern se::Class * __jsb_spine_SlotData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::TransformConstraint);
extern se::Object *__jsb_spine_TransformConstraint_proto; // NOLINT
extern se::Class * __jsb_spine_TransformConstraint_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::TransformConstraintData);
extern se::Object *__jsb_spine_TransformConstraintData_proto; // NOLINT
extern se::Class * __jsb_spine_TransformConstraintData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::TransformConstraintTimeline);
extern se::Object *__jsb_spine_TransformConstraintTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_TransformConstraintTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::TranslateTimeline);
extern se::Object *__jsb_spine_TranslateTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_TranslateTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::TwoColorTimeline);
extern se::Object *__jsb_spine_TwoColorTimeline_proto; // NOLINT
extern se::Class * __jsb_spine_TwoColorTimeline_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::VertexAttachment);
extern se::Object *__jsb_spine_VertexAttachment_proto; // NOLINT
extern se::Class * __jsb_spine_VertexAttachment_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::VertexEffect);
extern se::Object *__jsb_spine_VertexEffect_proto; // NOLINT
extern se::Class * __jsb_spine_VertexEffect_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::JitterVertexEffect);
extern se::Object *__jsb_spine_JitterVertexEffect_proto; // NOLINT
extern se::Class * __jsb_spine_JitterVertexEffect_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SwirlVertexEffect);
extern se::Object *__jsb_spine_SwirlVertexEffect_proto; // NOLINT
extern se::Class * __jsb_spine_SwirlVertexEffect_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::ConstraintData);
extern se::Object *__jsb_spine_ConstraintData_proto; // NOLINT
extern se::Class * __jsb_spine_ConstraintData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::VertexEffectDelegate);
extern se::Object *__jsb_spine_VertexEffectDelegate_proto; // NOLINT
extern se::Class * __jsb_spine_VertexEffectDelegate_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SkeletonRenderer);
extern se::Object *__jsb_spine_SkeletonRenderer_proto; // NOLINT
extern se::Class * __jsb_spine_SkeletonRenderer_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SkeletonAnimation);
extern se::Object *__jsb_spine_SkeletonAnimation_proto; // NOLINT
extern se::Class * __jsb_spine_SkeletonAnimation_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SkeletonDataMgr);
extern se::Object *__jsb_spine_SkeletonDataMgr_proto; // NOLINT
extern se::Class * __jsb_spine_SkeletonDataMgr_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SkeletonCacheAnimation);
extern se::Object *__jsb_spine_SkeletonCacheAnimation_proto; // NOLINT
extern se::Class * __jsb_spine_SkeletonCacheAnimation_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(spine::SkeletonCacheMgr);
extern se::Object *__jsb_spine_SkeletonCacheMgr_proto; // NOLINT
extern se::Class * __jsb_spine_SkeletonCacheMgr_class; // NOLINT

// clang-format on
