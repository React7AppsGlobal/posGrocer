//
//  MenuTableViewController.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//


#import <UIKit/UIKit.h>
#import "REFrostedViewController.h"

typedef NS_ENUM(NSInteger, PMenuOption) {
    PMenuOptionAnnounce = 0,
    PMenuOptionCreate = 1,
    PMenuOptionModify = 2,
    PMenuOptionSubTotal = 3,
    PMenuOptionQuery = 4,
    PMenuOptionCount = 5,
};

@class MenuTableViewController;
@protocol MenuOptionDelegate <NSObject>

- (void)menu:(MenuTableViewController*)menu didPickWithOption:(PMenuOption)option;

@end

@interface MenuTableViewController : REFrostedViewController <UITableViewDataSource, UITableViewDelegate>

@property id <MenuOptionDelegate> delegate;

@end
