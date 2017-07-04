//
//  BillCell.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <UIKit/UIKit.h>

@interface BillCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *billNoLabel;
@property (nonatomic, strong) IBOutlet UILabel *billDateLabel;
@property (nonatomic, strong) IBOutlet UILabel *customerNameLabel;
@property (nonatomic, strong) IBOutlet UILabel *staffNameLabel;
@property (nonatomic, strong) IBOutlet UILabel *amountLabel;
@property (nonatomic, strong) IBOutlet UILabel *statusLabel;

@end
