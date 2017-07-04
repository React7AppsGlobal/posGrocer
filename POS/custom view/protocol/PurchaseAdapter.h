//
//  PurchaseAdapter.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//


#import <Foundation/Foundation.h>

#define purchaseItemCellIdeitnfier @"purchaseItemCellIdeitnfier"

@interface PurchaseAdapter : NSObject <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSArray *items;
@property (nonatomic, strong) NSDictionary *details;

@end
