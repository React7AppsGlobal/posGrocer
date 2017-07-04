//
//  LoginViewController.h
//  posGrocer
//
//  Developed by IntelLigenEthics>EcMa< for Zen Innovation(M) S.B June 2017.
//


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, loginSection) {
    loginSectionField = 0,
    loginSectionButton = 1,
};

@interface LoginViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) IBOutlet UITableView *aTableView;

@end
