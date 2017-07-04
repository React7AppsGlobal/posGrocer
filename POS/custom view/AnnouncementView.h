//
//  AnnouncementView.h
//  posGrocer
//
//  Developed by IntelLigenEthics>EcMa< for Zen Innovation(M) S.B June 2017.
//

#import "RootView.h"

@protocol AnnounceDelegate <NSObject>

@end
@interface AnnouncementView : RootView

@property (nonatomic, strong) id <AnnounceDelegate> delegate;
@property (nonatomic, strong) IBOutlet UITableView *aTableView;

@end
