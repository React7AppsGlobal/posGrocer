//
//  staff.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <Foundation/Foundation.h>

@interface staff : NSObject

@property (nonatomic, strong) NSString *staffNo;
@property (nonatomic, strong) NSString *staffRold;
@property (nonatomic, strong) NSString *staffId;
@property (nonatomic, strong) NSString *staffPwd;
@property (nonatomic, strong) NSString *staffName;
@property (nonatomic, strong) NSString *staffTel1;
@property (nonatomic, strong) NSString *staffTel2;
@property (nonatomic, strong) NSString *staffZip;
@property (nonatomic, strong) NSString *staffAddr;
@property (nonatomic, strong) NSString *arriveDate;
@property (nonatomic, strong) NSString *leaveDate;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *createUser;
@property (nonatomic, strong) NSString *createTime;
@property (nonatomic, strong) NSString *mdyUser;
@property (nonatomic, strong) NSString *mdyTime;
@property (nonatomic, strong) NSNumber *syncStatus;

@end
