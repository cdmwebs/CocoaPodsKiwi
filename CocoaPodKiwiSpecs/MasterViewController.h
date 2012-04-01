//
//  MasterViewController.h
//  CocoaPodKiwiSpecs
//
//  Created by Chris Moore on 3/31/12.
//  Copyright (c) 2012 26Webs LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
