//
//  MasterViewController.h
//  test111MinutesDegtyaryov
//
//  Created by Администратор on 9/18/12.
//  Copyright (c) 2012 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

{
    NSMutableArray *persons_;

}
@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) NSMutableArray *persons;
@end
