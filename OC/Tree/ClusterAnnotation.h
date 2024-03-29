#import <Foundation/Foundation.h>
#import <MAMapKit/MAMapKit.h>
#import <AMapSearchKit/AMapCommonObj.h>

@interface ClusterAnnotation : NSObject<MAAnnotation>

@property (assign, nonatomic) CLLocationCoordinate2D coordinate; //poi的平均位置
@property (assign, nonatomic) NSInteger count;
@property (nonatomic, strong) NSMutableArray *pois;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *subtitle;


- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate count:(NSInteger)count;

@end
