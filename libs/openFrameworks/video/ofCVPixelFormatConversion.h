//
//  ofCVPixelFormatConversion.h
//  openFrameworksLib
//
//  Created by inx on 25/12/15.
//
//

#pragma once


#include <CoreMedia/CMFormatDescription.h>
#include "ofConstants.h"

OSType getCVPixelFormat(ofPixelFormat format) {
	switch (format) {
		case OF_PIXELS_GRAY:
			return kCVPixelFormatType_OneComponent8;
		case OF_PIXELS_GRAY_ALPHA:
			return kCVPixelFormatType_TwoComponent8;
			
		case OF_PIXELS_RGB:
			return kCVPixelFormatType_24RGB;
		case OF_PIXELS_BGR:
			return kCVPixelFormatType_24BGR;
		case OF_PIXELS_RGBA:
			return kCVPixelFormatType_32RGBA;
		case OF_PIXELS_BGRA:
			return kCVPixelFormatType_32BGRA;
			
		case OF_PIXELS_RGB565:
			return kCVPixelFormatType_16BE565; //kCVPixelFormatType_16LE565? whats the difference?
			
		case OF_PIXELS_NV12:	// 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling
		case OF_PIXELS_NV21:	// As NV12 with U and V reversed in the interleaved plane
			return kCVPixelFormatType_420YpCbCr8BiPlanarFullRange;
		case OF_PIXELS_YV12:	// 8 bit Y plane followed by 8 bit 2x2 subsampled V and U planes.
		case OF_PIXELS_I420:	// 8 bit Y plane followed by 8 bit 2x2 subsampled U and V planes.
			return kCVPixelFormatType_420YpCbCr8BiPlanarFullRange;
		case OF_PIXELS_YUY2:	// YUV 4:2:2 as for UYVY but with different component ordering within the u_int32 macropixel.
		case OF_PIXELS_UYVY:	// YUV 4:2:2 (Y sample at every pixel, U and V sampled at every second pixel horizontally on each line). A macropixel contains 2 pixels in 1 u_int32.
			return kCVPixelFormatType_422YpCbCr8;
			
		case OF_PIXELS_Y:
		case OF_PIXELS_U:
		case OF_PIXELS_V:
			return kCVPixelFormatType_OneComponent8;
		case OF_PIXELS_UV:
		case OF_PIXELS_VU:
			return kCVPixelFormatType_TwoComponent8;
			
		case OF_PIXELS_ARGB:
			return kCVPixelFormatType_32ARGB;
			
		case OF_PIXELS_NATIVE:
#ifdef TARGET_IOS
			return kCVPixelFormatType_32BGRA;
#else
			return kCVPixelFormatType_32ARGB;
#endif
			
		default:
			break;
	}
	
	return kCVPixelFormatType_32ARGB;
}


ofPixelFormat getOFPixelFormat(OSType format) {
	switch (format) {
		case kCVPixelFormatType_OneComponent8:
			return OF_PIXELS_GRAY;
		case kCVPixelFormatType_TwoComponent8:
			return OF_PIXELS_GRAY_ALPHA;
			
		case kCVPixelFormatType_24RGB:
			return OF_PIXELS_RGB;
		case kCVPixelFormatType_24BGR:
			return OF_PIXELS_BGR;
		case kCVPixelFormatType_32RGBA:
			return OF_PIXELS_RGBA;
		case kCVPixelFormatType_32BGRA:
			return OF_PIXELS_BGRA;
		case kCVPixelFormatType_32ARGB:
			return OF_PIXELS_ARGB;
			
		case kCVPixelFormatType_16LE565:
		case kCVPixelFormatType_16BE565:
			return OF_PIXELS_RGB565;
			
		case kCVPixelFormatType_420YpCbCr8PlanarFullRange:
		case kCVPixelFormatType_420YpCbCr8BiPlanarFullRange:
		case kCVPixelFormatType_420YpCbCr8BiPlanarVideoRange:
			return OF_PIXELS_I420;
			
		case kCVPixelFormatType_422YpCbCr8_yuvs:
		case kCVPixelFormatType_422YpCbCr8FullRange:
		case kCVPixelFormatType_422YpCbCr8:
			return OF_PIXELS_UYVY;
			
			
		default:
			break;
	}
	
	return OF_PIXELS_UNKNOWN;
}
