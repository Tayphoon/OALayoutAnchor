//
//  NSView+OALayoutGuideInternals.h
//  Pods
//
//  Created by Tayphoon on 18.01.17.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "OALayoutGuide.h"

@interface NSView (LayoutGuideInternals)

// Dont use these methods, use the one non prefixed with oa
- (OALayoutGuide*)__layoutMarginsGuide;

// This method is called once at app startup
+ (void)addLayoutGuideMethodsIfNeeded;

@end
