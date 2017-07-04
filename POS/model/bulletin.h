//
//  bulletin.h
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <Foundation/Foundation.h>

@interface bulletin : NSObject

@property (nonatomic, strong) NSString *bulletinNo;
@property (nonatomic, strong) NSString *bulletinType;
@property (nonatomic, strong) NSString *start;
@property (nonatomic, strong) NSString *end;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *createUser;
@property (nonatomic, strong) NSString *createTime;
@property (nonatomic, strong) NSString *mdyUser;
@property (nonatomic, strong) NSString *mdyTime;

@end
