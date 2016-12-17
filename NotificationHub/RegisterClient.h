//
//  RegisterClient.h
//  NotificationHub
//
//  Created by Vijay Singh on 12/16/16.
//  Copyright © 2016 Phillips 66. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RegisterClient : NSObject

@property (strong, nonatomic) NSString* authenticationHeader;

-(void) registerWithDeviceToken:(NSData*)token tags:(NSSet*)tags
                  ;

-(instancetype) initWithEndpoint:(NSString*)Endpoint;

@end


