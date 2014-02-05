//
//  KZBookItem.h
//  KZBookshelf
//
//  Created by Kaz Yoshikawa on 14/2/2.
//  Copyright (c) 2014 Digital Lynx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZBookcaseItem.h"

//
//	KZBookItem
//

@interface KZBookItem : NSObject <KZBookcaseItem>

@property (strong) NSString *title;
@property (strong) UIImage *coverImage;

+ (id)bookItemWithTitle:(NSString *)title coverImage:(UIImage *)image;

- (id)initWithTitle:(NSString *)title coverImage:(UIImage *)image;

@end