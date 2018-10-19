//
//  AppDelegate.h
//  XGTESTPROGRAM
//
//  Created by 顾九针 on 2018/10/17.
//  Copyright © 2018 顾九针. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

