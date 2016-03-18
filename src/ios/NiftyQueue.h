//
//  NiftyQueue.h
//  Copyright 2016 NIFTY Corporation All Rights Reserved.
//
//

#ifndef HelloCordova_NiftyQueue_h
#define HelloCordova_NiftyQueue_h
#import <Foundation/Foundation.h>

@interface NiftyQueue : NSObject {
    NSMutableArray *_data;
}


- (NSDictionary*)dequeue;
- (void)enqueue:(NSDictionary*)value ;
- (BOOL)isEmpty;
@end

#endif
