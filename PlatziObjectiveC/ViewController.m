//
//  ViewController.m
//  PlatziObjectiveC
//
//  Created by Miguh Ruiz on 9/8/16.
//  Copyright © 2016 Miguh Ruiz. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.tweet = [[Tweet alloc] init];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)tweetAction:(id)sender {
    self.tweet.tweetBody = self.viewTweetBody.text;
    NSString *result = [[NSString alloc] initWithFormat:@"Enviaste %li caracteres", (long) self.tweet.numberOfCharacters];
    self.label.text = result;
    [self.viewTweetBody resignFirstResponder];
}
@end
