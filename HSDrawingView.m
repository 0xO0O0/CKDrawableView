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

- (void)drawRect:(CGRect)rect
{
  [super drawRect:rect];
  
  CGContextRef context = UIGraphicsGetCurrentContext();
  
  if(self.drawBlock)
    self.drawBlock(self, context);
}

@end
