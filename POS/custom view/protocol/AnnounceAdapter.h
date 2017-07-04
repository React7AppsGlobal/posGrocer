//
//  AnnounceAdapter.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <Foundation/Foundation.h>

#define announceCellIdentifier @"announceCellIdentifier"
#define announceHeaderIdentifier @"announceHeaderIdentifier"

@class AnnounceItem;
@interface AnnounceAdapter : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSArray *items;

@end
