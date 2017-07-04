//
//  PathAndDirectoryFunction.m
//  MLIproposal
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import "PathAndDirectoryFunction.h"

@implementation PathAndDirectoryFunction

+ (PathAndDirectoryFunction*)pathAndDirectoryInstance
{
    static id PathAndDirectoryInstance = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        PathAndDirectoryInstance = [PathAndDirectoryFunction new];
    });
    
    return PathAndDirectoryInstance;
}

#pragma mark - Get the path or file path of the personal folder
/**
 Get personal folders
 */
- (NSString*)getDocumentDirectoryForComponent:(NSString*)comp
{
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);  
    NSString *documentsDirectory = [paths objectAtIndex:0];
    documentsDirectory = [documentsDirectory stringByAppendingPathComponent:comp];
    return documentsDirectory;
}

#pragma mark - document Get the full path in the folder

- (NSString*)getDocumentPathForFileName:(NSString*)fileName andExtension:(NSString*)ext
{
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);  
    NSString *documentsDirectory = [paths objectAtIndex:0];
    NSString *fullPath = [documentsDirectory stringByAppendingPathComponent:fileName];
    fullPath = [fullPath stringByAppendingPathExtension:ext];
    return fullPath;
}

#pragma mark -  Temporary Get the full path in the folder
- (NSString*)getTempPathForFileName:(NSString*)file andExtension:(NSString*)ext;
{
    NSString *tempDirectory = NSTemporaryDirectory();
    NSString *fullPath = [tempDirectory stringByAppendingPathComponent:file];
    fullPath = [fullPath stringByAppendingPathExtension:ext];
    return fullPath;
}

#pragma mark -  Cache - Get the full path in the folder
- (NSString*)getCachePathForFileName:(NSString*)file andExtension:(NSString*)ext
{
    NSString *cachePath = [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject];
    NSString *cacheFile = [cachePath stringByAppendingPathComponent:file];
    cacheFile = [cacheFile stringByAppendingPathExtension:ext];
    return cacheFile;
}

@end
