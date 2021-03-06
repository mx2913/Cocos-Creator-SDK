Agora provides ensured quality of experience (QoE) for worldwide Internet-based voice and video communications through a virtual global network optimized for real-time web and mobile-to-mobile applications.

- The [agora]{@link agora} namespace is the entry point of the Agora Cocos Creator SDK providing API methods for applications to quickly start a voice and video call or the live interactive audio and video streaming.
- The [AgoraRtcEvents]{@link AgoraRtcEvents} class reports runtime events to the applications.

During API calls, the SDK may returns error codes and warning codes. See [Error Codes and Warning Codes](https://docs.agora.io/en/Interactive%20Broadcast/error_rtc?platform=Cocos%20Creator).

### Channel Management

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[init]{@link agora.init}</td>
<td>Initializes the Agora engine.</td>
</tr>
<tr>
<td>[initWithAreaCode]{@link agora.initWithAreaCode}</td>
<td>Initializes the Agora engine and specifies the region for connection.</td>
</tr>
<tr>
<td>[release]{@link agora.release}</td>
<td>Releases all resources of the Agora engine.</td>
</tr>
<tr>
<td>[setChannelProfile]{@link agora.setChannelProfile}</td>
<td>Sets the channel profile.</td>
</tr>
<tr>
<td>[setClientRole]{@link agora.setClientRole}</td>
<td>Sets the role of the user.</td>
</tr>
<tr>
<td>[joinChannel]{@link agora.joinChannel}</td>
<td>Allows a user to join a channel.</td>
</tr>
<tr>
<td>[switchChannel]{@link agora.switchChannel}</td>
<td>Switches to a different channel in the live interactive streaming.</td>
</tr>
<tr>
<td>[leaveChannel]{@link agora.leaveChannel}</td>
<td>Allows a user to leave a channel.</td>
</tr>
<tr>
<td>[renewToken]{@link agora.renewToken}</td>
<td>Renews the Token.</td>
</tr>
<tr>
<td>[getConnectionState]{@link agora.getConnectionState}</td>
<td>Gets the current connection state of the SDK.</td>
</tr>
</table>

### Channel Events

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onConnectionStateChanged]{@link AgoraRtcEvents.onConnectionStateChanged}</td>
<td>Occurs when the connection state between the SDK and the server changes.</td>
</tr>
<tr>
<td>[onJoinChannelSuccess]{@link AgoraRtcEvents.onJoinChannelSuccess}</td>
<td>Occurs when a user joins a channel.</td>
</tr>
<tr>
<td>[onRejoinChannelSuccess]{@link AgoraRtcEvents.onRejoinChannelSuccess}</td>
<td>Occurs when a user rejoins the channel.</td>
</tr>
<tr>
<td>[onLeaveChannel]{@link AgoraRtcEvents.onLeaveChannel}</td>
<td>Occurs when a user leaves the channel.</td>
</tr>
<tr>
<td>[onClientRoleChanged]{@link AgoraRtcEvents.onClientRoleChanged}</td>
<td>Occurs when the user role switches in the live interactive streaming.</td>
</tr>
<tr>
<td>[onUserJoined]{@link AgoraRtcEvents.onUserJoined}</td>
<td>Occurs when a remote user (<tt>COMMUNICATION</tt>)/ host (<tt>LIVE_BROADCASTING</tt>) joins the channel.</td>
</tr>
<tr>
<td>[onUserOffline]{@link AgoraRtcEvents.onUserOffline}</td>
<td>Occurs when a remote user (<tt>COMMUNICATION</tt>)/ host (<tt>LIVE_BROADCASTING</tt>) leaves the channel.</td>
</tr>
<tr>
<td>[onNetworkTypeChanged]{@link AgoraRtcEvents.onNetworkTypeChanged}</td>
<td>Occurs when the local network type changes.</td>
</tr>
<tr>
<td>[onConnectionLost]{@link AgoraRtcEvents.onConnectionLost}</td>
<td>Occurs when the SDK cannot reconnect to Agora's edge server 10 seconds after its connection to the server is interrupted.</td>
</tr>
<tr>
<td>[onTokenPrivilegeWillExpire]{@link AgoraRtcEvents onTokenPrivilegeWillExpire}</td>
<td>Occurs when the token expires in 30 seconds.</td>
</tr>
<tr>
<td>[onRequestToken]{@link AgoraRtcEvents onRequestToken}</td>
<td>Occurs when the token expires.</td>
</tr>
</table>

### Audio Management

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[enableAudio]{@link agora.enableAudio}</td>
<td>Enables the audio module.</td>
</tr>
<tr>
<td>[disableAudio]{@link agora.disableAudio}</td>
<td>Disables the audio module.</td>
</tr>
<tr>
<td>[setAudioProfile]{@link agora.setAudioProfile}</td>
<td>Sets the audio parameters and application scenarios.</td>
</tr>
<tr>
<td>[adjustRecordingSignalVolume]{@link agora.adjustRecordingSignalVolume}</td>
<td>Adjusts the recording volume.</td>
</tr>
<tr>
<td>[adjustUserPlaybackSignalVolume]{@link agora.adjustUserPlaybackSignalVolume}</td>
<td>Adjusts the playback volume of a specified remote user.</td>
</tr>
<tr>
<td>[adjustPlaybackSignalVolume]{@link agora.adjustPlaybackSignalVolume}</td>
<td>Adjusts the playback volume of all remote users.</td>
</tr>
<tr>
<td>[enableLocalAudio]{@link agora.enableLocalAudio}</td>
<td>Enables/Disables the local audio sampling.</td>
</tr>
<tr>
<td>[muteLocalAudioStream]{@link agora.muteLocalAudioStream}</td>
<td>Stops/Resumes sending the local audio stream.</td>
</tr>
<tr>
<td>[muteRemoteAudioStream]{@link agora.muteRemoteAudioStream}</td>
<td>Stops/Resumes receiving the audio stream from a specified remote user.</td>
</tr>
<tr>
<td>[muteAllRemoteAudioStreams]{@link agora.muteAllRemoteAudioStreams}</td>
<td>Stops/Resumes receiving all remote users' audio streams.</td>
</tr>
<tr>
<td>[setDefaultMuteAllRemoteAudioStreams]{@link agora.setDefaultMuteAllRemoteAudioStreams}</td>
<td>Stops/Resumes receiving all remote users' audio streams by default.</td>
</tr>
</table>

### Video Management

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[enableVideo]{@link agora.enableVideo}</td>
<td>Enables the video module.</td>
</tr>
<tr>
<td>[disableVideo]{@link agora.disableVideo}</td>
<td>Disables the video module.</td>
</tr>
<tr>
<td>[setVideoEncoderConfiguration]{@link agora.setVideoEncoderConfiguration}</td>
<td>Sets the video encoder configuration.</td>
</tr>
<tr>
<td>[startPreview]{@link agora.startPreview}</td>
<td>Starts the local video preview before joining the channel.</td>
</tr>
<tr>
<td>[stopPreview]{@link agora.stopPreview}</td>
<td>Stops the local video preview and disables video.</td>
<tr>
<td>[enableLocalVideo]{@link agora.enableLocalVideo}</td>
<td>Enables/Disables the local video capture.</td>
</tr>
<tr>
<td>[muteLocalVideoStream]{@link agora.muteLocalVideoStream}</td>
<td>Stops/Resumes sending the local video stream.</td>
</tr>
<tr>
<td>[muteRemoteVideoStream]{@link agora.muteRemoteVideoStream}</td>
<td>Stops/Resumes receiving the video stream from a specified remote user.</td>
</tr>
<tr>
<td>[muteAllRemoteVideoStreams]{@link agora.muteAllRemoteVideoStreams}</td>
<td>Stops/Resumes receiving all video stream from a specified remote user.</td>
</tr>
<tr>
<td>[setDefaultMuteAllRemoteVideoStreams]{@link agora.setDefaultMuteAllRemoteVideoStreams}</td>
<td>Stops/Resumes receiving all remote users' video streams by default.</td>
</tr>
</table>

### Local Media Events

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onLocalAudioStateChanged]{@link AgoraRtcEvents.onLocalAudioStateChanged}</td>
<td>Occurs when the local audio state changes.</td>
</tr>
<tr>
<td>[onLocalVideoStateChanged]{@link AgoraRtcEvents.onLocalVideoStateChanged}</td>
<td>Occurs when the local video state changes.</td>
</tr>
<tr>
<td>[onFirstLocalAudioFramePublished]{@link AgoraRtcEvents.onFirstLocalAudioFramePublished}</td>
<td>Occurs when the first audio frame is published.</td>
</tr>
<tr>
<td>[onFirstLocalVideoFramePublished]{@link AgoraRtcEvents.onFirstLocalVideoFramePublished}</td>
<td>Occurs when the first video frame is published.</td>
</tr>
<tr>
<td>[onFirstLocalVideoFrame]{@link AgoraRtcEvents.onFirstLocalVideoFrame}</td>
<td>Occurs when the first local video frame is rendered.</td>
</tr>
<tr>
<td>[onAudioPublishStateChanged]{@link AgoraRtcEvents.onAudioPublishStateChanged}</td>
<td>Occurs when the audio publishing state changes. </td>
</tr>
<tr>
<td>[onVideoPublishStateChanged]{@link AgoraRtcEvents.onVideoPublishStateChanged}</td>
<td>Occurs when the video publishing state changes. </td>
</tr>
</table>

### Remote Media Events

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onRemoteAudioStateChanged]{@link AgoraRtcEvents.onRemoteAudioStateChanged}</td>
<td>Occurs when the remote audio state changes.</td>
</tr>
<tr>
<td>[onRemoteAudioStateChanged]{@link AgoraRtcEvents.onRemoteAudioStateChanged}</td>
<td>Occurs when the remote audio state changes.</td>
</tr>
<tr>
<td>[onRemoteVideoStateChanged]{@link AgoraRtcEvents.onRemoteVideoStateChanged}</td>
<td>Occurs when the remote video state changes.</td>
</tr>
<tr>
<td>[onUserMuteVideo]{@link AgoraRtcEvents.onUserMuteVideo}</td>
<td>Occurs when a remote user's video stream playback pauses/resumes.</td>
</tr>
<tr>
<td>[onFirstRemoteVideoFrame]{@link AgoraRtcEvents.onFirstRemoteVideoFrame}</td>
<td>Occurs when the first remote video frame is rendered.</td>
</tr>
<tr>
<td>[onAudioSubscribeStateChanged]{@link AgoraRtcEvents.onAudioSubscribeStateChanged}</td>
<td>Occurs when the audio subscribing state changes.</td>
</tr>
<tr>
<td>[onVideoSubscribeStateChanged]{@link AgoraRtcEvents.onVideoSubscribeStateChanged}</td>
<td>Occurs when the audio subscribing state changes. </td>
</tr>
</table>

### Statistics Events

> After joining a channel, SDK triggers this group of callbacks once every two seconds.

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onRtcStats]{@link AgoraRtcEvents.onRtcStats}</td>
<td>Reports the statistics of the current call.</td>
</tr>
<tr>
<td>[onNetworkQuality]{@link AgoraRtcEvents.onNetworkQuality}</td>
<td>Reports the network quality of each user.</td>
</tr>
<tr>
<td>[onLocalAudioStats]{@link AgoraRtcEvents.onLocalAudioStats}</td>
<td>Reports the statistics of the local audio stream.</td>
</tr>
<tr>
<td>[onRemoteAudioStats]{@link AgoraRtcEvents.onRemoteAudioStats}</td>
<td>Reports the statistics of the audio stream from each remote user/host.</td>
</tr>
<tr>
<td>[onRemoteVideoStats]{@link AgoraRtcEvents.onRemoteVideoStats}</td>
<td>Reports the statistics of the video stream from each remote user/host.</td>
</tr>
</table>

### Video Pre-process and Post-process

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[setBeautyEffectOptions]{@link agora.setBeautyEffectOptions}</td>
<td>Sets the image enhancement options.</td>
</tr>
</table>

### Audio File Playback and Mixing

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[startAudioMixing]{@link agora.startAudioMixing}</td>
<td>Starts playing and mixing the music file.</td>
</tr>
<tr>
<td>[stopAudioMixing]{@link agora.stopAudioMixing}</td>
<td>Stops playing and mixing the music file.</td>
</tr>
<tr>
<td>[pauseAudioMixing]{@link agora.pauseAudioMixing}</td>
<td>Pauses playing and mixing the music file.</td>
</tr>
<tr>
<td>[resumeAudioMixing]{@link agora.resumeAudioMixing}</td>
<td>Resumes playing and mixing the music file.</td>
</tr>
<tr>
<td>[adjustAudioMixingVolume]{@link agora.adjustAudioMixingVolume}</td>
<td>Adjusts the volume during audio mixing.</td>
</tr>
<tr>
<td>[adjustAudioMixingPlayoutVolume]{@link agora.adjustAudioMixingPlayoutVolume}</td>
<td>Adjusts the volume of audio mixing for local playback.</td>
</tr>
<tr>
<td>[adjustAudioMixingPublishVolume]{@link agora.adjustAudioMixingPublishVolume}</td>
<td>Adjusts the volume of audio mixing for remote playback.</td>
</tr>
<tr>
<td>[setAudioMixingPitch]{@link agora.setAudioMixingPitch}</td>
<td>Sets the audio mixing pitch.</td>
</tr>
<tr>
<td>[getAudioMixingPlayoutVolume]{@link agora.getAudioMixingPlayoutVolume}</td>
<td>Gets the audio mixing volume for local playback.</td>
</tr>
<tr>
<td>[getAudioMixingPublishVolume]{@link agora.getAudioMixingPublishVolume}</td>
<td>Gets the audio mixing volume for publishing.</td>
</tr>
<tr>
<td>[getAudioMixingDuration]{@link agora.getAudioMixingDuration}</td>
<td>Gets the duration (ms) of the music file.</td>
</tr>
<tr>
<td>[getAudioMixingCurrentPosition]{@link agora.getAudioMixingCurrentPosition}</td>
<td>Gets the playback position (ms) of the music file.</td>
</tr>
<tr>
<td>[setAudioMixingPosition]{@link agora.setAudioMixingPosition}</td>
<td>Sets the playback position of the music file.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onAudioMixingStateChanged]{@link AgoraRtcEvents.onAudioMixingStateChanged}</td>
<td>Occurs when the state of the local user's audio mixing file changes.</td>
</tr>
<tr>
<td>[onRemoteAudioMixingBegin]{@link AgoraRtcEvents.onRemoteAudioMixingBegin}</td>
<td>Occurs when a remote user starts audio mixing.</td>
</tr>
<tr>
<td>[onRemoteAudioMixingEnd]{@link AgoraRtcEvents.onRemoteAudioMixingEnd}</td>
<td>Occurs when a remote user finishes audio mixing.</td>
</tr>
</table>

### Audio Effect Playback

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[getEffectsVolume]{@link agora.getEffectsVolume}</td>
<td>Gets the volume of the audio effects.</td>
</tr>
<tr>
<td>[setEffectsVolume]{@link agora.setEffectsVolume}</td>
<td>Sets the volume of the audio effects.</td>
</tr>
<tr>
<td>[setVolumeOfEffect]{@link agora.setVolumeOfEffect}</td>
<td>Sets the volume of the audio effect.</td>
</tr>
<tr>
<td>[playEffect]{@link agora.playEffect}</td>
<td>Plays a specified audio effect.</td>
</tr>
<tr>
<td>[stopEffect]{@link agora.stopEffect}</td>
<td>Stops playing a specified audio effect.</td>
</tr>
<tr>
<td>[stopAllEffects]{@link agora.stopAllEffects}</td>
<td>Stops playing all audio effects.</td>
</tr>
<tr>
<td>[preloadEffect]{@link agora.preloadEffect}</td>
<td>Preloads a specified audio effect file into the memory.</td>
</tr>
<tr>
<td>[unloadEffect]{@link agora.unloadEffect}</td>
<td>Releases a specified audio effect from the memory.</td>
</tr>
<tr>
<td>[pauseEffect]{@link agora.pauseEffect}</td>
<td>Pauses a specified audio effect.</td>
</tr>
<tr>
<td>[pauseAllEffects]{@link agora.pauseAllEffects}</td>
<td>Pauses all audio effects.</td>
</tr>
<tr>
<td>[resumeEffect]{@link agora.resumeEffect}</td>
<td>Resumes playing a specified audio effect.</td>
</tr>
<tr>
<td>[resumeAllEffects]{@link agora.resumeAllEffects}</td>
<td>Resumes playing all audio effects.</td>
</tr>
</table>
<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onAudioEffectFinished]{@link AgoraRtcEvents.onAudioEffectFinished}</td>
<td>Occurs when the local audio effect playback finishes.</td>
</tr>
</table>

### Voice Changer and Reverberation

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[setLocalVoiceChanger]{@link agora.setLocalVoiceChanger}</td>
<td>Sets the local voice changer option.</td>
</tr>
<tr>
<td>[setLocalVoiceReverbPreset]{@link agora.setLocalVoiceReverbPreset}</td>
<td>Sets the preset local voice reverberation effect.</td>
</tr>
<tr>
<td>[setLocalVoicePitch]{@link agora.setLocalVoicePitch}</td>
<td>Changes the voice pitch of the local speaker.</td>
</tr>
<tr>
<td>[setLocalVoiceEqualization]{@link agora.setLocalVoiceEqualization}</td>
<td>Sets the local voice equalization effect.</td>
</tr>
<tr>
<td>[setLocalVoiceReverb]{@link agora.setLocalVoiceReverb}</td>
<td>Sets the local voice reverberation.</td>
</tr>
</table>

### Sound Position Indication

<table>
<tr>
<th>Method</th>
<th>Description</th>
<tr>
<td>[enableSoundPositionIndication]{@link agora.enableSoundPositionIndication}</td>
<td>Enables/Disables stereo panning for remote users.</td>
</tr>
<tr>
<td>[setRemoteVoicePosition]{@link agora.setRemoteVoicePosition}</td>
<td>Sets the sound position and gain of a remote user.</td>
</tr>
</table>

### CDN Publisher

> This group of methods apply to live interactive streaming only.

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[setLiveTranscoding]{@link agora.setLiveTranscoding}</td>
<td>Sets the video layout and audio for CDN live.</td>
</tr>
<tr>
<td>[addPublishStreamUrl]{@link agora.addPublishStreamUrl}</td>
<td>Adds a CDN stream address.</td>
</tr>
<tr>
<td>[removePublishStreamUrl]{@link agora.removePublishStreamUrl}</td>
<td>Removes a CDN stream address.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onRtmpStreamingStateChanged]{@link AgoraRtcEvents.onRtmpStreamingStateChanged}</td>
<td>Occurs when the state of the RTMP streaming changes.</td>
</tr>
<tr>
<td>[onRtmpStreamingEvent]{@link AgoraRtcEvents.onRtmpStreamingEvent}</td>
<td>Reports events during the RTMP streaming.</td>
</tr>
<tr>
<td>[onTranscodingUpdated]{@link AgoraRtcEvents.onTranscodingUpdated}</td>
<td>Occurs when the publisher's transcoding settings are updated.</td>
</tr>
</table>

### Media Stream Relay Across Channels

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[startChannelMediaRelay]{@link agora.startChannelMediaRelay}</td>
<td>Starts to relay media streams across channels.</td>
</tr>
<tr>
<td>[updateChannelMediaRelay]{@link agora.updateChannelMediaRelay}</td>
<td>Updates the channels for media stream relay.</td>
</tr>
<tr>
<td>[stopChannelMediaRelay]{@link agora.stopChannelMediaRelay}</td>
<td>Stops the media stream relay.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onChannelMediaRelayStateChanged]{@link AgoraRtcEvents.onChannelMediaRelayStateChanged}</td>
<td>Occurs when the state of the media stream relay changes.</td>
</tr>
<tr>
<td>[onChannelMediaRelayEvent]{@link AgoraRtcEvents.onChannelMediaRelayEvent}</td>
<td>Reports events during the media stream relay.</td>
</tr>
</table>

### Audio Volume Indication

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[enableAudioVolumeIndication]{@link agora.enableAudioVolumeIndication}</td>
<td>Enables the [onAudioVolumeIndication]{@link AgoraRtcEvents.onAudioVolumeIndication} callback at a set time interval to report on which users are speaking and the speakers' volume.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onAudioVolumeIndication]{@link AgoraRtcEvents.onAudioVolumeIndication}</td>
<td>Reports which users are speaking, the speakers' volumes, and whether the local user is speaking.</td>
</tr>
<tr>
<td>[onActiveSpeaker]{@link AgoraRtcEvents.onActiveSpeaker}</td>
<td>Occurs when the most active speaker is detected.</td>
</tr>
</table>

### Face Detection

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[enableFaceDetection]{@link agora.enableFaceDetection}</td>
<td>Enables/Disables face detection for the local user.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onFacePositionChanged]{@link AgoraRtcEvents.onFacePositionChanged}</td>
<td>Reports the face detection result of the local user.</td>
</tr>
</table>

### Audio Routing Control

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[setDefaultAudioRouteToSpeakerphone]{@link agora.setDefaultAudioRouteToSpeakerphone}</td>
<td>Sets the default audio playback route.</td>
</tr>
<tr>
<td>[setEnableSpeakerphone]{@link agora.setEnableSpeakerphone}</td>
<td>Enables/Disables the audio playback route to the speakerphone.</td>
</tr>
<tr>
<td>[isSpeakerphoneEnabled]{@link agora.isSpeakerphoneEnabled}</td>
<td>Checks whether the speakerphone is enabled.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onAudioRouteChanged]{@link AgoraRtcEvents.onAudioRouteChanged}</td>
<td>Occurs when the local audio route changes.</td>
</tr>
</table>

### In-ear Monitoring

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[enableInEarMonitoring]{@link agora.enableInEarMonitoring}</td>
<td>Enables in-ear monitoring.</td>
</tr>
<tr>
<td>[setInEarMonitoringVolume]{@link agora.setInEarMonitoringVolume}</td>
<td>Sets the volume of the in-ear monitor.</td>
</tr>
</table>

### Dual Video Stream Mode

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[enableDualStreamMode]{@link agora.enableDualStreamMode}</td>
<td>Sets the stream mode to single- (default) or dual-stream mode.</td>
</tr>
<tr>
<td>[setRemoteVideoStreamType]{@link agora.setRemoteVideoStreamType}</td>
<td>Sets the remote user’s video stream type received by the local user when the remote user sends dual streams.</td>
</tr>
<tr>
<td>[setRemoteDefaultVideoStreamType]{@link agora.setRemoteDefaultVideoStreamType}</td>
<td>Sets the default video-stream type for the video received by the local user when the remote user sends dual streams.</td>
</tr>
</table>

### Stream Fallback

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[setLocalPublishFallbackOption]{@link agora.setLocalPublishFallbackOption}</td>
<td>Sets the fallback option for the published video stream under unreliable network conditions.</td>
</tr>
<tr>
<td>[setRemoteSubscribeFallbackOption]{@link agora.setRemoteSubscribeFallbackOption}</td>
<td>Sets the fallback option for the remote stream under unreliable network conditions.</td>
</tr>
<tr>
<td>[setRemoteUserPriority]{@link agora.setRemoteUserPriority}</td>
<td>Prioritizes a remote user's stream. </td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onLocalPublishFallbackToAudioOnly]{@link AgoraRtcEvents.onLocalPublishFallbackToAudioOnly}</td>
<td>Occurs: <p><ul><li>When the published media stream falls back to an audio-only stream due to poor network conditions.</li><li>When the published media stream switches back to the video after the network conditions improve.</li></ul></p></td>
</tr>
<tr>
<td>[onRemoteSubscribeFallbackToAudioOnly]{@link AgoraRtcEvents.onRemoteSubscribeFallbackToAudioOnly}</td>
<td>Occurs: <p><ul><li>When the remote media stream falls back to audio-only due to poor network conditions. </li><li>When the remote media stream switches back to the video after the network conditions improve.</li></ul></p></td>
</tr>
</table>

### Pre-call Network Test

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[startEchoTest]{@link agora.startEchoTest}</td>
<td>Starts an audio call test.</td>
</tr>
<tr>
<td>[stopEchoTest]{@link agora.stopEchoTest}</td>
<td>Stops the audio call test.</td>
</tr>
<tr>
<td>[enableLastmileTest]{@link agora.enableLastmileTest}</td>
<td>Enables the network connection quality test.</td>
</tr>
<tr>
<td>[disableLastmileTest]{@link agora.disableLastmileTest}</td>
<td>Disables the network connection quality test.</td>
</tr>
<tr>
<td>[startLastmileProbeTest]{@link agora.startLastmileProbeTest}</td>
<td>Starts the last-mile network probe test.</td>
</tr>
<tr>
<td>[stopLastmileProbeTest]{@link agora.stopLastmileProbeTest}</td>
<td>Stops the last-mile network probe test.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onLastmileQuality]{@link AgoraRtcEvents.onLastmileQuality}</td>
<td>Reports the last mile network quality of the local user before the user joins the channel.</td>
</tr>
<tr>
<td>[onLastmileProbeResult]{@link AgoraRtcEvents.onLastmileProbeResult}</td>
<td>Reports the last-mile network probe result.</td>
</tr>
</table>

### Media Metadata

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[registerMediaMetadataObserver]{@link agora.registerMediaMetadataObserver}</td>
<td>Registers the metadata observer.</td>
</tr>
<tr>
<td>[sendMetadata]{@link agora.sendMetadata}</td>
<td>Sends the metadata.</td>
</tr>
<tr>
<td>[setMaxMetadataSize]{@link agora.setMaxMetadataSize}</td>
<td>Sets the maximum size of the metadata.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onMetadataReceived]{@link AgoraRtcEvents.onMetadataReceived}</td>
<td>Occurs when the local user receives the metadata.</td>
</tr>
</table>

### Watermark

> This group of methods apply to live interactive streaming only.

<table>
<tr>
<th>Method</th>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[addVideoWatermark]{@link agora.addVideoWatermark}</td>
<td>Adds a watermark image to the local video stream.</td>
</tr>
<tr>
<td>[clearVideoWatermarks]{@link agora.clearVideoWatermarks}</td>
<td>Removes the added watermark image from the video stream.</td>
</tr>
</table>

### Encryption

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[enableEncryption]{@link agora.enableEncryption}</td>
<td>Enables/Disables the built-in encryption.</td>
</tr>
<tr>
<td>[registerPacketObserver]{@link agora.registerPacketObserver}</td>
<td>Registers a packet observer.</td>
</tr>
</table>


### Audio Recorder

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[startAudioRecording]{@link agora.startAudioRecording}</td>
<td>Starts an audio recording on the client.</td>
</tr>
<tr>
<td>[stopAudioRecording]{@link agora.stopAudioRecording}</td>
<td>Stops an audio recording on the client.</td>
</tr>
</table>

### Inject an Online Media Stream

> This group of methods apply to live interactive streaming only.

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[addInjectStreamUrl]{@link agora.addInjectStreamUrl}</td>
<td>Adds an online media stream to the live interactive streaming.</td>
</tr>
<tr>
<td>[removeInjectStreamUrl]{@link agora.removeInjectStreamUrl}</td>
<td>Removes the online media stream from the live interactive streaming.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onStreamInjectedStatus]{@link AgoraRtcEvents.onStreamInjectedStatus}</td>
<td>Reports the status of the injected online media stream.</td>
</tr>
</table>

### Camera Control

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[switchCamera]{@link agora.switchCamera}</td>
<td>Switches between front and rear cameras.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onCameraFocusAreaChanged]{@link AgoraRtcEvents.onCameraFocusAreaChanged}</td>
<td>Occurs when the camera focus area changes.</td>
</tr>
<tr>
<td>[onCameraExposureAreaChanged]{@link AgoraRtcEvents.onCameraExposureAreaChanged}</td>
<td>Occurs when the camera exposure area changes.</td>
</tr>
<tr>
</table>

### Device Manager

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onAudioDeviceStateChanged]{@link AgoraRtcEvents.onAudioDeviceStateChanged}</td>
<td>Occurs when the audio device state changes.</td>
</tr>
<td>[onVideoDeviceStateChanged]{@link AgoraRtcEvents.onVideoDeviceStateChanged}</td>
<td>Occurs when the video device state changes.</td>
</tr>
<tr>
<td>[onAudioDeviceVolumeChanged]{@link AgoraRtcEvents.onAudioDeviceVolumeChanged}</td>
<td>Occurs when the volume of the playback, microphone, or application changes.</td>
</tr>
</table>

### Stream Message

<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[createDataStream]{@link agora.createDataStream}</td>
<td>Creates a data stream.</td>
</tr>
<tr>
<td>[sendStreamMessage]{@link agora.sendStreamMessage}</td>
<td>Sends data stream messages.</td>
</tr>
</table>

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onStreamMessage]{@link AgoraRtcEvents.onStreamMessage}</td>
<td>Occurs when the local user receives a remote data stream within five seconds.</td>
</tr>
<tr>
<td>[onStreamMessageError]{@link AgoraRtcEvents.onStreamMessageError}</td>
<td>Occurs when the local user fails to receive the remote data stream.</td>
</tr>
</table>

### Miscellaneous Video Control
<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[setCameraCapturerConfiguration]{@link agora.setCameraCapturerConfiguration}</td>
<td>Sets the camera capturer configuration.</td>
</tr>
</table>

### Miscellaneous Methods
<table>
<tr>
<th>Method</th>
<th>Description</th>
</tr>
<tr>
<td>[sendCustomReportMessage]{@link agora.sendCustomReportMessage}</td>
<td>Reports customized messages.</td>
</tr>
<tr>
<td>[getCallId]{@link agora.getCallId}</td>
<td>Gets the current call ID.</td>
</tr>
<tr>
<td>[rate]{@link agora.rate}</td>
<td>Allows the user to rate the call and is called after the call ends.</td>
</tr>
<tr>
<td>[complain]{@link agora.complain}</td>
<td>Allows a user to complain about the call quality after a call ends.</td>
</tr>
<tr>
<td>[getVersion]{@link agora.getVersion}</td>
<td>Gets the SDK version number.</td>
</tr>
<tr>
<td>[setLogFile]{@link agora.setLogFile}</td>
<td>Specifies an SDK output log file.</td>
</tr>
<tr>
<td>[setLogFilter]{@link agora.setLogFilter}</td>
<td>Sets the output log level of the SDK.</td>
</tr>
<tr>
<td>[setLogFileSize]{@link agora.setLogFileSize}</td>
<td>Sets the log file size (KB).</td>
</tr>
<tr>
<td>[getErrorDescription]{@link agora.getErrorDescription}</td>
<td>Gets the warning or error description.</td>
</tr>
</table>


### Miscellaneous Events

<table>
<tr>
<th>Event</th>
<th>Description</th>
</tr>
<tr>
<td>[onWarning]{@link AgoraRtcEvents.onWarning}</td>
<td>Reports a warning during SDK runtime.</td>
</tr>
<tr>
<td>[onError]{@link AgoraRtcEvents.onError}</td>
<td>Reports an error during SDK runtime.</td>
</tr>
<tr>
<td>[onApiCallExecuted]{@link AgoraRtcEvents onApiCallExecuted}</td>
<td>Occurs when a method is executed.</td>
</tr>
</table>