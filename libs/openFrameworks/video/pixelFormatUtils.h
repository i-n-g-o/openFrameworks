//
//  pixelFormatUtils.h
//  openFrameworksLib
//
//  Created by inx on 25/12/15.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>

@interface pixelFormatUtils : NSObject

+ (OSType)pixelFormatBestGuess:(CMVideoCodecType)codecType;
+ (NSString*)getPixelFormatString:(OSType)pixelFormat;

@end
