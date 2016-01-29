//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#pragma once

#import <AVFoundation/AVFoundationExport.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSObject.h>
#import <AVFoundation/AVAudioMixInputParameters.h>
#import <CoreMedia/CMTypes.h>
#import <CoreMedia/CMTime.h>

@class AVAssetTrack;
@class NSString;

AVFOUNDATION_EXPORT_CLASS
@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters <NSCopying, NSMutableCopying>
+ (instancetype)audioMixInputParameters STUB_METHOD;
+ (instancetype)audioMixInputParametersWithTrack:(AVAssetTrack*)track STUB_METHOD;
@property (nonatomic) CMPersistentTrackID trackID STUB_PROPERTY;
- (void)setVolume:(float)volume atTime:(CMTime)time STUB_METHOD;
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(CMTimeRange)timeRange STUB_METHOD;
@property (retain, nonatomic) MTAudioProcessingTapRef audioTapProcessor STUB_PROPERTY;
@property (copy, nonatomic) NSString* audioTimePitchAlgorithm STUB_PROPERTY;
@end