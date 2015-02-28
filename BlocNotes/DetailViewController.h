//
//  DetailViewController.h
//  BlocNotes
//
//  Created by tom on 28/02/15.
//  Copyright (c) 2015 Resolvex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

