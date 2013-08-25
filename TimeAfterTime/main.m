//
//  main.m
//  TimeAfterTime
//
//  Created by John Maddux on 8/25/13.
//  Copyright (c) 2013 John Maddux. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [NSDate date];
        NSLog(@"The date is %@", now);
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970.", seconds);
    }
    return 0;
}

