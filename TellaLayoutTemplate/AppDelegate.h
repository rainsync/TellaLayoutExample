//
//  AppDelegate.h
//  TellaLayoutTemplate
//
//  Created by 승원 김 on 12. 10. 21..
//  Copyright (c) 2012년 승원 김. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ContentController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *window;
//    IBOutlet UITabBarController *rootController;
    
    ContentController *contentController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
//@property (nonatomic, retain) IBOutlet UITabBarController *rootController;
@property (nonatomic, retain) IBOutlet ContentController *contentController;
@end
