// ----------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// ----------------------------------------------------------------------------

#import "ZumoTest.h"
#import "GoogleSignIn/GoogleSignIn.h"

typedef void (^AzureLoginBlock)(GIDGoogleUser*);

@interface ZumoTestGoogleSignInDelegate : NSObject <GIDSignInDelegate>

- (void)setZumoTest:(ZumoTest *)test completion:(ZumoTestCompletion)completion andAzureLoginBlock:(AzureLoginBlock)loginBlock;

@end
