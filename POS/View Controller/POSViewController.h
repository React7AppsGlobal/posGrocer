//
//  POSViewController.h
//  posGrocer
//
//  Developed by IntelLigenEthics>EcMa< for Zen Innovation(M) S.B June 2017.
//

#import <UIKit/UIKit.h>

@interface POSViewController : UIViewController

@property (nonatomic, strong) IBOutlet UIView *titleView;
@property (nonatomic, strong) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) IBOutlet UILabel *dateLabel;

- (void)showMenu;

- (IBAction)showMenuButtonPress:(id)sender;


@end
