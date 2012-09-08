//
//  HSDrawingView.m
//  beckoncall
//
//  Created by Anthony Braun on 2/27/12.
//  Copyright (c) 2012 Heariam Studios, Inc. All rights reserved.
//

#import "HSDrawingView.h"

@implementation HSDrawingView

@synthesize drawBlock, colorArray;

- (void)dealloc
{
  [drawBlock release], drawBlock = nil;
  [super dealloc];
}

//-(void) gradientColorWithRed:(CGFloat)aRed green:(CGFloat)aGreen blue:(CGFloat)aBlue
//{
//	CGColorSpaceRef rgb = CGColorSpaceCreateDeviceRGB();
//	colorArray = [[NSArray arrayWithObjects:[NSNumber numberWithFloat:aRed],[NSNumber numberWithFloat:aGreen],[NSNumber numberWithFloat:aBlue],nil] retain];
//	CGFloat colors[] =
//	{
//		aRed, aGreen, aBlue, 1,
//		0, 1, 1, 1.0,
//	};
//	CGGradientRef gradient = CGGradientCreateWithColorComponents(rgb, colors, NULL, sizeof(colors)/(sizeof(colors[0])*3));
//	CGColorSpaceRelease(rgb);
//  
//	self.backgroundColor = [UIColor clearColor];
//  CGGradientRelease(gradient);
//}

- (void)drawRect:(CGRect)rect
{
  [super drawRect:rect];
  
  CGContextRef context = UIGraphicsGetCurrentContext();
  
  if(self.drawBlock)
    self.drawBlock(self, context);
}

@end
