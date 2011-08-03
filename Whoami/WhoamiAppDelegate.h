//
//  WhoamiAppDelegate.h
//  Whoami
//
//  Created by  Chuns on 11-8-3.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class WhoamiViewController;

@interface WhoamiAppDelegate : UIResponder <UIApplicationDelegate>
{
    CLLocationManager *locationManager;
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) WhoamiViewController *viewController;

@end
