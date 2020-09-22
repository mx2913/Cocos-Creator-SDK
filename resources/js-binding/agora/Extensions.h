//
// Created by LXH on 2020/8/7.
//

#pragma once

#include "IAgoraRtcEngine.h"
#include "scripting/js-bindings/manual/jsb_global.h"

namespace agora {
namespace common {
se::Value toSeValue(const char *byteValue, int length);

se::Value toSeValue(const rtc::RtcStats &rtcStats);

se::Value toSeValue(const rtc::AudioVolumeInfo &audioVolumeInfo);

se::Value toSeValue(const rtc::AudioVolumeInfo *audioVolumeInfo, int length);

se::Value toSeValue(const rtc::LastmileProbeResult &lastmileProbeResult);

se::Value
toSeValue(const rtc::LastmileProbeOneWayResult &lastmileProbeOneWayResult);

se::Value toSeValue(const rtc::LocalVideoStats &localVideoStats);

se::Value toSeValue(const rtc::RemoteVideoStats &remoteVideoStats);

se::Value toSeValue(const rtc::LocalAudioStats &localAudioStats);

se::Value toSeValue(const rtc::RemoteAudioStats &remoteAudioStats);

se::Value toSeValue(const rtc::UserInfo &userInfo);

se::Value toSeValue(const rtc::Rectangle &rectangle);

se::Value toSeValue(const rtc::Rectangle *rectangle, int length);

se::Value toSeValue(const rtc::IMetadataObserver::Metadata &metadata);
} // namespace common
} // namespace agora