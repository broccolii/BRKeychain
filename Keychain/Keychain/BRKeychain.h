//
//  BRKeychain.h
//  Keychain
//
//  Created by Broccoli on 12/21/15.
//  Copyright © 2015 Broccoli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface BRKeychain : NSObject

+ (id)load:(NSString *)service;
+ (void)save:(NSString *)service data:(id)data;
+ (void)deleteData:(NSString *)service;

@end