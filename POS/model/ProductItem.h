//
//  ProductItem.h
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <Foundation/Foundation.h>

@interface ProductItem : NSObject

@property (nonatomic, strong) NSNumber *Id;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *comment;
@property (nonatomic, strong) NSNumber *price;
@property (nonatomic, strong) NSNumber *stock;
@property (nonatomic, strong) NSNumber *count;
@property (nonatomic, strong) NSString *imageUrl;

@end
