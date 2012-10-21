//
//  ContentController.h
//  TellaLayoutTemplate
//
//  Created by 승원 김 on 12. 10. 21..
//  Copyright (c) 2012년 승원 김. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContentController : NSObject
{
    NSArray *contentList;
}

@property (nonatomic, retain) NSArray *contentList;

- (UIView *)view;

@end
