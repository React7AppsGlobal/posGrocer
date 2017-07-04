//
//  ProductAdapter.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//


#import <Foundation/Foundation.h>

#define createCellIdentifier @"createCellIdentifier"

@interface ProductAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSInteger test;
}
@property (nonatomic, strong) NSArray *items;
@property (nonatomic, strong) NSString *category;

@end
