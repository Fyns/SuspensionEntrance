//  EntranceViewController.h
//  SuspensionEntrance
//
//  Created by  XMFraker on 2019/8/8
//  Copyright © XMFraker All rights reserved. (https://github.com/ws00801526)
//  @class      EntranceViewController

#import <UIKit/UIKit.h>

#import "SuspensionEntrance.h"

NS_ASSUME_NONNULL_BEGIN

@interface EntranceViewController : UIViewController <SEItem>
@property (copy  , nonatomic) NSString *entranceTitle;
@property (copy  , nonatomic, nullable) NSURL *entranceIconUrl;
@property (copy  , nonatomic, nullable) NSDictionary *entranceUserInfo;
@end

NS_ASSUME_NONNULL_END
