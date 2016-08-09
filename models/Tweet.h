//
//  Tweet.h
//  PlatziObjectiveC
//
//  Created by Miguh Ruiz on 9/8/16.
//  Copyright © 2016 Miguh Ruiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tweet : NSObject
@property (strong, nonatomic) NSString* tweetBody;
@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSDate * tweetedAt;
@property (nonatomic)BOOL retweeted;
-(NSInteger)numberOfCharacters;

@end
