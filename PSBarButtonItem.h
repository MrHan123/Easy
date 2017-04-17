//
//  PSBarButtonItem.h
//  PublicFundraising
//
//  Created by Apple on 17/04/9.
//  Copyright © 2017年 SanNiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PSBarButtonItem : UIBarButtonItem

typedef NS_ENUM(NSInteger, PSNavItemStyle) {
    
    PSNavItemStyleBack, //返回
    PSNavItemStyleDone
};

+ (instancetype)itemWithTitle:(NSString *)title
                        barStyle:(PSNavItemStyle)style
                       target:(id)target
                       action:(SEL)action;

+ (instancetype)itemWithImageName:(NSString *)normalImageName highLightImageName:(NSString *)highImageName selectedImageName:(NSString *)selectedImageName target:(id)target action:(SEL)action;
@end
