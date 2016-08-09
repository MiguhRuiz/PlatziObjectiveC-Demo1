//
//  ViewController.h
//  PlatziObjectiveC
//
//  Created by Miguh Ruiz on 9/8/16.
//  Copyright © 2016 Miguh Ruiz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)tweetAction:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *viewTweetBody;
@property (weak, nonatomic) IBOutlet UILabel *label;

@end

