#import <UIKit/UIKit.h>

@protocol CustomCalloutViewTapDelegate <NSObject>

- (void)didDetailButtonTapped:(NSInteger)index;

@end



@interface CustomCalloutView : UIView<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSArray *poiArray;

@property (nonatomic, weak) id<CustomCalloutViewTapDelegate> delegate;

- (void)dismissCalloutView;

@end
