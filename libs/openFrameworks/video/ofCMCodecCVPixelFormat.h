//
//  pixelFormatUtils.h
//  openFrameworksLib
//
//  Created by inx on 25/12/15.
//
//

#pragma once


#include <CoreMedia/CMFormatDescription.h>

OSType pixelFormatBestGuess(CMVideoCodecType codecType) {
	switch (codecType) {
		case kCMVideoCodecType_422YpCbCr8:
			return kCVPixelFormatType_422YpCbCr8;
		case kCMVideoCodecType_Animation:
			
			break;
		case kCMVideoCodecType_Cinepak:
			
			break;
		case kCMVideoCodecType_JPEG:
			
			break;
		case kCMVideoCodecType_JPEG_OpenDML:
			
			break;
		case kCMVideoCodecType_SorensonVideo:
			
			break;
		case kCMVideoCodecType_SorensonVideo3:
			
			break;
		case kCMVideoCodecType_H263:
			
			break;
		case kCMVideoCodecType_H264:
			return kCVPixelFormatType_420YpCbCr8BiPlanarFullRange;
		case kCMVideoCodecType_HEVC:
			
			break;
		case kCMVideoCodecType_MPEG4Video:
			
			break;
		case kCMVideoCodecType_MPEG2Video:
			
			break;
		case kCMVideoCodecType_MPEG1Video:
			
			break;
			
		case kCMVideoCodecType_DVCNTSC:
			
			break;
		case kCMVideoCodecType_DVCPAL:
			
			break;
		case kCMVideoCodecType_DVCProPAL:
			
			break;
		case kCMVideoCodecType_DVCPro50NTSC:
			
			break;
		case kCMVideoCodecType_DVCPro50PAL:
			
			break;
		case kCMVideoCodecType_DVCPROHD720p60:
			
			break;
		case kCMVideoCodecType_DVCPROHD720p50:
			
			break;
		case kCMVideoCodecType_DVCPROHD1080i60:
			
			break;
		case kCMVideoCodecType_DVCPROHD1080i50:
			
			break;
		case kCMVideoCodecType_DVCPROHD1080p30:
			
			break;
		case kCMVideoCodecType_DVCPROHD1080p25:
			
			break;
			
		case kCMVideoCodecType_AppleProRes4444:
			return kCVPixelFormatType_4444YpCbCrA8;
		case kCMVideoCodecType_AppleProRes422HQ:
			return kCVPixelFormatType_422YpCbCr8;
		case kCMVideoCodecType_AppleProRes422:
			return kCVPixelFormatType_422YpCbCr8;
		case kCMVideoCodecType_AppleProRes422LT:
			return kCVPixelFormatType_422YpCbCr8;
		case kCMVideoCodecType_AppleProRes422Proxy:
			return kCVPixelFormatType_422YpCbCr8;
			
			
		default:
			break;
	}
	
	//default
	return kCVPixelFormatType_422YpCbCr8;
}

const char* getPixelFormatString(OSType pixelformat) {
	switch (pixelformat) {
		case kCVPixelFormatType_1Monochrome:
			return "kCVPixelFormatType_1Monochrome";
			break;
		case kCVPixelFormatType_2Indexed:
			return "kCVPixelFormatType_2Indexed";
			break;
		case kCVPixelFormatType_4Indexed:
			return "kCVPixelFormatType_4Indexed";
			break;
		case kCVPixelFormatType_8Indexed:
			return "kCVPixelFormatType_8Indexed";
			break;
		case kCVPixelFormatType_1IndexedGray_WhiteIsZero:
			return "kCVPixelFormatType_1IndexedGray_WhiteIsZero";
			break;
		case kCVPixelFormatType_2IndexedGray_WhiteIsZero:
			return "kCVPixelFormatType_2IndexedGray_WhiteIsZero";
			break;
		case kCVPixelFormatType_4IndexedGray_WhiteIsZero:
			return "kCVPixelFormatType_4IndexedGray_WhiteIsZero";
			break;
		case kCVPixelFormatType_8IndexedGray_WhiteIsZero:
			return "kCVPixelFormatType_8IndexedGray_WhiteIsZero";
			break;
		case kCVPixelFormatType_16BE555:
			return "kCVPixelFormatType_16BE555";
			break;
		case kCVPixelFormatType_16LE555:
			return "kCVPixelFormatType_16LE555";
			break;
		case kCVPixelFormatType_16LE5551:
			return "kCVPixelFormatType_16LE5551";
			break;
		case kCVPixelFormatType_16BE565:
			return "kCVPixelFormatType_16BE565";
			break;
		case kCVPixelFormatType_16LE565:
			return "kCVPixelFormatType_16LE565";
			break;
		case kCVPixelFormatType_24RGB:
			return "kCVPixelFormatType_24RGB";
			break;
		case kCVPixelFormatType_24BGR:
			return "kCVPixelFormatType_24BGR";
			break;
		case kCVPixelFormatType_32ARGB:
			return "kCVPixelFormatType_32ARGB";
			break;
		case kCVPixelFormatType_32BGRA:
			return "kCVPixelFormatType_32BGRA";
			break;
		case kCVPixelFormatType_32ABGR:
			return "kCVPixelFormatType_32ABGR";
			break;
		case kCVPixelFormatType_32RGBA:
			return "kCVPixelFormatType_32RGBA";
			break;
		case kCVPixelFormatType_64ARGB:
			return "kCVPixelFormatType_64ARGB";
			break;
		case kCVPixelFormatType_48RGB:
			return "kCVPixelFormatType_48RGB";
			break;
		case kCVPixelFormatType_32AlphaGray:
			return "kCVPixelFormatType_32AlphaGray";
			break;
		case kCVPixelFormatType_16Gray:
			return "kCVPixelFormatType_16Gray";
			break;
		case kCVPixelFormatType_30RGB:
			return "kCVPixelFormatType_30RGB";
			break;
		case kCVPixelFormatType_422YpCbCr8:
			return "kCVPixelFormatType_422YpCbCr8";
			break;
		case kCVPixelFormatType_4444YpCbCrA8:
			return "kCVPixelFormatType_4444YpCbCrA8";
			break;
		case kCVPixelFormatType_4444YpCbCrA8R:
			return "kCVPixelFormatType_4444YpCbCrA8R";
			break;
		case kCVPixelFormatType_4444AYpCbCr8:
			return "kCVPixelFormatType_4444AYpCbCr8";
			break;
		case kCVPixelFormatType_4444AYpCbCr16:
			return "kCVPixelFormatType_4444AYpCbCr16";
			break;
		case kCVPixelFormatType_444YpCbCr8:
			return "kCVPixelFormatType_444YpCbCr8";
			break;
		case kCVPixelFormatType_422YpCbCr16:
			return "kCVPixelFormatType_422YpCbCr16";
			break;
		case kCVPixelFormatType_422YpCbCr10:
			return "kCVPixelFormatType_422YpCbCr10";
			break;
		case kCVPixelFormatType_444YpCbCr10:
			return "kCVPixelFormatType_444YpCbCr10";
			break;
		case kCVPixelFormatType_420YpCbCr8Planar:
			return "kCVPixelFormatType_420YpCbCr8Planar";
			break;
		case kCVPixelFormatType_420YpCbCr8PlanarFullRange:
			return "kCVPixelFormatType_420YpCbCr8PlanarFullRange";
			break;
		case kCVPixelFormatType_422YpCbCr_4A_8BiPlanar:
			return "kCVPixelFormatType_422YpCbCr_4A_8BiPlanar";
			break;
		case kCVPixelFormatType_420YpCbCr8BiPlanarVideoRange:
			return "kCVPixelFormatType_420YpCbCr8BiPlanarVideoRange";
			break;
		case kCVPixelFormatType_420YpCbCr8BiPlanarFullRange:
			return "kCVPixelFormatType_420YpCbCr8BiPlanarFullRange";
			break;
		case kCVPixelFormatType_422YpCbCr8_yuvs:
			return "kCVPixelFormatType_422YpCbCr8_yuvs";
			break;
		case kCVPixelFormatType_422YpCbCr8FullRange:
			return "kCVPixelFormatType_422YpCbCr8FullRange";
			break;
		case kCVPixelFormatType_OneComponent8:
			return "kCVPixelFormatType_OneComponent8";
			break;
		case kCVPixelFormatType_TwoComponent8:
			return "kCVPixelFormatType_TwoComponent8";
			break;
		case kCVPixelFormatType_OneComponent16Half:
			return "kCVPixelFormatType_OneComponent16Half";
			break;
		case kCVPixelFormatType_OneComponent32Float:
			return "kCVPixelFormatType_OneComponent32Float";
			break;
		case kCVPixelFormatType_TwoComponent16Half:
			return "kCVPixelFormatType_TwoComponent16Half";
			break;
		case kCVPixelFormatType_TwoComponent32Float:
			return "kCVPixelFormatType_TwoComponent32Float";
			break;
		case kCVPixelFormatType_64RGBAHalf:
			return "kCVPixelFormatType_64RGBAHalf";
			break;
		case kCVPixelFormatType_128RGBAFloat:
			return "kCVPixelFormatType_128RGBAFloat";
			break;
			
			
		default:
			break;
	}
	
	return "no such pixelformat";
}