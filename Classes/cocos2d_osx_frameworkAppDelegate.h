//
//  cocos2d_osx_frameworkAppDelegate.h
//  cocos2d-osx-framework
//
//  Created by Mio Nilsson on 12/21/10.
//  Copyright Eskipol 2010. All rights reserved.
//

#import "cocos2d.h"

@interface cocos2d_osx_frameworkAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	MacGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet MacGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
