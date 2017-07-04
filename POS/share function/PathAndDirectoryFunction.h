//
//  PathAndDirectoryFunction.h
//  MLIproposal
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <Foundation/Foundation.h>

#define db_db @"db"
#define db_sqlite @"sqlite"
#define db_data @"pos"

@interface PathAndDirectoryFunction : NSObject

+ (PathAndDirectoryFunction*)pathAndDirectoryInstance;

- (NSString*)getDocumentDirectoryForComponent:(NSString*)comp;
- (NSString*)getDocumentPathForFileName:(NSString*)fileName andExtension:(NSString*)ext;
- (NSString*)getTempPathForFileName:(NSString*)file andExtension:(NSString*)ext;
- (NSString*)getCachePathForFileName:(NSString*)file andExtension:(NSString*)ext;

@end
