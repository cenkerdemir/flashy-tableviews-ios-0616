//
//  FlashyTvTableViewController.h
//  flashyTableviews
//
//  Created by Cenker Demir on 6/29/16.
//  Copyright © 2016 Cenker Demir. All rights reserved.
//

#import <UIKit/UIKit.h>

// importing the pod header files
#import "SWTableViewCell.h"
#import "UIScrollView+APParallaxHeader.h"

//confirm below to the protocol so we can use the SWTableViewCellDelegate

@interface FlashyTvTableViewController : UITableViewController <SWTableViewCellDelegate>

@end
