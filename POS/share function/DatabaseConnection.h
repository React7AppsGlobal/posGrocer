//
//  DatabaseConnection.h
//  ExamKing
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"

@interface DatabaseConnection : NSObject

+ (FMDatabase*)GetPosDB;

@end
