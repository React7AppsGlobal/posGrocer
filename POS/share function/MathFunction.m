//
//  MathFunction.m
//  MLIproposal
//
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import "MathFunction.h"

@implementation MathFunction

#pragma mark Defines static utility in variables

+ (MathFunction*)mathFunctionInstance
{
    static id mathFunctionInstance = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        mathFunctionInstance = [MathFunction new];
    });
    
    return mathFunctionInstance;
}
#pragma mark To determine whether it is a floating point
- (BOOL)isPureInt:(NSString*)string
{
    NSScanner* scan = [NSScanner scannerWithString:string]; 
    
    int val; 
    return[scan scanInt:&val] && [scan isAtEnd];
    
}

#pragma mark To determine whether it is a floating point
- (BOOL)isPureFloat:(NSString*)string
{
    
    NSScanner* scan = [NSScanner scannerWithString:string]; 
    
    float val; 
    
    return[scan scanFloat:&val] && [scan isAtEnd];
    
}

#pragma mark null1
- (NSNumber*)roundWithDigit:(NSUInteger)digit andRoundNumber:(NSNumber*)number
{
    NSNumber *result = nil;
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setRoundingMode:NSNumberFormatterRoundHalfUp];
    [formatter setMaximumFractionDigits:digit];
    [formatter setMinimumFractionDigits:digit];
    //NSLog(@"round target:%@ result:%@",number,[formatter  stringFromNumber:number]);
    result = [NSNumber numberWithDouble:[[formatter  stringFromNumber:number] doubleValue]];
    return result;
}

#pragma mark Rounding off
- (NSNumber*)ceilWithDigit:(NSUInteger)digit andCeilNumber:(NSNumber*)number
{
    NSNumber *result = nil;
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setRoundingMode:NSNumberFormatterRoundCeiling];
    [formatter setMaximumFractionDigits:digit];
    //NSLog(@"ceil target:%@ result:%@",number,[formatter  stringFromNumber:number]);
    result = [NSNumber numberWithDouble:[[formatter  stringFromNumber:number] doubleValue]];
    return result;
}

#pragma mark Unconditional rounding
- (NSNumber*)floorWithDigit:(NSUInteger)digit andFloorNumber:(NSNumber*)number
{
    NSNumber *result = nil;
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setRoundingMode:NSNumberFormatterRoundFloor];
    [formatter setMaximumFractionDigits:digit];
    result = [NSNumber numberWithDouble:[[formatter  stringFromNumber:number] doubleValue]];
    //NSLog(@"prev:%@, result:%@",number, result);
    return result;
}

#pragma mark Show commas
- (NSString*)displayDefaultNumberWithNumber:(NSNumber*)number
{
    NSString *result = nil;
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setNumberStyle:NSNumberFormatterDecimalStyle];
    [formatter setRoundingMode:NSNumberFormatterRoundFloor];
    [formatter setMaximumFractionDigits:2];
    //NSLog(@"display target:%@ result:%@",number,[formatter  stringFromNumber:number]);
    result = [formatter  stringFromNumber:number];
    if (result == nil)
        return @"";
    return result;
}

- (NSString*)displayDefaultNumberWithNumber:(NSNumber *)number andDigit:(NSUInteger)digit
{
    NSString *result = nil;
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setNumberStyle:NSNumberFormatterDecimalStyle];
    [formatter setRoundingMode:NSNumberFormatterRoundHalfUp];
    [formatter setMaximumFractionDigits:digit];
    result = [formatter  stringFromNumber:number];
    if (result == nil)
        return @"";
    return result;
}

#pragma mark Show the percentage
- (NSString*)displayPercentageWithNumber:(NSNumber*)number
{
    number = [self roundWithDigit:4 andRoundNumber:number];
    NSString *result = nil;
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setNumberStyle:NSNumberFormatterPercentStyle];
    [formatter setRoundingMode:NSNumberFormatterRoundFloor];
    [formatter setMaximumFractionDigits:4];
    //NSLog(@"percentage target:%@ result:%@",number,[formatter  stringFromNumber:number]);
    result = [formatter  stringFromNumber:number];
    return result;
}

- (NSString*)displayPercentageWithNumber:(NSNumber*)number andDigit:(NSUInteger)digit
{
    number = [self roundWithDigit:4 andRoundNumber:number];
    NSString *result = nil;
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setNumberStyle:NSNumberFormatterPercentStyle];
    [formatter setRoundingMode:NSNumberFormatterRoundFloor];
    [formatter setMinimumFractionDigits:2];
    [formatter setMaximumFractionDigits:4];
    //NSLog(@"percentage target:%@ result:%@",number,[formatter  stringFromNumber:number]);
    result = [formatter  stringFromNumber:number];
    return result;
}

- (NSString*)displayRateWithNumber:(NSNumber*)number
{
    NSString *desc = nil;
    if ([number doubleValue] == 0)
    {
        desc = [NSString stringWithFormat:@""];
    }
    else
    {
        desc = [NSString stringWithFormat:@"%@",[self displayPercentageWithNumber:[NSNumber numberWithDouble:([number doubleValue] / 100)]]];
    }
    return desc;
}

- (NSNumber*)maxNumberWithNumber:(double)num1 andOther:(double)num2
{
    if (num1 > num2)
        return [NSNumber numberWithDouble:num1];
    else
        return [NSNumber numberWithDouble:num2];
}

@end
