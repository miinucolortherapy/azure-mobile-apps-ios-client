// ----------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// ----------------------------------------------------------------------------

#import "MSInstallationTemplate.h"

@implementation MSInstallationTemplate

-(id) initWithBody:(NSString *)body
            expiry:(NSString *)expiry
              tags:(NSArray *)tags
{
  self = [super init];
  if (self) {
    _body = body;
    _expiry = expiry;
    _tags = tags;
  }
  return self;
}

@end
