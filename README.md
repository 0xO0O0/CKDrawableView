CKDrawableView
==============

Subclass of UIView that accepts a block for the drawing code

```objective-c
HSDrawingView *drawableView = [[[HSDrawingView alloc] initWithFrame:CGRectMake(283, 12,24,24)] autorelease];
drawableView.backgroundColor = [UIColor clearColor];
drawableView.drawBlock = ^(UIView *v, CGContextRef context)
{
  // Outter Stroke of circle
  
  CGRect rect = CGRectMake(4, 4, 24, 24);
  CGContextAddEllipseInRect(context, rect);
  CGContextSetStrokeColorWithColor(context, [UIColor colorWithWhite:0.190 alpha:1.000].CGColor);
  CGContextStrokeEllipseInRect(context, rect);

  CGPoint  startPoint, endPoint;
  
  CGAffineTransform myTransform;
  
  float width   = v.bounds.size.width;
  float height  = v.bounds.size.height;
  
  // Set start point in a scale of 0-1 for x and 0-1 for y. 
  // This will be scaled later to the context's width and height.
  startPoint  = CGPointMake(0.5,0); 

  // Set ending point in same 0-1 scale. As you can see the 
  // gradient will follow a vertical line.
  endPoint    = CGPointMake(0.5,1);
  
  // Create a new scale based on the context's width and height
  myTransform = CGAffineTransformMakeScale (width, height);

  // Concatenates your transform with the actual drawing context
  CGContextConcatCTM (context, myTransform);
  // Save the state so you can restore to it later
  CGContextSaveGState (context);
  
  // Creates a path and on the next three lines you create the circle, 
  // clipping the context so the linear gradient
  CGContextBeginPath (context); 
  
  // gets drwan only inside the circle.
  // 6.28318531 corresponds to 2*pi which is a whole circle 
  // - DO NOT REMOVE - CAUSE U WILL FORGET :-)
  CGContextAddArc (context, .5, .5, .3, 0, 6.28318531, 0); 

  CGContextClosePath (context);
  CGContextClip (context);
  CGColorSpaceRef rgb = CGColorSpaceCreateDeviceRGB();
  CGFloat colors[] =
  {
    0.275,  0.475,  0.631,  0.300,
    0.918,  0.767,  0.542,  0.300,
  };

  CGGradientRef gradient = CGGradientCreateWithColorComponents(rgb, colors, NULL, sizeof(colors)/(sizeof(colors[0])*3));
  CGColorSpaceRelease(rgb);
  
  // draws the gradient, duh
  CGContextDrawLinearGradient(context, gradient, startPoint, endPoint, 0);
  CGGradientRelease(gradient);
  
  // Restore the context to the previously saved 
  // state in case you want to do something else.
  CGContextRestoreGState (context);
};
```
