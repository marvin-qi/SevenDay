//
//  TestViewController.h
//  SevenDay
//
//  Created by macbook for test on 16/12/2.
//  Copyright © 2016年 JackPanda8. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestViewController : UIViewController

- (IBAction)chatButton:(id)sender;

- (void)pushToChatViewControllerWith:(IMAUser *)user;

@end