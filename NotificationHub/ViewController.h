//
//  ViewController.h
//  NotificationHub
//
//  Created by Vijay Singh on 12/15/16.
//  Copyright © 2016 Phillips 66. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonHMAC.h>
#import "HubInfo.h"


@interface ViewController : UIViewController <UITextFieldDelegate, NSXMLParserDelegate>
{
    NSXMLParser *xmlParser;
}

@property (weak, nonatomic) IBOutlet UITextField *notificationMessage;
@property (weak, nonatomic) IBOutlet UILabel *sendResults;

@property (copy, nonatomic) NSString *statusResult;
@property (copy, nonatomic) NSString *currentElement;

@end

