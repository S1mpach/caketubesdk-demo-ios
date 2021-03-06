//
//  CTConnectionService.h
//  CakeTubeSDK
//
//  Created by Valentin Shergin on 17/02/15.
//  Copyright (c) 2015 AnchorFree. All rights reserved.
//

#import "CTConnectionServiceBase.h"
#import "CTConfig.h"

@class CTServerLocation;
@class CTOnDemandRules;

@interface CTConnectionService : CTConnectionServiceBase

- (void)setVpnProtocol:(CTVPNProtocol)vpnProtocol;
- (void)setName:(NSString *)vpnName;

@property(atomic, strong) CTOnDemandRules *onDemandRules;
@property(atomic, assign) BOOL onDemandEnabled;

- (void)connectVPNWithCompletion:(void (^)(CTServerLocation *location, NSError *error))completion;
@end
