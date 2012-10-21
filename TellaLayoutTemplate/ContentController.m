//
//  ContentController.m
//  TellaLayoutTemplate
//
//  Created by 승원 김 on 12. 10. 21..
//  Copyright (c) 2012년 승원 김. All rights reserved.
//

#import "ContentController.h"

@implementation ContentController

@synthesize contentList;

- (void)dealloc
{
    [contentList release];
    [super dealloc];
}

- (UIView *)view
{
    return nil; // subclasses need to override this with their own view property
}

@end
