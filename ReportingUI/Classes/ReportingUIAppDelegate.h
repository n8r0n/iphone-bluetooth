//
//  test5AppDelegate.h
//  test5
//
//  Created by svp on 8/7/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface test5AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
}

+ (UINavigationController*) navController;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController* navCt;

@end
