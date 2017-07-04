//
//  DatabaseConnection.m
//  ExamKing
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import "DatabaseConnection.h"
#import "PathAndDirectoryFunction.h"


@implementation DatabaseConnection

+ (FMDatabase*)GetPosDB
{
    NSError *error = nil;
    NSString *dbPath = [[PathAndDirectoryFunction pathAndDirectoryInstance] getDocumentPathForFileName:db_data andExtension:db_sqlite];
    NSString *sourcePath = [[NSBundle mainBundle] pathForResource:db_data ofType:db_sqlite];
    if (![[NSFileManager defaultManager] fileExistsAtPath:dbPath])
    {
        if (![[NSFileManager defaultManager] copyItemAtPath:sourcePath toPath:dbPath error:&error])
        {
            NSLog(@"faild to copy data.sqlite (%@)", error);
        }
    }
    //create singleton object
    static FMDatabase *db = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        db = [FMDatabase databaseWithPath:dbPath];
        if ([db open])
        {
            NSLog(@"open control.sqlite succeed");
        }
    });
    
    return db;
}


@end
