//
//  BillAdapter.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//


#import <Foundation/Foundation.h>

#define billCellIdentifier @"billCellIdentifier"

@interface BillAdapter : NSObject <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSArray *items;

@end
