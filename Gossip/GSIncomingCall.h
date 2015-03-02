//
//  GSIncomingCall.h
//  Gossip
//
//  Created by Chakrit Wichian on 7/12/12.
//

#import "GSCall.h"


@interface GSIncomingCall : GSCall

- (instancetype)initWithCallId:(int)callId toAccount:(GSAccount *)account;

@end
