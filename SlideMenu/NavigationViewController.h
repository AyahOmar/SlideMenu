//
//  NavigationViewController.h
//  SlideMenu
//
//  Created by JETS on 4/4/16.
//  Copyright (c) 2016 JETS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NavigationViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{

IBOutlet UITableView *tableview;
    
    NSArray *menu;
}
@end
