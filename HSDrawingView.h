//
//  HSDrawingView.h
//  beckoncall
//
//  Created by Anthony Josiah Braun [ @creativeKoder ]
//  Copyright (c) 2012 Heariam Studios, Inc. All rights reserved.
//
/**************************************************************************************
 
 Copyright (c) 2012 Heariam Studios, Inc. [creativeKode®] All rights reserved.
 
 Disclaimer: IMPORTANT:  This [creativeKode®] software is supplied to you by 
 Heariam Studios, Inc. ("[creativeKode®] Brand") in consideration of your agreement 
 to the following terms, and your use, installation, modification or redistribution 
 of this [creativeKode®] software constitutes acceptance of these terms. If you do
 not agree with these terms, please do not use, install, modify or redistribute 
 this [creativeKode®] Branded software.
 
 In consideration of your agreement to abide by the following terms, and subject 
 to these terms, Heariam Studios, Inc. [creativeKode®] Brand grants you a personal, 
 non-exclusive license, under Heariam Studios's copyrights in this original 
 [creativeKode®] Brand (the "[creativeKode®]" Software), to use, reproduce, modify 
 and redistribute the [creativeKode®] Software, with or without modifications, in 
 source and/or binary forms; provided that if you redistribute the [creativeKode®] 
 Software in its entirety and without modifications, you must retain this notice and 
 the following text and disclaimers in all such redistributions of the [creativeKode®] 
 Software. Neither the name, trademarks, service marks or logos of Heariam Studios, Inc. 
 may be used to endorse or promote products derived from the [creativeKode®] Software 
 without specific prior written permission from [creativeKode®].  Except as expressly 
 stated in this notice, no other rights or licenses, express or implied, are granted by 
 Heariam Studios, Inc. herein, including but not limited to any patent rights that may 
 be infringed by your derivative works or by other works in which the [creativeKode®] 
 Software may be incorporated.
 
 The [creativeKode®] Software is provided by Heariam Studios, Inc. on an "AS IS" 
 basis. Heariam Studios, Inc. MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING 
 WITHOUT LIMITATION THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND 
 FITNESS FOR A PARTICULAR PURPOSE, REGARDING THE [creativeKode®] SOFTWARE OR ITS USE 
 AND OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.
 
 IN NO EVENT SHALL Heariam Studios, Inc. NOR THE [creativeKode®] BRAND BE LIABLE FOR 
 ANY SPECIAL, INDIRECT, INCIDENTAL OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED 
 TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; 
 OR BUSINESS INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION, MODIFICATION 
 AND/OR DISTRIBUTION OF THE [creativeKode®] SOFTWARE, HOWEVER CAUSED AND WHETHER UNDER 
 THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE), STRICT LIABILITY OR OTHERWISE, EVEN IF 
 Heariam Studios, Inc. HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
 Copyright (C) 2012 Heariam Studios, Inc. [creativeKode®] All Rights Reserved. 
 
 ******************************************************************************************/

typedef void(^DrawView_DrawBlock)(UIView *v, CGContextRef context);

@interface HSDrawingView : UIView {
//  CGGradientRef gradient;
	NSArray       *colorArray;
}

@property (nonatomic, retain) NSArray            *colorArray;
@property (nonatomic,copy)    DrawView_DrawBlock drawBlock;


//-(void) gradientColorWithRed:(CGFloat)aRed 
//                       green:(CGFloat)aGreen 
//                        blue:(CGFloat)aBlue;

@end
