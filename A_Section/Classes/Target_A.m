//
//  Target_A.m
//  A_Section
//
//  Created by master on 2022/8/18.
//

#import "Target_A.h"
#import "AViewController.h"

@implementation Target_A

-(UIViewController *)Action_viewController:(NSDictionary *)param{
    AViewController *viewController = [[AViewController alloc] init];
    return viewController;
}

@end
