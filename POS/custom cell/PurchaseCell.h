//
//  PurchaseCell.h
//  posGrocer
//
//  Created by Zen Innovation on june 2017.
//

#import <UIKit/UIKit.h>

@interface PurchaseCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *productLabel;
@property (nonatomic, strong) IBOutlet UILabel *priceLabel;
@property (nonatomic, strong) IBOutlet UILabel *pieceLabel;
@property (nonatomic, strong) IBOutlet UILabel *amountLabel;
@property (nonatomic, strong) IBOutlet UILabel *staffLabel;

@end
