//
//  NSView+LayoutGuide.h
//  Pods
//
//  Created by Tayphoon on 18.01.17.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "OALayoutGuide.h"

@interface NSView (LayoutGuide)

#ifndef NSAppKitVersionNumber10_9
@property (readonly, strong) OALayoutGuide * layoutMarginsGuide;
#endif

@end
