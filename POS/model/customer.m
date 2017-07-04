//
//  customer.m
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import "customer.h"

@implementation customer

- (id)init
{
    self = [super init];
    if (self)
    {
        self.syncStatus = [NSNumber numberWithInteger:syncStatusNeed];
    }
    return self;
}

@end
