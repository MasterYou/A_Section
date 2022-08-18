//
//  Target_A.h
//  A_Section
//
//  Created by master on 2022/8/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Target_A : NSObject

///获取该组件的AViewController的实例化对象
- (UIViewController *)Action_viewController:(NSDictionary *)param;

@end

NS_ASSUME_NONNULL_END
