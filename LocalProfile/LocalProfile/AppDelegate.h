//
//  AppDelegate.h
//  LocalProfile
//
//  Created by Jonathan King on 26/03/2014.
//  Copyright (c) 2014 Jonathan King. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HTTPServer;

UIBackgroundTaskIdentifier backgroundTask;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic, readonly) HTTPServer *httpServer;

@end
