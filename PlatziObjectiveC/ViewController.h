//
//  ViewController.h
//  PlatziObjectiveC
//
//  Created by Miguh Ruiz on 9/8/16.
//  Copyright © 2016 Miguh Ruiz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *viewTweetBody;
@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)tweetAction:(id)sender;

@property (strong, nonatomic) Tweet *tweet;

@end

