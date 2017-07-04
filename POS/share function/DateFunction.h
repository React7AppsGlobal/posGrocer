//
//  DateFunction.h
//  TimeCounter
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <Foundation/Foundation.h>

@interface DateFunction : NSObject
+ (DateFunction*)dateFunctionInstance;
- (NSDate*)chinsesDateToDate:(NSString*)dateString;
- (NSString*)dateToChineseDate:(NSDate*)date;
- (NSString*)DateToString:(NSDate*)aDate;
- (NSString*)DateToFullString:(NSDate*)aDate;
- (NSString*)GetTimeFormatWithDate:(NSDate*)date;
- (NSDate*)StringToDate:(NSString*)aString;
- (NSDate*)FullStringToDate:(NSString*)aString;
- (NSDate*)FullStringToDateWithoutSecond:(NSString *)aString;
- (NSString*)GetYearAndMonthWithDate:(NSString *)dateString;
- (NSString*)GetDaysBetweenDate1:(NSDate*)date1 andDate2:(NSDate*)date2;
- (NSInteger)GetWeekdayOfDate:(NSDate*)date;
- (NSInteger)calculateRealAge:(NSDate *)dateOfBirth;
- (NSInteger)calculateInsuranceAge:(NSDate *)dateOfBirth;
- (BOOL)checkIsLeapYearOfYear:(NSUInteger)year;

@end
